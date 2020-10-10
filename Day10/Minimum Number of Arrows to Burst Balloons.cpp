class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int count=points.size();
        if (count<=1) 
            return count;
        
        sort(points.begin(),points.end(),[](vector<int> &p1, vector<int> &p2){
            return p1[1]<p2[1];
        });
        int end=INT_MIN;
        for (vector<int> p:points){
            if (p[0]>end){
                end=p[1];
            }
            else count--;
        }
        return count;
    }  
    
};
