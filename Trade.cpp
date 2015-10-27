#include "Trade.h"

Trade::Trade(){}

Trade::Trade(
	Stock stock,
	time_t timeStamp,
	double quantity,
	TradeType_E tradeType,
	double price
	):
stock(stock),
	TimeStamp(timeStamp),
	Quantity(quantity),
	TradeType(tradeType),
	Price(price)
{}

void Trade::setStock(Stock stock)
{
	this->stock = stock;
}
Stock Trade::getStock()
{
	return this->stock;
}

void Trade::setTimeStamp(time_t timestamp)
{
	this->TimeStamp = timestamp;
}
time_t Trade::getTimeStamp()
{
	return this->TimeStamp;
}

void Trade::setQuantity(double quantity)
{
	this->Quantity = quantity;
}
double Trade::getQuantity()
{
	return this->Quantity;
}

void Trade::setTradeType(TradeType_E tradeType)
{
	this->TradeType = tradeType;
}
TradeType_E Trade::getTradeType()
{
	return this->TradeType;
}

void Trade::setPrice(double price)
{
	this->Price = price;
}
double Trade::getPrice()
{
	return this->Price;
}
