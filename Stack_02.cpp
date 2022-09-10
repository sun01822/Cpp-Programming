#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    stack<int> s;
    s.push(5);
    s.push(3);
    s.push(2);
    s.push(1);
    s.push(6);
    s.push(10);
    s.push(8);
    s.push(8);
    s.push(7);
    s.push(4);

    while(!s.empty())
    {
        cout << s.top() << ' ';
        s.pop();
    }

    return 0;
}