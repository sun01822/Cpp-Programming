#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    
    // We can also declare vector as this way
    vector<int> v = {2, 4, 2, 5, 1};

    // size 10, initial value 0
    vector<int> v2(10);

    // size 10, initial value 5;
    vector<int> v3(10, 5);

    string a = "hatti";
    string b = a+a;
    
    cout << b << '\n';   // hattihatti
    b[5] = 'v';

    cout << b << '\n';  // hattibatti;

    string c = b.substr(3,4);

    cout << c << '\n';  // tiva 

    return 0;
}