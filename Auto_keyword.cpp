#include<bits/stdc++.h>
using namespace std;

#define ll long long

void populate(auto &data)  // see!
{
    data.insert({"a", {1,4}});
    data.insert({"b", {3,1}});
    data.insert({"c", {2,3}});
}

auto merge(auto data, auto upcoming_data)  // don't write long declaration again
{
    auto result = data;

    for(auto &it: upcoming_data)
    {
        result.insert(it);
    }

    return result;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    map<string, pair<int, int>> data;
    populate(data);
    map<string, pair<int, int>> upcoming_data;
    upcoming_data.insert({"d", {5,6}});

    auto final_data = merge(data, upcoming_data);

    for(auto itr: final_data)
    {
        auto v1 = itr.second.first;
        auto v2 = itr.second.second;
        // auto [v1,v2] = itr.second; // structured bindings discussed below 
        cout << itr.first << " " << v1 << ' ' << v2 << '\n'; 
    }

    return 0;
}