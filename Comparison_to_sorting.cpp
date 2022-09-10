#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    unordered_set<int> s;
    int A[] = {5, 2, 8, 9, 4};
    int B[] = {3, 2, 9, 5};
    int count=0;
    int len = sizeof(A) / sizeof(int);
    int len2 = sizeof(B) / sizeof(int);
    for(int i=0; i<len; i++)
        s.insert(A[i]);
    for(int i=0; i<len2; i++)
    {
        if(s.count(B[i]))
        {
            count++;
        }
    }

    cout << count << '\n';

    return 0;
}
