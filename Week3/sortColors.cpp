#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int a = 5;
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        // given that can't be used
        // sort(nums.begin(), nums.end());
        int l, m = 0;
        int h = nums.size() - 1;
        while (m <= h)
        {
            if (nums[m] == 0)
            {
                swap(nums[l], nums[m]);
                l++;
                m++;
            }
            else if (nums[m] == 1)
            {
                m++;
            }
            else
            {
                swap(nums[m], nums[h]);
                h--;
            }
        }
    }
};
int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    return 0;
}