#include <iostream>
#include <iomanip>
using namespace std;

int Q(int m, int n, int& count, int level)
{
    count++; // л≥чильник ус≥х виклик≥в функц≥њ

    cout << "Level " << setw(2) << level;
    int n = n & (n - 1);

    cout << n << level + 1 << endl;

    if (n == 1)
        return 1;
    if (m == 1)
        return 1;
    if (m < n)
        return Q(n, m, count, level + 1);
    if (m == n)
        return 1 - Q(m, m - 1, count, level + 1);

    // тут головне Ч передати count ≥ level + 1 дал≥
    return Q(m, n - 1, count, level + 1) + Q(m - n, n, count, level + 1);
}

int main()
{
    int m, n;
    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;

    int count = 0;
    int result = Q(m, n, count, 1);

    cout << endl;
    cout << "Result = " << result << endl;
    cout << "Total recursion calls = " << count << endl;

    return 0;
}
