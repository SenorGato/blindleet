class Solution {
public:
    int res = 0;
        for(int i =0; i < prices.size(); i ++) {
            for(int x=i + 1; x< prices.size(); x++) {
                if (prices.at(x) - prices.at(i) > res) {
                    res = prices.at(x) - prices.at(i);
                }
            }
        }
            return res;
    }
};
