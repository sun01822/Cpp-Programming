#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    set<int> s;
    s.insert(6);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    int x = 10;
    
    auto it = s.find(x);

    if(it == s.end())
        cout << x << " is not found" << '\n';
    else
        cout << x << " is found" << '\n';

    return 0;
}