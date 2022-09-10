#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    vector<tuple<int, int, int>> v;
    vector<tuple<int, int, int>>::iterator it;

    v.push_back({2,1,4});
    v.push_back({1,5,3});
    v.push_back({2,1,3});

    sort(v.begin(), v.end());

    for(it=v.begin(); it!=v.end(); it++)
        cout << get<0>(*it) << " " << get<1>(*it) << " " << get<2>(*it) << '\n';

    return 0;
}