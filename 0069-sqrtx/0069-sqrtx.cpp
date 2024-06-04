class Solution {
public:
    int mySqrt(int x) {
        int low=1;
        long long  high =x;
        int ans=-1;
        if(x==0){
            return 0;
        }

        while(low<=high){
            long long mid=(long long)(low+high)/2;

            if(mid==x/mid){
                return mid;
                break;
            }
            if(mid>x/mid){
                high=mid-1;
            }
            else{
                ans=mid;
                low=mid+1;
            }
        }
        return ans;
        
    }
};