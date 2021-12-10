//Similar was as that of the combination sum problem which i have in the same repositary

class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        do_sum(ans,k,n);
        return ans;
    }
    void do_sum(vector<vector<int>> &ans,int curr_element,int curr_sum,int sum=0,int i=1,vector<int> jink={}){
        if(sum>curr_sum){
            return;
        }
        if(sum==curr_sum && curr_element==0){
            ans.push_back(jink);
        }
        for(;i<=9;i++){
            jink.push_back(i);
            do_sum(ans,curr_element-1,curr_sum,sum+i,i+1,jink);
            jink.pop_back();
        }
    }
};
