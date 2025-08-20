class Solution {
public:
string func(string s){
   for(int i=0;i<s.size();i++){
      if(s[i]=='0')s[i]='1';
      else{
        s[i]='0';
      }
   }
   return s;
}
    char findKthBit(int n, int k) {
        vector<string>dp(21);
         dp[1]="0";
        for(int i=2;i<=20;i++){
            string inv=func(dp[i-1]);
            reverse(inv.begin(),inv.end());
            dp[i]=dp[i-1]+"1"+inv;

        }
     return dp[n][k-1];
    }
};