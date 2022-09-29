class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> sol;
        sol.push_back(bsearchl(nums, target, nums.size()));
        sol.push_back(bsearchh(nums, target, nums.size()));
        return sol;
        
    }
    int bsearchl(vector<int> vect, int target, int n) {
        int low = 0;
        int hi = n - 1;
        while (low <= hi) {
            int mid = low + (hi - low) / 2;
            if ((mid == 0 || vect.at(mid - 1) < target) && vect.at(mid) == target) {
                return mid;
            } else if (target > vect.at(mid)) { 
                low = mid + 1;
            } else {                 
                hi = mid - 1;
            }
        }
        return -1;
    }
    int bsearchh(vector<int> vect, int target, int n) {
        int low = 0;
        int hi = n - 1;
        while (low <= hi) {
            int mid = (low + hi) / 2;
            if ((mid == n - 1 || vect.at(mid + 1) > target) && vect.at(mid) == target) {
                return mid;
            } else if (target < vect.at(mid)) { 
                hi = mid - 1;
            } else {                 
                low = mid + 1;
            }
        }
        return -1;
    }
};