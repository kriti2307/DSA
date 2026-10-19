class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int left = 0;
        int lowestV = INT_MAX;
        for(int right = 0; right<nums.size(); right++){
            if(right - left + 1 == k){
                int window = nums[right] - nums[left];
                lowestV = min(window, lowestV);
                left++;
            }
        }
        return lowestV;
    }
};