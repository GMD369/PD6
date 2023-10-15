#include <iostream>
using namespace std;
string decideActivity(string tem,string humd);
main()
{
    string temp;
    string hum;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temp;
    cout<<"Enter humidity (dry or humid): ";
    cin>>hum;
    cout<<"Recommended activity: "<<decideActivity(temp,hum);
}
string decideActivity(string tem,string humd)
{
    if (tem == "warm")
    {
        if (humd == "dry")
        {
            return "Play tennis";
        }
        if (humd == "humid")
        {
            return "swim";
        }
    }
    if (tem == "cold")
    {
        if(humd == "dry")
        {
            return "play basketball";
        }
        if (humd == "humid")
        {
            return "Watch tv";
        }
    }
}