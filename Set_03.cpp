#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);

    cout << s.count(5) << '\n';  // 1

    return 0;
}