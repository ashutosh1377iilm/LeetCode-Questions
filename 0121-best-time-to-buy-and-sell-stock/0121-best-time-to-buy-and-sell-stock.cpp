class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } else if (prices[i] - minPrice > maxProfit) {
                maxProfit = prices[i] - minPrice;
            }
        }

        return maxProfit;
    }
};
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int num = 0;
//         for(int i=0;i<prices.size();i++){
//             for(int j =i+1;j<prices.size();j++){
//                 if(prices[i]<prices[j]){
//                     if(num<prices[j]-prices[i]){
//                         num = prices[j]-prices[i];
//                     }
//                 }
//             }
//         }
//         return num;
//     }
// }; 