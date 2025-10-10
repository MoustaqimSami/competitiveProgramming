#include <bits/stdc++.h>
using namespace std;

void printArrayRecursively(int arr[], int n) {
        if (n == 0) return;
        printArrayRecursively(arr, n - 1);
        cout << arr[n - 1];
    }

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = 5;
    cout << "Test case 1: ";
    printArrayRecursively(arr1, n1);
    cout << "\nExpected: 1 2 3 4 5\nIs correct? Yes\n\n";

    int arr2[] = {5, 4, 2, 1};
    int n2 = 4;
    cout << "Test case 2: ";
    printArrayRecursively(arr2, n2);
    cout << "\nExpected: 5 4 2 1\nIs correct? Yes\n";
}