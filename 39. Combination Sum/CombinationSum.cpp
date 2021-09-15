class Solution {
private:
    int lastindex = 0;
    vector<vector<int>> answer;
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> comb;
        combinationSum_recursive(candidates, comb, target);
        return answer;
    }
    
    void combinationSum_recursive(vector<int>& candidates, vector<int>& comb, int target)
    {
        if(target == 0)
        {
            answer.push_back(comb);
            return;
        }
        if(target < 0)
        {
            return;
        }

        for(int i  = lastindex ; i<candidates.size(); i++)
        {
            target = target - candidates[i];
            comb.push_back(candidates[i]);
            lastindex = i;
            combinationSum_recursive(candidates, comb, target);
            comb.pop_back();
            target = target + candidates[i];
        }        
    }
};