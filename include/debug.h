#pragma once
#include <bits/stdc++.h>

namespace dbg_detail {

template <class T>
concept Iterable = requires(const T& x) { std::begin(x); std::end(x); };

inline void pr(const std::string& s) { std::cerr << '"' << s << '"'; }
inline void pr(const char* s)        { std::cerr << '"' << s << '"'; }
inline void pr(char c)               { std::cerr << '\'' << c << '\''; }
inline void pr(bool b)               { std::cerr << (b ? "true" : "false"); }

template <class T> void pr(const T& x);
template <class A, class B> void pr(const std::pair<A, B>& p);
template <class... Ts> void pr(const std::tuple<Ts...>& t);

template <class A, class B> void pr(const std::pair<A, B>& p) {
    std::cerr << '(';  pr(p.first);  std::cerr << ", ";  pr(p.second);  std::cerr << ')';
}

template <class... Ts> void pr(const std::tuple<Ts...>& t) {
    bool first = true;
    std::cerr << '(';
    std::apply([&](const auto&... xs) {
        ((std::cerr << (first ? "" : ", "), pr(xs), first = false), ...);
    }, t);
    std::cerr << ')';
}

template <class T> void pr(const T& x) {
    if constexpr (Iterable<T>) {
        bool first = true;
        std::cerr << '{';
        for (const auto& e : x) { if (!first) std::cerr << ", "; pr(e); first = false; }
        std::cerr << '}';
    } else {
        std::cerr << x;
    }
}

template <class... Ts>
void emit(int line, const char* names, const Ts&... xs) {
    bool first = true;
    std::cerr << "\033[1;33mL" << line << "\033[0m  " << names << " = ";
    ((std::cerr << (first ? "" : " | "), pr(xs), first = false), ...);
    std::cerr << std::endl;
}

}  // namespace dbg_detail

#define dbg(...) dbg_detail::emit(__LINE__, #__VA_ARGS__, __VA_ARGS__)
