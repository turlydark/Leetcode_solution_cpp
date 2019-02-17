class Solution {
public:
    bool isPowerOfThree(int n) {
        if( n <= 0)
            return false;
        const int maxn = 0x7fffffff;
        int k = log(maxn) / log(3);
        int a = pow(3, k);
        if(a % n == 0)
            return true;
        else
            return false;
    }
};

/*
采用log换底公式，求出int最大值0x7fffffff的幂指数k，
pow（3，k）得到一个数a
若n为3的幂，则数a一定能整除n
*/
