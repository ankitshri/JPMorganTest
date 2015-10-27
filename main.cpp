#include <list>
#include <map>
#include <iostream>
#include "Stock.h"
#include "Trade.h"
#include "Constant.h"
#include "StockUtil.h"

using namespace std;
int main(char* argc, int argv)
{
	Stock tea("TEA", COMMON, 0,NULL,100);
	Stock pop("POP", COMMON, 8, NULL, 100);
	Stock ale("ALE", COMMON, 23, NULL, 60);
	Stock gin("GIN", PREFFERED, 8, 2, 100);
	Stock joe("JOE", COMMON, 13, NULL, 250);


	list<Stock> GBCE;
	//Add all the stock for GBCE
	GBCE.push_back(tea);
	GBCE.push_back(pop);
	GBCE.push_back(ale);
	GBCE.push_back(gin);
	GBCE.push_back(joe);


	map<string,list<Trade>> StockTrade;
	time_t t = time(0);

	//iii.	Record a trade, with timestamp, quantity of shares, buy or sell indicator and trade price
	Trade t1(tea,t-1,5,BUY,50);
	Trade t2(tea,t-2,6,SELL,51);
	Trade t3(pop,t-3,7,BUY,52);
	Trade t4(pop,t-4,8,SELL,53);
	Trade t5(ale,t-5,9,BUY,54);
	Trade t6(ale,t-6,10,SELL,55);
	Trade t7(gin,t-7,11,BUY,56);
	Trade t8(gin,t-8,12,SELL,57);
	Trade t9(joe,t-9,13,BUY,58);
	Trade t10(joe,t-10,14,SELL,59);

	//add these trades to the map

	StockTrade["tea"].push_back(t1);
	StockTrade["tea"].push_back(t2);

	StockTrade["pop"].push_back(t3);
	StockTrade["pop"].push_back(t4);

	StockTrade["ale"].push_back(t5);
	StockTrade["ale"].push_back(t6);

	StockTrade["gin"].push_back(t7);
	StockTrade["gin"].push_back(t8);

	StockTrade["joe"].push_back(t9);
	StockTrade["joe"].push_back(t10);


	StockUtil util;

	//i.	Given a market price as input, calculate the dividend yield
	cout << "Dividend Yield for JOE : " << util.DividendYield(joe, 100) << endl;

	//ii.	Given a market price as input,  calculate the P/E Ratio
	cout << "P/E Ratio for POP : " << util.PERatio(pop,110) << endl;


	//iv.	Calculate Volume Weighted Stock Price based on trades in past 15 minutes
	cout << "Volume Weighted Stock Price for ALE : " << util.VolumeWeightedStockPrice(StockTrade["ale"], 900) << endl;   // time diff in seconds.

	//b.	Calculate the GBCE All Share Index using the geometric mean of prices for all stocks
	cout << "All Share Index : " << util.AllShareIndex(StockTrade) << endl;
	return 0;
}
