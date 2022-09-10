// Best formula to find fibonacci series
// Binne
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int Binnet(int n)
{
    return (pow(1 + sqrt(5), n) - pow(1 - sqrt(5), n)) / (pow(2, n) * sqrt(5));
}

int solve(int n)
{
    int a = 1, b = 1;
    if (n <= 2)
        return 1;
    for (int i = 1; i < n; ++i)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
        cout << solve(i) << ' ';
    cout << '\n';

    for (int i = 0; i <= n; i++)
        cout << Binnet(i) << ' ';
    cout << '\n';

    return 0;
}