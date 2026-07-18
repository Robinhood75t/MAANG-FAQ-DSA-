// Brute forece Solution 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
// Time Complexity: O(n^2)
// space Complexity: O(1)

// Optimized Solution 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mp;
        vector<int> ans(2,0);
        for(int i = 0; i < n; i++){
            if(mp.find(target-nums[i]) != mp.end()){
                ans[1] = i;
                ans[0] = mp[target-nums[i]];
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(n) because we are using a map to store the elements of the array.