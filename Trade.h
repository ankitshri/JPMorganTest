#ifndef _TRADE_H_
#define _TRADE_H_ 1

#include <ctime>
#include "Stock.h"
using namespace std;
class Trade
{

private:
	Stock stock;
	time_t TimeStamp;
	double Quantity;
	TradeType_E TradeType;
	double Price;

public:

	Trade();

	Trade(
		Stock stock,
		time_t TimeStamp,
		double Quantity,
		TradeType_E TradeType,
		double Price
		);

	void setStock(Stock stock);
	Stock getStock();

	void setTimeStamp(time_t timestamp);
	time_t getTimeStamp();

	void setQuantity(double quantity);
	double getQuantity();

	void setTradeType(TradeType_E tradeType);
	TradeType_E getTradeType();

	void setPrice(double price);
	double getPrice();

};

#endif
