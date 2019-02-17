class Solution {
public:
    int strStr(string haystack, string needle) {
        int len1 = haystack.length();
        int len2 = needle.length();
        if(!len2) return 0;
        //needle为空返回0
        int pos = 0;
        bool flag = false;
        for(int i = 0; i < len1; ++i){
            pos = i;
            flag = false;
            //立一个flag判断needle是否完全在haystack中
            int j;
            for(j = 0; j < len2 && i + j < len1; ++j){
                if(haystack[i + j] != needle[j]){
                    flag = false;
                    break;
                }
            }
            if(j == len2){
                flag = true;
                break;
            }
            //此处推敲得出，当j累加到与needle相同长度时，则可以判断
            //如果判断false的条件很繁琐，反过来思考如何满足true的条件
        }
        if(flag)
            return pos;
        else
            return -1;
    }
    
};
