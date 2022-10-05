class Solution {
public:
    int minimumSum(int num) {
        string str = to_string(num);
	    sort(str.begin(), str.end());
	    string new1, new2;
	    for (int i = 0; i < str.length(); i++) {
		     if (i % 2 == 0)
			     new1 += str[i];
		     else
			     new2 += str[i];
	     }
	     return stoi(new1) + stoi(new2);
    }
};