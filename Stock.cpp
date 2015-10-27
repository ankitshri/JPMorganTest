#include "Stock.h"

Stock::Stock(){}

Stock::Stock(string stockSymbol,
	StockType_E stockType,
	double lastDividend,
	double fixedDividend,
	double parValue)
	:
StockSymbol(stockSymbol),
	StockType(stockType),
	LastDividend(lastDividend),
	FixedDividend (fixedDividend),
	ParValue (parValue)
{}

void Stock::setStockSymbol(string stockSymbol)
{
	this->StockSymbol = stockSymbol;
}
string Stock::getStockSymbol()
{
	return this->StockSymbol;
}

void Stock::setStockType(StockType_E stockType)
{
	this->StockType = stockType;
}
StockType_E Stock::getStockType()
{
	return this->StockType;
}

void Stock::setLastDividend(double lastDividend)
{
	this->LastDividend = lastDividend;
}
double Stock::getLastDividend()
{
	return this->LastDividend;
}

void Stock::setFixedDividend(double fixedDividend)
{
	this->FixedDividend = fixedDividend;

}
double Stock::getFixedDividend()
{
	return this->FixedDividend;
}

void Stock::setParValue(double parValue)
{
	this->ParValue = parValue;
}
double Stock::getParValue()
{
	return this->ParValue;
}
