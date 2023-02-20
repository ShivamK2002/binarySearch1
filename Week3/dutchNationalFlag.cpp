#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sorted(vector<int> arr)
{
    int l = 0;
    int e = arr.size() - 1;
    while (l < e)
    {
        if (arr[l] < 0)
        {
            l++;
        }
        else if (arr[e] > 0)
        {
            e--;
        }

        else
        {
            swap(arr[e], arr[l]);
        }
    }
    return arr;
}
int main()
{

    vector<int> arr = {-1, 4, 3, -2, -2, 6, 0, -1};
    // sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "final answer will be: " << endl;
    vector<int> arrs = sorted(arr);
    for (int i = 0; i < arrs.size(); i++)
    {
        cout << arrs[i] << " ";
    }

    return 0;
}
