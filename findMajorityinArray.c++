#include<iostream>

class Solution {
public:
   
    int majorityElement(int nums[],int length) {
        int candidate = nums[0];
        int count = 1;

        for (int i = 0; i < length; i++) {
            if (nums[i] == candidate) {
                count++;
            }
            else {
                count--;
            }

            if (count == 0) {
                candidate = nums[i];
                count = 1;
            }
        }

        return candidate;
    }
};
int main()
{
    Solution s;
    int const length = 7;
    int arr[] = { 2, 2, 1, 1, 1, 2, 2 };
    std::cout<< s.majorityElement(arr, length);
}