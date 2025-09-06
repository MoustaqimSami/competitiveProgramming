#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    int x = a;
    a = b;
    b = x;

    cout << a << " " << b << endl;

    int z = 3;
    double y = z + 4.5;

    cout << y << "\n" << endl;

    int p = 4;

    float q = static_cast<float>(p) + 2.3;
    cout << q << "\n" << endl;

    string n = typeid(a).name();
    return 0;
}
