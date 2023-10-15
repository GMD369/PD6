#include <iostream>
#include <cmath>
using namespace std;
int calculateVolleyballGames(string yearType,int holidays,int hometownWeekends);
main()
{
    string type;
    int holi,week;
    cout<<"Enter year type: ";
    cin>>type;
    cout<<"Enter number of holidays: ";
    cin>>holi;
    cout<<"Enter number of weekends: ";
    cin>>week;
    cout<<calculateVolleyballGames(type,holi,week);

}
int calculateVolleyballGames(string yearType,int holidays,int hometownWeekends)
{
  int NW=48-hometownWeekends;
  int NWwithoutwork=(3*NW)/4;
  int volleySaturday=NWwithoutwork;
  int volleyHolidays=(2*holidays)/3;
  if (yearType=="Leap")
  {
    int extraVolley=(15*(volleySaturday+volleyHolidays))/100;
    volleySaturday=volleySaturday+extraVolley;
    volleyHolidays=volleyHolidays+extraVolley;
  }
  
       int totalGames=volleySaturday+volleyHolidays+hometownWeekends;
       return floor(totalGames);
  }
  

