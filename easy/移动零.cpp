class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int kase = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == 0){
                kase++;
                nums.erase(nums.begin() + i, nums.begin() + i + 1);
                i--;
            }
        }
        for(int i = 0; i < kase; ++i){
            nums.push_back(0);
        }
    }
};
