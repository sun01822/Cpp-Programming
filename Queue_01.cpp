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

    // it will access the last element
    cout << q.back() << '\n';  // 5

    // it will access the first element
    cout << q.front() << '\n';  // 3
    q.pop();
    cout << q.front() << '\n';  // 2
    
    return 0;
}