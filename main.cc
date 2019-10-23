#include <iostream>
#include "./shopping.h"

int main(int argc, char* argv[]) {
  Goods goods1;
  Goods goods2;
  Goods goods3;
  Shopping shopping_list;

  goods1.SetGoodsInfo(2, 3000);
  goods2.SetGoodsInfo(1, 5000);
  goods3.SetGoodsInfo(3, 1000);

  shopping_list.PushList(goods1);
  shopping_list.PushList(goods2);
  shopping_list.PushList(goods3);

  shopping_list.PrintList();

  shopping_list.SortByPrice();

  shopping_list.PrintList();

  shopping_list.SortByIndex();

  shopping_list.PrintList();

  return 0;
}
