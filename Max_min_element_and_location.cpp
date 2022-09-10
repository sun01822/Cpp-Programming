// This will help us to find the 
// maximum and minimum term in the collection
// This will also find their location

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int a = 9, b = 12;
    //out.first contains the minimum element, out.second is the maximum one
    auto out = minmax(a,b);

    cout << "min: " << out.first << '\n';
    cout << "max: " << out.second << '\n';

    // Dynamic Array
    vector<int> collection = {6,5,3,2,1,4,6,7};
    auto result = minmax_element(begin(collection), end(collection));
    // You can also add compare function as the third argument
    cout << (result.first - collection.begin()) << '\n';
    cout << (result.second - collection.begin()) << '\n';
    
    
    return 0;
}