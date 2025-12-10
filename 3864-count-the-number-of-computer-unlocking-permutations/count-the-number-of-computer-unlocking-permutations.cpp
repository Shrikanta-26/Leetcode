class Solution {
public:
     static const int MOD= 1000000007;
    int countPermutations(vector<int>& complexity) {
        int count=0;
        long long ans=1;
        for(int i=1;i<complexity.size();i++)
        {
            if(complexity[0]>=complexity[i])
            {
                count++;
            }
        }
        if(count>0)
        {
            return 0;
        }
        for(int i=1;i<complexity.size();i++)
        {
            ans=(ans*i)%MOD;
        }
        return (int)ans;
        
    }
};