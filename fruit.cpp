#include <iostream>
using namespace std;
float calculateFruitPrice(string fruit,string dayOfWeek,double quantity);
main()
{
  string name,day;
  double quan;
  cin>>name;
  if(name=="banana"||name=="apple"||name=="orange"||name=="grapes"||name=="pineapple"||name=="grapefruit"||name=="kiwi")
  {
  cin>>day;
  if (day=="Sunday"||day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"||day=="Saturday")
  {
  cin>>quan;
  cout<<calculateFruitPrice(name,day,quan);
}
}
}
float calculateFruitPrice(string fruit,string dayOfWeek,double quantity)
{
  if (dayOfWeek=="Sunday"||dayOfWeek=="Saturday")
  {
    double price;
    if (fruit=="banana")
    {
         price=quantity*2.70;
    }
    if (fruit=="apple")
    {
        price=quantity*1.25;
    }
    if (fruit=="orange")
    {
        price=quantity*0.90;
    }
    if (fruit=="grapefruit")
    {
        price=quantity*1.60;
    }
    if (fruit=="kiwi")
    {
        price=quantity*3.00;
    }
    if (fruit=="pineapple")
    {
        price=quantity*5.60;
    }
    if (fruit=="grapes")
    {
        price=quantity*4.20;
    }
    return price;
  } 
  if (dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday") 
  {
     double price;
    if (fruit=="banana")
    {
         price=quantity*2.50;
    }
    if (fruit=="apple")
    {
        price=quantity*1.20;
    }
    if (fruit=="orange")
    {
        price=quantity*0.85;
    }
    if (fruit=="grapefruit")
    {
        price=quantity*1.45;
    }
    if (fruit=="kiwi")
    {
        price=quantity*2.70;
    }
    if (fruit=="pineapple")
    {
        price=quantity*5.50;
    }
    if (fruit=="grapes")
    {
        price=quantity*3.85;
    } 
    return price;
  }
}