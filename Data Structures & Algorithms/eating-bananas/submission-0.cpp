class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n= piles.size();    
        int low=1,high = *max_element(piles.begin(),piles.end());
        int mid,count;
        while(low<high){
            mid = low +(high-low)/2;
            count = 0;
            for(int i=0;i<n;i++){
                count += ceil((double)piles[i]/mid);
            }
            if(count>h){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return low;
        
    }
};