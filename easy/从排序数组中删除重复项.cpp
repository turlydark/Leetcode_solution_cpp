class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int val;
        vector<int>::iterator it;
        if(nums.size() > 1){
            it = nums.begin();
            val = *it;
            it++;
            
            for(; it != nums.end(); ){
               if(val == *it){
                   it = nums.erase(it);
               }
                else{
                    val = *it;
                    it++;
                }
            }
        }
        
        return nums.size();
    }
};
