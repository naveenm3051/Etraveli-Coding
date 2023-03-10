#include <bits/stdc++.h>
using namespace std;

int maxpr(vector<int> &arr)
{
    int currentp = arr[0];
    int maxp = INT_MIN;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - currentp > maxp)
        {
            maxp = arr[i] - currentp;
            cout << "Max P-->" << maxp << endl;
        }
        else
        {
            currentp = arr[i];
            cout << "Current P-->" << currentp << endl;
        }
    }
    return maxp;
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
    int maxp = maxpr(arr);
    cout << maxp;
    return 0;
}