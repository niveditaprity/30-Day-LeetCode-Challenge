class Solution {
public:
    int singleNumber(vector<int>& nums) {
int m=0;
        for(int i=0;i<nums.size();i++)
        {
            m=m^nums[i];
         }
        return m;
    }
};
