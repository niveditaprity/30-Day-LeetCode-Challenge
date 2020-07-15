class Solution {
public:
    bool isHappy(int n) {
        int val,remainder;
        set<int>s;
        while(1)
        {
            val=0;
            while(n)
            {
                remainder=n%10;
                val+=remainder*remainder;
                n=n/10;
            }
            if(val==1)
            {
                return true;
            }
            if(s.find(val)!=s.end())
            {
                return false;
            }
            s.insert(val);
            n=val;
        }
        return false;
        
    }
};
