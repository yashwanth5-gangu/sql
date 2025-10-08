class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>ans;
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
            vector<long long >temp;
            long long  t=spells[i];
           
            int count=potions.size();
             int l=0;
             int r=potions.size()-1;
             while(l<=r){
                int mid=l+(r-l)/2;
                long long pro=t*potions[mid];
                if(pro>=success){
                   count=mid;
                   r=mid-1;
                }
                else{
                    l=mid+1;
                }
             }
        
            ans.push_back(potions.size()-count);
            temp.clear();

        }
        return ans;
    }
};