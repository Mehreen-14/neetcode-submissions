class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();
        vector<int> result(n1+n2,0);
        for(int i=n1-1;i>=0;i--){
            int carry = 0;
            int no1 = num1[i]-'0';
            for(int j=n2-1;j>=0;j--){
                int no2 = num2[j]-'0';
                int mul = no1*no2;
                int sum = mul+result[i+j+1]+carry;
                result[i+j+1] = sum%10;
                carry = sum/10;

            }
            if(carry>0){
                result[i]+=carry;
            }
        }

        string ans = "";
        for(int i=0;i<result.size();i++){
            if(!(ans.size()==0 && result[i]==0)){
                ans += to_string(result[i]);
            }
        }
        if(ans.size()==0) return "0";
        else return ans;
        
    }
};
