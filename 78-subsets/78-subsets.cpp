class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vect;
        vector<int> sub;
        dfs(nums, sub, vect);
        return vect;
    }
    
   void dfs(vector<int> nums, vector<int> sub, vector<vector<int>>& sol) {
        if (nums.size() == 0) {
            sol.push_back(sub);
            return;
        }
        vector<int> right = sub;
        vector<int> left = sub;
        
        left.push_back(nums.at(0));
        nums.erase(nums.begin());
        
        dfs(nums, right, sol);
        dfs(nums, left, sol);
       return;
    }
};