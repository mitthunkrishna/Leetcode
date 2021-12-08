//Given an array just make the maximum number out of it..
//I had just used comparator which is available..

class Solution {
public:
    static bool compare(int a,int b){
        string s1=to_string(a),s2=to_string(b);
        return s1+s2>s2+s1;
    }
    string largestNumber(vector<int>& nums) {
        string ans;
        sort(nums.begin(),nums.end(),compare);
        if(nums[0]==0) return "0";
        for(auto it:nums){
            ans+=to_string(it);
        }
        return ans;
    }
};
