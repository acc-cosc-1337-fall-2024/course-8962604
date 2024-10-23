#include "default.h"
double get_total(int qty, double price = 10)
{
    return qty * price;
}
double get_total1(int qty = 5, double price = 10, double bonus = 100)
{
    return qty * price + bonus;
}