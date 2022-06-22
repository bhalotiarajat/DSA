class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            int c=target-nums[i];
            if(m.find(c)!=m.end()){
                auto x=m.find(c);
                res.push_back(x->second);
                res.push_back(i);
                return res;
            }
            m[nums[i]]=i;
        }
        return res;
    }
};
