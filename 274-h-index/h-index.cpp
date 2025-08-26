class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.begin(),c.end(),greater<int>());
        int t=c.size();
        for(int i=0;i<c.size();i++){
            if(c[i]<i+1)
            { 
                t=i;
                break;
            }

        }
        return t;
    }
};