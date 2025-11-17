class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
       ans.push_back(i);
            }
        }
        if(ans.size()>=1){
        for(int i=0;i<ans.size()-1;i++){
            
            if(abs(ans[i]-ans[i+1])>k){
                continue;
            }
            else{
                return false;
            }
        }
        }
        return true;
    }
};