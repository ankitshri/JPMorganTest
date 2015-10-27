#ifndef _STOCK_H_
#define _STOCK_H_ 1

#include <string>
#include "Constant.h"
using namespace std;
class Stock
{
private:
	string StockSymbol;
	StockType_E StockType;
	double LastDividend;
	double FixedDividend;
	double ParValue;

public:

	Stock();

	Stock(string stockSymbol,
          StockType_E stockType,
          double lastDividend,
          double fixedDividend,
          double parValue
          );

	void setStockSymbol(string stockSymbol);
	string getStockSymbol();

	void setStockType(StockType_E stockType);
	StockType_E getStockType();

	void setLastDividend(double lastDividend);
	double getLastDividend();

	void setFixedDividend(double fixedDividend);
	double getFixedDividend();

	void setParValue(double parValue);
	double getParValue();
};

#endif
