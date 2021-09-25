class Solution {
public:
    int numSub(string s) {        
        int module = 1e9 + 7;
        int result = 0;
        int count = 0;
        
        for(int i = 0; i<s.length(); i++)
        {
            count = s[i]=='1'? count+1:0;
            result = (result + count)%module;
        }
        return result;
    }
};