// Best Time to Buy and Sell Stock II
// Moderate
// 0/80
// Average time to solve is 22m
// Contributed by
// Asked in companies
// Problem statement
// You have been given stock values/prices for N number of days. Every i-th day signifies the price of a stock on that day. Your task is to find the maximum profit which you can make by buying and selling the stocks.

//  Note :
// You may make as many transactions as you want but can not have more than one transaction at a time i.e, if you have the stock, you need to sell it first, and then only you can buy it again.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^5
// Time Limit: 1 sec
// Sample Input 1 :
// 1
// 7
// 1 2 3 4 5 6 7
// Sample Output 1 :
// 6
// Explanation :
// We can make the maximum profit by buying the stock on the first day and selling it on the last day.
// Sample Input 2 :
// 1
// 7
// 7 6 5 4 3 2 1
// Sample Output 2 :
// 0
// Explanation :
// We can make the maximum profit by not buying the stock.


long getMaximumProfit(long *values, int n)
{
    //Write your code here
    long profit=0;
    for(int i=1;i<n;i++){
        int diff=values[i]-values[i-1];
        if(diff>0){
            profit+=diff;
        }
    }
    return profit;
}