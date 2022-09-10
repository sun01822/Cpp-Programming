#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(array)/sizeof(int);
    int x;
    cin >> x;
    
/*
    auto k = lower_bound(array, array+n, x) - array;

    if(k < n && array[k] == x)
    {
        cout << x << " is found at index " << k << '\n'; 
    }

    else
        cout << x << " is not found" << '\n';

*/


/*
    auto a = lower_bound(array, array+n, x);
    auto b = upper_bound(array, array+n, x);

    if(b-a == 1)
        cout << x << " is found" << '\n';
    else
        cout << x << " is not found" << '\n'; 
*/
    auto r = equal_range(array, array+n, x);
    if(r.second - r.first == 1)
        cout << x << " is found" << '\n';
    else
        cout << x << " is not found" << '\n';

    return 0;
}