class Solution {
public:
    int firstUniqChar(string s) {
        int a[30];
        memset(a, 0, sizeof(a));
        int len = s.length();
        for(int i = 0; i < len; ++i){
            int tmp = s[i] - 'a';
            a[tmp]++;
        }
        for(int i = 0; i < len; ++i){
            int tmp = s[i] - 'a';
           if(a[tmp] == 1)
               return i;;
        }
        return -1;
    }
};
