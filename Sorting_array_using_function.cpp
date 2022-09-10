#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {4, 2, 5, 3, 5, 8, 3};
    
    // sort reversely
    //sort(v.rbegin(), v.rend());
    sort(v.begin(), v.end());

    for(auto i: v)
    {
        cout << i << ' ';
    }
    cout << '\n';

    // sort array using sort function
    int arr[] = {4, 2, 5, 3, 5, 8, 3};
    int n = sizeof(arr) / sizeof(int);
    sort(arr, arr+n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << ' ';
    }

    cout << '\n';


    // sorting string
    string s = "monkey";
    sort(s.begin(), s.end());

    cout << s << '\n';
    return 0;
}