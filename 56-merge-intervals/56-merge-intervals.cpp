class Solution {
public:
    vector < vector < int >> merge(vector < vector < int >> & intervals) {
        sort(intervals.begin(), intervals.end());
        vector <vector<int>> vect;
        for (auto val: intervals) {
            if (vect.empty() || vect.back()[1] < val[0]) {
              vect.push_back(val);
            } else {
              vect.back()[1] = max(vect.back()[1], val[1]);
            }
        }
        return vect;
    }
};