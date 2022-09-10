#include<bits/stdc++.h>
using namespace std;

#define ll long long

template<typename T1, typename T2, typename T3>

struct info
{
    /* data */
    T1 x; T2 y; T3 z;
    // overload () to make tuple
    auto operator()()
    {
        return make_tuple(x,y,z);
    }
};

info<int, string, double> data{1, "one", 1.1};
int a;
string b;
double c;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    // auto &[a,b,c] = data;

    // cout << a << ' ' << b << ' ' << c << '\n';

    // Another way
    tie(a,b,c) = data();
    cout << a << ' ' << b << ' ' << c << '\n';

    return 0;
}