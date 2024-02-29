#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:

    int majorityElement(int nums[], int length) {
        unordered_map<int, int>counts;

        for (int i = 0; i < length; i++)
        {
            counts[nums[i]]++;
            if (counts[nums[i]] > length / 2)
            {
                return nums[i];
            }
        }
    }
};

int main() {
    Solution s;
    int const length = 7;
    int arr[] = { 2, 2, 1, 1, 1, 2, 2 };
    std::cout << s.majorityElement(arr, length);
    return 0;
}
