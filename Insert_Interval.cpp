//the x vale and y value represents the (x,y) in the interval thing..
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;  // create 2-dimensional array for answer..
        for(int i=0;i<intervals.size();i++){
            vector<int>& inter=intervals[i]; 
            if(inter[1]<newInterval[0]){ //if the current intervals y value is less than the newInterval x part just push the interval into the answer..
                ans.push_back(inter);
            }
            else if(inter[0]>newInterval[1]){  //else if intervals x part is greater than newInterval y part then push the newInterval and traverse and push all other intevals into answer..
                ans.push_back(newInterval);
                for(int k=i;k<intervals.size();k++){
                    ans.push_back(intervals[k]);
                }
                return ans;
            }
            else{   // else decide whether should we expand the size of exiating interval or not accordingly..
                newInterval[0]=min(newInterval[0],inter[0]);
                newInterval[1]=max(newInterval[1],inter[1]);
            }
        }
        ans.push_back(newInterval);
        return ans;
    }
};
