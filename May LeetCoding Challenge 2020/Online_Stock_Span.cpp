class StockSpanner {
    vector<int> prices;
    vector<int> spans;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int index = prices.size() - 1;
        while (index >= 0 && prices[index] <= price) {
            int span = spans[index];
            index = index - span;
        }
        prices.push_back(price);
        int span = prices.size() - 1 - index;
        spans.push_back(span);
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
