// Giving some insights..
//the problem has stated that the stocks can be bought and sold in the same day
//ANd you need to return max possible..
//So this problem can be done in different approaches one is like we kind of find some local maximum and then sell it at a local maximum and from that index continue the same
//Other thing is we can look it in alternate way such as if there is any local minimum than that leads us to local maximum...this means every element which is followed by a element
//which has higher cost than previous element,then add that to that profit..
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0; 
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                max_profit+=prices[i]-prices[i-1];
            }
        }
        return max_profit;
    }
};
