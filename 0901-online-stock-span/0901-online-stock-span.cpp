class StockSpanner {
    stack<pair<int,int>>s;
    int index ;
public:
    StockSpanner() {
        index = 0;
        s.push(make_pair(INT_MAX,index));
        index++;
    }
    
    int next(int price) {
        while(!s.empty() && price>=s.top().first)
            s.pop();
        int res = 0;
        if(!s.empty())
            res += index - s.top().second;
        s.push(make_pair(price,index));
        index++;
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */