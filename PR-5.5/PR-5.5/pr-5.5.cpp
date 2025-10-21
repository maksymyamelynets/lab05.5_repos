#include <iostream>
using namespace std;

int Q(int m, int n) {
    if (n == 1)
        return 1;
    if (m == 1)
        return 1;
    if (m < n)
        return Q(n, m);
    if (m == n)
        return 1 - Q(m, m - 1);
    return Q(m, n - 1) + Q(m - n, n);
}

int main() {
    int m, n;
    cout << "m= "; cin >> m;
    cout << "n= "; cin >> n;

    cout << "result = " << Q(m, n) << endl;

    return 0;
}

