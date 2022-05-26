class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int min = -1;
        for (int i = 0; i < n-1; i++)
    {
        min = i;
        for (int j = i+1; j < n; j++)
        if (nums[j] < nums[min])
            min = j;
        swap(nums[min], nums[i]);
    }
        
    }
};
