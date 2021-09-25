class Solution {
public:
    int numSub(string s) {
        //Find substring 1
        //Find substring 11
        //...
        //
        
        int result = 0;
        string candidate = "1";
        int modulo = 1e9 + 7;
        while(true)
        {
            int result_sub = numSub(s, candidate);
            if(result_sub == 0)
            {
                break;
            }
            result  += result_sub;
            candidate = candidate + "1";
        }
        return result%modulo;            
    }
    
    
    int numSub(string number, string candidate)
    {
        int result = 0;
        for(int i = 0; i<number.length(); i++)
        {
            if(number[i] == candidate[0])
            {
                bool exist = false;
                for(int j = 0; j<candidate.length(); j++)
                {
                    if(number[i + j] == candidate [j])
                    {
                        exist = true;
                    }
                    else
                    {
                        exist = false;
                        break;
                    }
                }
                if(exist)
                {
                    result++;
                }
            }            
        }
        return result;        
    }
};