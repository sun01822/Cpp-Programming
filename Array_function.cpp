#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int a[] = {5, 6, 7, 1, 2, 9, 4, 3};

    int n = sizeof(a) / sizeof(int);
    cout << "Array: \n";
    for(auto i: a)
        cout << i << ' ';
    cout << '\n';

    cout << "Sort array: \n";
    sort(a, a+n);
    for(auto i: a)
        cout << i << ' ';
    cout << '\n';

    cout << "Reverse array: \n";
    reverse(a, a+n);
    for(auto i: a)
        cout << i << ' ';
    cout << '\n';

    cout << "Shuffle array: \n";
    random_shuffle(a, a+n);
    for(auto i: a)
        cout << i << ' ';
    cout << '\n';

    return 0;
}