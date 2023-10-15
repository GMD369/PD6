#include <iostream>
using namespace std;
string serviceType(char service);
float amount(char ser,float min,char times);
main()
{
    char code,time;
    float min;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>>code;
    if ((code =='p'||code =='P')||(code=='R'||code=='r'))
    {
        if (code=='p'||code=='P')
        {
    cout<<"Enter the time of call (D/d for day, N/n for night): ";
    cin>>time;
        }
    cout<<"Enter the number of minutes used: ";
    cin>>min;
    cout<<"Service Type: "<<serviceType(code)<<endl;
    cout<<"Total minutes used: "<<min<<" minutes"<<endl;
    cout<<"Amount due: $"<<amount(code,min,time);
    }
    else
    {
        cout<<"Error!";
    }
}
string serviceType(char service)
{
    if (service=='p'||service=='P')
    {
        return "Premium";
    } 
    if (service=='r'||service=='R')
    {
        return "Regular";
    }
}
float amount(char ser,float min,char times)
{
   if (ser=='r'||ser=='R')
   {
    if (min <= 50)
    {
       float amount=10.00;
       return amount;
    }
    if (min > 50)
    {
        float amount=10.00+(min-50)*0.20;
        return amount;
    }
   }
   if (ser =='p'|| ser=='P') 
   {
        if(times=='n'||times=='N')
        {
            if (min<=100)
            {
                 float amount=25.00;
                 return amount;
            }
        
        if (min>100)
            {
            float amount=25.00+(min-100)*0.05;
            return amount;
            }
        }
        if (times=='d'||times=='D')
        {
            if (min<=75)
            {
                float amount=25.00;
                return amount;
            }
            if (min>75)
            {
                float amount=25.00+(min-75)*0.10;
                return amount;
            }
        }
   }
}
