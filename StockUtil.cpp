#include "StockUtil.h"

double StockUtil::DividendYield(Stock stock, double marketPrice)
{
	if(marketPrice == 0.0){return 0;}

	switch(stock.getStockType() )
	{
	case COMMON:
		return (stock.getLastDividend() / marketPrice);
	case PREFFERED:
		return (stock.getFixedDividend() * stock.getParValue())/ marketPrice;
	default:
		return 0;
	}
}

double StockUtil::PERatio(Stock stock, double marketPrice)
{
	double div = stock.getLastDividend();
	if(div == 0.0){return 0;}
	return marketPrice/div;

}

double StockUtil::VolumeWeightedStockPrice(list<Trade> Trades, double timediff )//time diff is in seconds
{
	int len = Trades.size();
	if(len == 0 ){return 0;}

	double numerator = 0;
	double denominator = 0;

	time_t currtime = time(0);
	list<Trade>::iterator it;
	for(it = Trades.begin(); it != Trades.end(); it++)
	{
		if( difftime( (*it).getTimeStamp(), currtime ) <= timediff)
		{

			numerator += (*it).getPrice() * (*it).getQuantity();
			denominator += (*it).getQuantity();
		}

	}

	if(denominator != 0)
		return numerator/denominator;
	else
		return 0;
}


double StockUtil::AllShareIndex( map<string,list<Trade>> StockTrade)
{
	map<string,list<Trade>>::iterator it_map;

	double count = 0;
	double TotalPrice = 1;
	for(it_map = StockTrade.begin(); it_map != StockTrade.end(); it_map++)
	{
		list<Trade>::iterator it;
		for(it = ((*it_map).second).begin(); it != ((*it_map).second).end(); it++)
		{
			TotalPrice *= (*it).getPrice();
			count++;

		}

	}
	if(count != 0)
		return pow(TotalPrice, 1/count);
	else
		return 0;
}
