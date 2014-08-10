class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        map<int, int> Map;
        vector<int> result;
        for(int i=0; i!=numbers.size(); ++i)
        {
            map<int, int>::iterator p = Map.find(target-numbers[i]);
            if(p != Map.end())
            {
                result.push_back(p->second+1);
                result.push_back(i+1);
                return result;
            }
            Map[numbers[i]] = i;
	    }
    }
        
};
