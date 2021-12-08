//Main motive is to just multiply from front and back and simply look at the array for max product..

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans;
        int curr_product_forward=1;
        int curr_product_backward=1;
        int final_product_forward=INT_MIN;
        int final_product_backward=INT_MIN;
        int j=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            curr_product_forward*=nums[i];
            curr_product_backward*=nums[j--];
            final_product_forward=max(final_product_forward,curr_product_forward);
            final_product_backward=max(final_product_backward,curr_product_backward);
            if(curr_product_forward==0) curr_product_forward=1;
            if(curr_product_backward==0) curr_product_backward=1;
        }
        return max(final_product_forward,final_product_backward);
    }
};
