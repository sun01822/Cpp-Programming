#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    
    vector<pair<int, int>> v;
    vector<pair<int, int>>::iterator it;

    v.push_back({1,5});
    v.push_back({2,3});
    v.push_back({1,2});
    
    sort(v.begin(), v.end());

    for(it=v.begin(); it!=v.end(); it++)
        cout << it->first << ' ' << it->second << '\n';

    return 0;
}