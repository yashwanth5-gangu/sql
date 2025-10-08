class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long val=1;
        vector<int>row;
        for(int i=0;i<=rowIndex;i++){
            row.push_back((int)val);
            val=val*(rowIndex-i)/(i+1);
        }
        return row;
    }
};