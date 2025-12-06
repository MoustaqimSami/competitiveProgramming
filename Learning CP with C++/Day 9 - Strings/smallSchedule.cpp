#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q, M, S, L;
    cin >> Q >> M >> S >> L;

    int b_layer_num = L / M;
    int b_layer_rem = L % M;
    int b_layer_sum = Q * b_layer_num + ((b_layer_rem == 0) ? 0 : Q);

    int rem_slots = Q * (M - ((b_layer_rem == 0) ? M : b_layer_rem));

    int s_layer_sum = 0;

    if (rem_slots >= S) goto finish;
    else {
        int s_layer_num = ((S - rem_slots) / M);
        int s_layer_rem = ((S - rem_slots) % M);
        s_layer_sum = s_layer_num + ((s_layer_rem == 0) ? 0 : 1);
    }

    goto finish;

    finish:
    int time = b_layer_sum + s_layer_sum;
    cout << time;
}