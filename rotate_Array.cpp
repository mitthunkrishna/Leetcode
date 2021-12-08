//This approach is not mine...but i read it in the leetcode discussions page and got to understand this approach..
//Basically we do something like moving multiples of k where k is the position by which we have to shift each element..
//At one stage the multiples and the current becomes the same, at that time we have to move the index one by one and do the same..
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int initial=0;
        int next=initial;
        int temp=nums[initial];
        int n=nums.size();
        k=k%n;
        if(k==0) return;
        while(n--){
            next=(next+k)%nums.size();
            swap(temp,nums[next]);
            if(next==initial){
                initial++;
                temp=nums[initial];
                next=initial;
            }
        }
    }
};
