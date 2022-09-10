#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    priority_queue<int, vector<int>, greater<int>> q;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(2);
    q.push(6);
    //q.pop();

    while(!q.empty())
    {
        cout << q.top() << ' ';
        q.pop();
    }
    return 0;
}