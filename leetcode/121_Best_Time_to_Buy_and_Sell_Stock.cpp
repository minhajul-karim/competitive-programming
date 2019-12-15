#include <vector>
#include <iostream>

using namespace std;

// Prototype
int maxProfit(vector<int>& prices);

int main()
{
    vector<int> stockPrices;
    stockPrices.push_back(4);
    stockPrices.push_back(10);

    int result = maxProfit(stockPrices);
    cout << result << endl;

    return 0;
}

int maxProfit(vector<int>& prices)
{

    int numOfDays = prices.size();
    if (numOfDays == 0 || numOfDays == 1)
    {
        return 0;
    }
    
    int minPriceToBuy = INT32_MAX, profit = 0;
    for (int element : prices)
    {
        if (element < minPriceToBuy)
        {
            minPriceToBuy = element;
        }
        
        else
        {
            profit = max(profit, element - minPriceToBuy);
        }
        
    }

    return profit;
}
