class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.length();
        if(!len) return true;
        string::iterator it;
        for(it = s.begin(); it != s.end(); ++it){
            if(*it >= 'A' && *it <= 'Z')
                *it = *it - 'A' +'a';
            else if(*it >= '0' && *it <= '9')
                continue;
            else if(*it >= 'a' && *it <= 'z')
                continue;
            else{
                it = s.erase(it);
                it--;
            }
        }
        len = s.length();
        int mid = (0 + len) / 2;
        for(int i = 0; i < mid; ++i){
            if(s[i] != s[len - i - 1])
                return false;
        }
        return true;
    }
};
//首先将字符串统一化，大写换小写，去掉非字母、数字
//之后，以字符串中间为终点，两边比对
//值得注意的是，由于先前已经计算过字符串长度，在进行比对操作之前需要再计算一次字符串长度
