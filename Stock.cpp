#include <bits/stdc++.h>
using namespace std;

vector<int> maxpr(vector<int> &arr)
{
    vector<int> ans;
    int currentp = arr[0];
    int buy = 0;
    int sell = 0;
    int maxp = INT_MIN;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - currentp > maxp)
        {
            maxp = arr[i] - currentp;
            // cout << "Max P-->" << maxp << endl;
            sell = i;
        }
        else
        {
            currentp = arr[i];
            buy = i;
            // cout << "Current P-->" << currentp << endl;
        }
    }
    ans.push_back(maxp);
    ans.push_back(buy);
    ans.push_back(sell);
    return ans;
}
int main()
{
    int size;
    cin >> size;
    vector<int> arr;
    for (int i = 0; i < size; i++)
    {
        int t;
        cin >> t;
        arr.push_back(t);
    }
    vector<int> maxp = maxpr(arr);
    cout << "Maximum Profit--> " << maxp[0] << " Bought at Day ->" << maxp[1] << " Sold at Day ->" << maxp[2];
    return 0;
}