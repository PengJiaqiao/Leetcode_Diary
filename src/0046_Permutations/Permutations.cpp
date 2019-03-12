class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size() <= 1) return vector<vector<int>> {nums};
        vector<vector<int>> res;
        vector<int> tmp = vector<int> (nums.begin() + 1, nums.end());
        vector<vector<int>> perms = permute(tmp);
        for(auto& perm : perms)
        {
            for (unsigned int i = 0; i <= perm.size(); i++)
            {
            	auto tmp_perm = perm;
            	tmp_perm.insert(tmp_perm.begin() + i, nums[0]);
                res.push_back(tmp_perm);
            }
        }
        return res;
    }
};
