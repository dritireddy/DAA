#include <bits/stdc++.h>
using namespace std;
vector<int> twosum(vector<int> &arr, int tar)
{
    
	unordered_map<int, int> map;
    for (int i = 0; i < arr.size(); i++)
    {
        int com = tar - arr[i];
        if (map.find(complement) != map.end())
        {
            return (map[com], i);
        }
        map[arr[i]] = i;
    }
    return {};
}
int main()
{
    int n;
    cout << "Enter No of Elements : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << "Elemnts : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int t;
    cout << "Enter The Target Sum to Find : ";
    cin >> t;
    vector<int> res = twosum(arr, t);
    if (res.empty())
    {
        cout << "There is No Such Pair Which adds up to " << t;
    }
    else
    {
        cout << "The Indices are : " << res[1];
    }
    return 0;
}
