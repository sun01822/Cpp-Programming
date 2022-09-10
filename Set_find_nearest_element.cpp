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
    s.insert(5);
    s.insert(8);
    s.insert(7);
    s.insert(10);
    s.insert(9);

    int x = 7;

    auto it = s.lower_bound(x);

    if(it == s.begin())
        cout << *it << '\n';
    else if(it == s.end())
    {
        it--;
        cout << *it << '\n';
    }

    else 
    {
        int a = *it; it--;
        int b = *it;
        cout << max(a,b) << '\n';
        // if(x-b < a-x)
        //     cout << b << '\n';
        // else    
        //     cout << a << '\n';
    }

    return 0;
}