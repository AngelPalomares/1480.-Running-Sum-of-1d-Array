class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        //This for loop is meant to add the previous nums inside the loop
        //So we start at 1 in the array since the 0 in the array is not being added up
        for(int i = 1; i < nums.size(); i++)
        {
            nums[i] += nums[i-1];
        }

        return nums;
        
    }
};
