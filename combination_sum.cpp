class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> v;  //create an 2-dimensional vector to store the result
        sort(candidates.begin(),candidates.end());  //sort the array in ascending order
        find_perm(v,candidates,target);  
        return v;
    }
    
    void find_perm(vector<vector<int>> &v,vector<int> &candidates,int target,int i=0,vector<int> jink={}){
        if(target==0){   // we have attained the target so we push the result array "jink"..
            v.push_back(jink);
            return;
        }
        if(target<0) return; //Not a suitable result as it's sum is greater than the required sum..
        for(int j=i;j<candidates.size();j++){ //just iterate the candidate vector for calculating the sum array..
            if(target-candidates[i]<0) return;  // if the current element is grater than the target value then it will simply return..
            if(candidates[j]<=target){  //if the target value greater than the current candidate value..then push it inside the jink vector...and do the function again...
                jink.push_back(candidates[j]);
                find_perm(v,candidates,target-candidates[j],j,jink);
                jink.pop_back(); // pop the element pushed so that we get other combinations possible..
            }
            
        }
        
    }
};
