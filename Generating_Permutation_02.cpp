#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    vector<int> permutation;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        permutation.push_back(i);
    }

    do{
        for(auto i: permutation)
            cout << i << ' ';
        cout << '\n';
    }while(next_permutation(permutation.begin(), permutation.end()));

    return 0;
}