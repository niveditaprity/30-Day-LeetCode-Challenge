class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     vector<int>v;
    int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count++;
            }
            else
            {
            v.push_back(nums[i]);
            }
        }
        for(int i=1;i<=count;i++)
        {
            v.push_back(0);
        }
        for(int i=0;i<v.size();i++)
        {
        nums[i]=v[i];
        }
    }
};
