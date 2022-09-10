#include<bits/stdc++.h>
using namespace std;

bool comp(string a, string b)
{
    if(a.size() != b.size()) return a.size() < b.size();
    return a < b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    vector<string> v;
    vector<string>::iterator it;

    v.push_back("Sun");
    v.push_back("Moon");
    v.push_back("Akbar");
    v.push_back("Suktara");


    sort(v.begin(), v.end(), comp);

    for(it=v.begin(); it!=v.end(); it++)
        cout << *it << '\n';

    return 0;
}