class Solution {
public:
    void reverseString(vector<char>& s) {
        char tmp;
        int mid = s.size() / 2;
        int high = s.size() - 1;
        for(int i  = 0; i < mid; ++i){
            tmp = s[i];
            s[i] = s[high - i];
            s[high - i] = tmp;
        }
    }
};
//即以中间位置为界限，将首端与末端字符交换
