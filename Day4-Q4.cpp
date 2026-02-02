#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int a = 0, b = 1, next;

    cout << "Fibonacci Series: ";
    if (n >= 1) cout << a << " ";
    if (n >= 2) cout << b << " ";

    for (int i = 2; i < n; i++) {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    return 0;
}