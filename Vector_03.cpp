#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    vector<int> v;
    int n, num;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        v.push_back(num);
    }

    // sort vector
    sort(v.begin(), v.end());

    // print vector
    for(auto i : v)
        cout << i << " ";
    cout << '\n';

    // revese vector
    reverse(v.begin(), v.end());
    
    // print vector
    for(auto i : v)
        cout << i << " ";
    cout << '\n';

    // random shuffle
    random_shuffle(v.begin(), v.end());
     
    
    // print vector
    for(auto i : v)
        cout << i << " ";
    cout << '\n';

    return 0;
}
