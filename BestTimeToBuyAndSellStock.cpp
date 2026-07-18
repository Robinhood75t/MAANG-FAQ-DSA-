// Brute Force Solution
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = -1;
        for(int i = 0; i < n; i++){
            int buy = prices[i];
            for(int j = i + 1; j < n; j++){
                int sell = prices[j];
                maxProfit = max(sell - buy, maxProfit);
            }
        }
        return maxProfit == -1 ? 0 : maxProfit;
    }
};
// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Optimized Solution
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = -1;
        int minSoFar = INT_MAX;
        for(int i = 0; i < n; i++){
            minSoFar = min(prices[i],minSoFar);
            int profit = prices[i] - minSoFar;
            maxProfit = max(profit,maxProfit);
        }
        return maxProfit == -1 ? 0 : maxProfit;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1) because we are using only a few variables 
// this approach can be called Gready approach 