using namespace std;
class Solution {
public:
    int minprice = INT_MAX;
    int maxprofit = 0;

    int maxProfit(vector<int> prices);
};

int Solution::maxProfit(vector<int> prices) {
    std::vector<int>::size_type sz = prices.size();
    for (int i = 0; i <sz;  i++) {
        if (prices[i] < minprice)
            minprice = prices[i];
        else if (prices[i] - minprice > maxprofit)
            maxprofit = prices[i] - minprice;
    }
return maxprofit;
}
