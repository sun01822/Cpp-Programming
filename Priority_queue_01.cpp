#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    priority_queue<int> q;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(2);

    cout << q.top() << '\n';  // 7
    q.pop();
    cout << q.top() << '\n';  // 5
    q.pop();
    q.push(6);
    cout << q.top() << '\n';  // 6
    q.pop();

    return 0;
}