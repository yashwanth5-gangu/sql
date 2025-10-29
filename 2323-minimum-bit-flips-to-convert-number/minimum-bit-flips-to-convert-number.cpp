class Solution {
public:
    int minBitFlips(int start, int goal) {
        string ans=bitset<32>(start).to_string();
        string ans1=bitset<32>(goal).to_string();
        int count=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]!=ans1[i])count++;
        }
        return count;
    }
};