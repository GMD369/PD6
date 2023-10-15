#include <iostream>
using namespace std;
float calculateAverage(float eng,float maths,float chem,float social,float bio);
string calculateGrade(float percent);
main()
{
    string name;
    int eng,math,chem,social,bio;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter marks for English: ";
    cin>>eng;
    cout<<"Enter marks for Maths: ";
    cin>>math;
    cout<<"Enter marks for Chemistry: ";
    cin>>chem;
    cout<<"Enter marks for Social Science: ";
    cin>>social;
    cout<<"Enter marks for biology; ";
    cin>>bio;
    cout<<"Student name: "<<name<<endl;
    float per=calculateAverage(eng,math,chem,social,bio);
    cout<<"Percentage: "<<per<<endl;
    string grade=calculateGrade(per);
    cout<<"Grade: "<<grade;


}
float calculateAverage(float eng,float maths,float chem,float social,float bio)
{
    float avg=((eng+maths+chem+social+bio)/500)*100;
    return avg;
}
string calculateGrade(float percent)
{
    if (percent <=100 && percent >= 90)
    {
        return "A+";
    }
    if (percent < 90 && percent >=80)
    {
        return "A";
    }
    if (percent < 80 && percent >= 70)
    {
        return "B+";
    }
    if (percent < 70 && percent >= 60)
    {
        return "B";
    }
    if (percent < 60 && percent >=50)
    {
        return "C";
    }
    if (percent <50 && percent >=40)
    {
        return "D";
    }
    if (percent < 40)
    {
        return "F";    
    }
}