#ifndef __ResaleProduct_h__
#define __ResaleProduct_h__

#include "Product.h"
#include <iostream>

class ResaleProduct : public Product
{
public:
  ResaleProduct(int id, float price, float profit_margin) : Product(id, price), profit_margin_(profit_margin){};

  int get_profit_margin() const { return profit_margin_; };
  void set_profit_margin(int margin) { profit_margin_ = margin; };
  virtual float get_sell_price() const override { return (price_ * (100 + profit_margin_) / 100); }

private:
  int profit_margin_;
};
#endif
