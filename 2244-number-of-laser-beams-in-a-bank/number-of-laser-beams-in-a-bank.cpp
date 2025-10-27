class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>ans;
        for(int i=0;i<bank.size();i++){
            int count=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1')count++;
            }
            ans.push_back(count);
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" "<<endl;
        }
        int result=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]==0)continue;
            for(int j=i+1;j<ans.size();j++){
                if(ans[j]!=0){
                  result+=ans[i]*ans[j];
                  break;
                }
            }
        }
        return result;
    }
};