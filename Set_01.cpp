#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    set<int> s;

    s.insert(3);
    s.insert(2);
    s.insert(5);

    cout << s.count(3) << '\n';   // 1
    cout << s.count(4) << '\n';   // 0

    s.erase(3);
    s.insert(4);
    cout << s.count(3) << '\n';  // 0
    cout << s.count(4) << '\n';  // 1;

    return 0;
}