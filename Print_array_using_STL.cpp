#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int a[] = {1,5,3,2,5};

    for(auto it=begin(a); it!=end(a); it++)
        cout << *it << ' ';
    cout << '\n';
    return 0;
}