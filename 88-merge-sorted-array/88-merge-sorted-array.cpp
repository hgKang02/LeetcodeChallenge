class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0;
        vector<int> sol;
        while(true) {
            if(i==m) {
                while(j<n) {
                    sol.push_back(nums2[j]);
                    j++;
                }
                break;
            } else if(j==n) {
                while(i<m) {
                    sol.push_back(nums1[i]);
                    i++;
                }
                break;
            } else {
                if(nums1[i] < nums2[j]) {
                    sol.push_back(nums1[i]);
                    i++;
                } else {
                    sol.push_back(nums2[j]);
                    j++;
                }
            }
        }
        
        for(i=0; i<m+n; i++) {
            nums1[i] = sol[i];
        }
    }
};