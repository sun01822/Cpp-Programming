// Maximum Subarray Sum
// Time Complexity - O(n)

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int arr[] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int sum=0, best=0;
    int n = sizeof(arr) / sizeof(int);

    for(int i=0; i<n; i++)
    {
        sum = max(arr[i], sum+arr[i]);
        best = max(best, sum);
    }
    cout << best << '\n';

    return 0;
}