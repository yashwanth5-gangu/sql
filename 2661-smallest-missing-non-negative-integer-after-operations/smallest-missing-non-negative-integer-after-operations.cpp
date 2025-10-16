class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n=nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++){
         nums[i] = ((nums[i] % value) + value) % value;
         mpp[nums[i]]++;

        }
        int j=0;
        while(mpp[j%value]>0){
            mpp[j%value]--;
            j++;

        }
        return j;
       
    }
};