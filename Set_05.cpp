#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    set<int> s;
    set<int>::iterator it;
    s.insert(7);
    s.insert(6);
    s.insert(5);

    // It will print the 1st value;
    auto i = s.begin();
    cout << *i << '\n';  // 5

    for(it=s.begin(); it!=s.end(); it++)
        cout << *it << ' ';
    cout << '\n';

    // It will return the last value
    auto t = s.end(); 
    t--;
    cout << *t << "\n";


    return 0;
}