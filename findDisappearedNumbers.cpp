class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> a(n, false);  
        vector<int> b;

        for (int i = 0; i < n; i++) {
            a[nums[i] - 1] = true;  
        }

        for (int i = 0; i < n; i++) {
            if (!a[i]) {
                b.push_back(i + 1);  
            }
        }

        return b;
    }
};