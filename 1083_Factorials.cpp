#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define PI acos(-1)
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll fact=1;
    int n;
    string s;
    cin >> n >> s;
    for(int i=n; i>=1; i-=s.length())
    {
        fact*=i;
    }

    cout << fact << endl;

    return 0;
}

/*
 * Think twice, code once
 * Think of different approaches to tackle a problem: write them down.
 * Think of different views of the problem. don't look from only one side.
 * don't get stuck in one approach.
 * common mistakes: over_flow
 *                  - out_of_bound index
 *                  -infinite loop
 *                  -corner cases
 *                  -duplication counting.
 */