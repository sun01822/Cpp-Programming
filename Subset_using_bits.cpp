#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    for(int b=0; b<(1<<n); b++)
    {
        vector<int> subset;
        for(int i=0; i<n; i++)
        {
            if(b&(1<<i))
                subset.push_back(i);
        }
        for(auto i: subset)
            cout << i << ' ';
        cout << '\n';
    }
    return 0;
}