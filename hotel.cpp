#include <iostream>
#include <string>
using namespace std;
string calculateHotelPrices(string month,int numberOfStays);
main()
{
    string months;
    int stays;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>months;
    cout<<"Enter the number of stays: ";
    cin>>stays;
    cout<<calculateHotelPrices(months,stays);
}
string calculateHotelPrices(string month,int numberOfStays)
{
    double studio,apartments;
    if (month=="May"||month=="October")
    {
         apartments=(65*numberOfStays);
        if (numberOfStays<=7)
        {
            studio=50*numberOfStays;
        }
        if(numberOfStays>7&&numberOfStays<=14)
        {
            studio=(50*numberOfStays)-((50*numberOfStays)*0.05);
        }
        if (numberOfStays>14)
        {
            studio=(50*numberOfStays)-((50*numberOfStays)*0.3);
            apartments=(65*numberOfStays)-((65*numberOfStays)*0.1);
        }
        return "Apartment: "+to_string(apartments)+"$.\nStudio: "+to_string(studio)+"$.";
    }
    if (month=="June"|| month=="September")
    {
           apartments=(68.70*numberOfStays);
        studio=75.20*numberOfStays;
        if (numberOfStays>14)
        {
            studio=studio-(studio*0.2);
            apartments=(68.70*numberOfStays)-((68.70*numberOfStays)*0.1);
        }
        return "Apartment: "+to_string(apartments)+"$.\nStudio: "+to_string(studio)+"$.";
        
    }
    if (month=="July"||month=="August")
    {
         apartments=(77*numberOfStays);
        studio=76*numberOfStays;
        if (numberOfStays>14)
        {
             apartments=(77*numberOfStays)-((77*numberOfStays)*0.1);
        }
           return "Apartment: "+to_string(apartments)+"$.\nStudio: "+to_string(studio)+"$.";
    }

}