class Solution {
public:
    int countStudents(vector<int>& first, vector<int>& second) {
        int count[] = {0, 0}, n = first.size(), k;
        for (int a : first)
            count[a]++;
        for (k = 0; k < n && count[second[k]] > 0; ++k)
            count[second[k]]--;
        return n - k;
    }
};