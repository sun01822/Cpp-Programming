#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    
    // it can contain multiple instances of an element
    multiset<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);

    cout << s.count(5) << '\n';  // 3

    // this function will remove all the instance of input number
    //s.erase(5);
    //cout << s.count(5) << '\n';  // 0


    // if we want to remove one instance
    s.erase(s.find(5));
    cout << s.count(5) << '\n';   // 2

    return 0;
}