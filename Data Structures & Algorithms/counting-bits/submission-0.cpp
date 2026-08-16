class Solution {
public:
    unsigned long long convertbin(int n){
        unsigned long long reminder, binary = 0,i=1;
        while(n!=0){
            reminder = n%2;
            n /= 2;
            binary += reminder*i;
            i*=10;
        }
        return binary;
    }

    int counting(unsigned long long n){
        unsigned long long bin = convertbin(n);
        int count=0;
        while(bin){
            count+=bin%10;
            bin/=10;
        }
        return count;
    }
    vector<int> countBits(int n){
        vector<int> result(n+1,0);
            for(int i=1;i<=n;i++){
                result[i] = counting(i);
            }
            return result;
        
    }
};
