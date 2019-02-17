class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[30] = {0};
        int b[30] = {0};
        
        int lens = s.length();
        int lent = t.length();
        if(lens != lent)
            return false;
        for(int i = 0; i < lens; ++i){
            int tmp = s[i] - 'a';
            a[tmp]++;
        }
        for(int i = 0; i < lent; ++i){
            int tmp = t[i] - 'a';
            b[tmp]++;
        }
        for(int i = 0; i < 30; ++i){
            if(a[i] != b[i])
                return false;
        }
        return true;
    }
};
//默认只包含小写字符，不包含unicode字符，
