bool comp(const vector<int>& a,const vector<int>& b){
    if(a[0]==b[0])
        return a[1]>b[1];
    
    return a[0]<b[0];
}

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& a){
        int n=a.size();
        sort(a.begin(),a.end(),comp);
        int rem=0;
        int cur_max=a[0][1];
        
        for(int i=1;i<n;i++){
            if(a[i][1]>cur_max){
                cur_max=a[i][1];
            }
            else rem++; 
        }
        
        return n-rem;   
    }
};
