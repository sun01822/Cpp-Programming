#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m=1;
    long long sum = 0, total_sum=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            sum+=m;
            m++;
        }
        cout << sum << '\n';
        total_sum+=sum;
        sum=0;
    }
    cout << "Total Sum: " << total_sum << '\n';
    return 0;
}
