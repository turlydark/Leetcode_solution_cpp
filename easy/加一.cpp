class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> a;
        int flag = 1;
        
        while(!digits.empty()){
            int val = digits.back();
            digits.pop_back();
            if(flag == 1){
                val ++;
                flag = 0;
            }
            if(val >= 10){
                val %= 10;
                flag = 1;
            }
            a.push_back(val);
        }
        if(flag)
            a.push_back(1);
        reverse(a.begin(), a.end());
        return a;
    }
};
