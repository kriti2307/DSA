class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        for(int i = 0; i < n; i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            int P1 = i + 1;
            int P2 = n - 1;//hi
            while(P1 < P2){
                if(nums[P1] + nums[P2] == -nums[i]){
                    result.push_back({nums[i], nums[P1], nums[P2]});
                    P1++;
                    P2--;
                    while(P1 < P2 && nums[P1] == nums[P1-1]){
                        P1++;
                    }
                    while(P1 < P2 && nums[P2] == nums[P2+1]){
                        P2--;
                    }
                } else if(nums[P1] + nums[P2] < -nums[i]){
                    P1++;
                } else {
                    P2--;
                }
            }
        }
        return result;
    }
};