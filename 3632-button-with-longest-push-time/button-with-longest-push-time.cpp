class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int time=events[0][1];
        int t=events[0][1];
        int ans=events[0][0];
        
        for(int i=1;i<events.size();i++){
             t=events[i][1]-events[i-1][1];
            if(t>time){
                ans=events[i][0];
                time=t;
            }
            if(time==t){
                ans=min(ans,events[i][0]);
            }
        }
        
        
        return ans;
        
    }
};