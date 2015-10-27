#ifndef _STOCK_UTIL_
#define _STOCK_UTIL_ 1
#include <list>
#include <string>
#include <map>
#include "Stock.h"
#include "Trade.h"


using namespace std;
class StockUtil
{
public:
	double DividendYield(Stock stock, double marketPrice);
	double PERatio(Stock stock, double marketPrice);
	double VolumeWeightedStockPrice(list<Trade> T , double timediff);
	double AllShareIndex( map<string,list<Trade>> StockTrade);
};

#endif

