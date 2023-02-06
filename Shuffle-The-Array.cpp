#include<iostream>
#include<vector>
using namespace std;

vector<int> shuffle(vector<int> &nums, int n)
{
    int ptr1 = 0;
    int ptr2 = nums.size() / 2;
    vector<int> res;

    while (ptr1 < nums.size() && ptr2 < nums.size())
    {
        res.push_back(nums[ptr1++]);
        res.push_back(nums[ptr2++]);
    }

    return res;
}

int main(){
    return 0;
}