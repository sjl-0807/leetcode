class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1){
            return 1;
        }
        if(n==0){
            return 0;
        }
        int l=0,r=n,ans=0;
        while(l<=r){
            long mid=l+(r-l)/2;
            long long sum=mid*(mid-1)/2;
            if(sum<=n){
                ans=mid-1;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return ans;
    }
};
