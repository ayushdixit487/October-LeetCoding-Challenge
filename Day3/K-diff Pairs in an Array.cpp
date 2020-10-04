class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
       map<int,int> mp;
        int ans = 0 ;
        
        for(auto n  : nums)
            mp[n]++;
        
        for(auto n :  nums){
            if(k==0){
                if(mp[n]>1){
                    ans++;
                     mp[n] = 0;
                }
                    
            }else{
                if(mp.find(n+k)!=mp.end() && mp[n]!=0){
                    ans++;
                    mp[n] = 0;
                }
                    
            }
        }
        return ans;
    }
};
