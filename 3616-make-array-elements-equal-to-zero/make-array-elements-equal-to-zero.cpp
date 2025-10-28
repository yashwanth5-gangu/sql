class Solution {
public:
bool func(vector<int>nums,int pre ,int cur){
    int n=nums.size();
    while(cur>=0 && cur<n){
        if(nums[cur]==0){
            cur+=pre;
        }
        else{
            nums[cur]--;
            pre=-pre;
            cur+=pre;
        }
    }
    bool flag=true;
    for(int num :nums){
        if(num!=0){
            flag=false;
            break;
        }
    }
    return flag;
}
    int countValidSelections(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0)continue;
            count+=func(nums,-1,i);
            count+=func(nums,1,i);
        }
        return count;
    }
};