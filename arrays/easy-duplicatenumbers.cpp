#include <bits/stdc++.h>
using namespace std;
int main()
{
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i,j;
        int check = -1;
        for(i = 0; i<nums.size();i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                    check = 1;
                break;
            }
            if(check == 1)
                break;
        }
            return nums[i];
    }
};
}