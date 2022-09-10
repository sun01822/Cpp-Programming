#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    map<string, int> m;
    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 9;
    
    cout << m["banana"] << '\n';     // 3
    cout << m["aybabtu"] << '\n';   //  0;

    // Check if it  occurs
    if(m.count("aybabtu"))
    {
        cout << "Yes" << '\n';
    }

    else
        cout << "No" << '\n'; 


    // Print the map
    for(auto x : m)
    {
        cout << x.first << " " << x.second << '\n';
    }

    return 0;
}