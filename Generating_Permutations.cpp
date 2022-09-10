#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
int n = 5;
vector<int> permutation;
bool chosen[10] = {false};

void search()
{

    if (permutation.size() == n)
    {
        for(auto i: permutation)
            cout << i << ' ';
        cout << '\n';
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            if (chosen[i])
                continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    search();
    return 0;
}