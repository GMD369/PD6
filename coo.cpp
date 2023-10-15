#include<iostream>
using namespace std;
string checkPointPosition(int h,int x, int y);
main(){
    int h,x,y;
    cout<<"Enter height: ";
    cin>>h;
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter y coordinate: ";
    cin>>y;
    cout<<checkPointPosition(h,x,y);
}
string checkPointPosition(int h,int x, int y)
{
    int x1=0;
    int y1=0;
    int y2=4*h;
    int x2=2*h;
    if ((x>x1&&x<x2)&&(y>y1&&y<y2))
    {
        return "Inside";
    }
    else if ((x==x1||x==x2)&&(y>=y1&&y<=y2))
    {
        return "Border";
    }
    else if((y==y1||y==y2)&&(x>=x1&&x<=x2))
    {
        return "Border";
    }
    else
    {
        return "Outside";
    }

}
