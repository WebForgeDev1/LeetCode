int maxProfit(int* prices, int pricesSize) {
    int max = 0;

    int left = 0;
    int right = 1;

    while (right < pricesSize){
        if(prices[left] < prices[right]){
        int profit = prices[right] - prices[left];
        if(profit > max){
            max = profit;
        }
        }
        else{
            left = right;
        }
        
        right+=1;
    }

    return max;
}