#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int n, int t)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int element = arr[mid];
        if (element == t)
        {
            return mid;
        }
        else if (element > t)
        {
            e = mid - 1;
        }
        else if (element < t)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    return -1;
}

int main()
{
    // int n;

    // cout << "Enter the size of array: " << endl;
    // cin >> n;

    // vector<int> arr;
    // cout << "Enter the array:" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     int a;
    //     cout << "Enter the element no " << i + 1 << " of the array" << endl;
    //     cin >> a;
    //     arr.push_back(a);
    // }

    // int target;
    // cout << "Enter the element that you want to search:" << endl;
    // cin >> target;
    // int ans = binarySearch(arr, target);
    // if (ans)
    // {
    //     cout << "Element found at index " << ans;
    // }
    // else
    // {
    //     cout << "not found";
    // }

    // for arrays

    // int n;

    // cout << "Enter the size of array: " << endl;

    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter the element no " << i + 1 << " of the array" << endl;
    //     cin >> arr[i];
    // }
    // cout << "Your array is: " << endl;
    // for (int i = 0; i < n; i++)
    // {

    //     cout << arr[i] << endl;
    // }
    // int target;
    // cout << "Enter the element that you want to search:" << endl;
    // cin >> target;
    // int ans = binarySearch(arr, n, target);
    // if (ans)
    // {
    //     cout << "Element found at index " << ans;
    // }
    // else
    // {
    //     cout << "not found";
    // }

    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 5;
    int size = 5;
    bool ans = binary_search(arr.begin(), arr.end(), target);

    if (ans == 1)
    {
        cout << "found" << endl;
        ;
    }
    else
    {
        cout << "not found";
    }
    return 0;
}