#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define PI acos(-1)
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    printf("Enter an integer: ");
    cin >> n;
    if((n & n-1)==0)
        cout << "It is a power of 2" << endl;
    else
        cout << "It is no a power of 2" << endl;
}

/*
 * Think twice, code once
 * Think of different approaches to tackle a problem: write them down.
 * Think of different views of the problem. don't look from only one side.
 * don't get stuck in one approach.
 * common mistakes: over_flow
 *                  - out_of_bound index
 *                  -infinite loop
 *                  -corner cases
 *                  -duplication counting.
 */