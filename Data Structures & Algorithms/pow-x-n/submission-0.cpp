class Solution {
public:
    double myPow(double x, int n) {
        if(x==0) return 0;
        if(x==1) return n;
        if(x==-1) return 1/n;

        long long N = abs((long long) n);
        double result = 1.0;
        while(N>0){
            if(N%2==1) result *= x;
            x *= x;
            N/=2;
        }
        if(n<0) return 1/result;
        else return result;

        
    }
};
