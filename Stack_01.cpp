#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(5);
    
    cout << s.top() << '\n';  // 5
    s.pop();
    cout << s.top() << '\n';  // 2
    return 0;
}