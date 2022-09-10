#include<bits/stdc++.h>
using namespace std;
int cnt;
vector<int> subsets;

#define ll long long
void search(int k)
{
    int n = 5;
    if(k==n)
    {
        cout << cnt++ << ": ";
        for(int i=0; i<subsets.size(); i++)
        {
            cout << subsets[i] << " ";
        }
        cout << '\n';
    }
    else
    {
        search(k+1);
        subsets.push_back(k);
        search(k+1);
        subsets.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    search(0);
    return 0;
}