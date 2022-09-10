#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    set<int> s = {2, 5, 6, 8};
    cout << "Size of set: " << s.size() << '\n';

    for(auto x : s)
    {
        cout << x << '\n';
    }

    return 0;
}
