class Solution {
public:
    int smallestNumber(int n) {
        int ans=0;
        if(n==1)return 1;
        for(int i=0;i<n;i++){
            if((pow(2,i)-1)>=n){
                ans=pow(2,i)-1;
                break;
            }
        }
        return ans;
    }
};