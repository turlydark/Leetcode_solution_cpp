class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        while(k--){
            int last = nums[0];
            for(int i = 0; i < nums.size(); ++i){
                int val = (i + 1) % nums.size();
                swap(last, nums[val]);
            }
        }
    }
};
