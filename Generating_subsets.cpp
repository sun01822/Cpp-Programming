#include<bits/stdc++.h>
using namespace std;
vector<int> subset;
int cnt;
#define ll long long

void search(int k)
{
    int n = 3;
    if(k == n)
    {
        cout << cnt++ << ": ";
        for(auto i: subset)
            cout << i << ' ';
        cout << '\n';
    }
    else
    {
        search(k+1);
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    search(0);
    return 0;
}