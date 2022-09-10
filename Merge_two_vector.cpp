#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    vector<int> c1 = {1,2,5,5,5,6,9,12};
    vector<int> c2 = {2,4,4,5,7,15};
    vector<int> result;   // contains merged elements

    merge(begin(c1), end(c1), begin(c2), end(c2), back_inserter(result));

    for(auto i: result)
        cout << i << ' ';
    cout << '\n';

    return 0;
}