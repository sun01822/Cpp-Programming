#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    queue<int> q;
    q.push(3);
    q.push(2);
    q.push(5);
    q.push(10);
    q.push(6);
    q.push(1);
    q.push(4);
    q.push(7);
    q.push(8);

    while(!q.empty())
    {
        cout << q.front() << ' ';
        q.pop();
    }

    return 0;
}