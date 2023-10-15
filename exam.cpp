#include <iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);
main()
{
    int Th,Tm,Sh,Sm;
    cout<<"Enter Exam Starting Time (hour): ";
    cin>>Th;
    cout<<"Enter Exam Starting Time (minutes): ";
    cin>>Tm;
    cout<<"Enter Student hour of arrival: ";
    cin>>Sh;
    cout<<"Enter Student minutes of arrival: ";
    cin>>Sm;
    cout<<checkStudentStatus(Th,Tm,Sh,Sm);

}
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{    string show;
    int startTime=(examHour*60)+examMinute;
    int arrivalTime=(studentHour*60)+studentMinute;
    int resultTime=startTime-arrivalTime;
    int result1=arrivalTime-startTime;
    int resultHour=resultTime/60;
    int resultmin=resultTime%60;
    int result=examHour-studentHour;
    int resultm=examMinute-studentMinute;
    int result3=studentHour-examHour;
    int resultm3=studentMinute-examMinute;
    if (resultTime>60)
    {
       show ="Early\n"+to_string(result)+":"+to_string(resultm)+" hours before the start";
    }
    if (resultTime>30&& resultTime<60)
    {
        show= "Early\n"+to_string(resultTime)+" minutes before the start";
    }
    if (resultTime<=30)
    {
       show= "On Time\n"+to_string(resultTime)+" minutes before the start"; 
    }
    if (resultTime==0)
    {
        show="On Time";
    }
    if (resultTime<0&&resultTime>60)
    {
        show="late\n"+to_string(result1)+" minutes after the start";
    }
    if (resultTime<=-60)
    {
        show= "late\n"+to_string(result3)+":"+to_string(resultm3)+" hours after the start";
    }
    return show;

}