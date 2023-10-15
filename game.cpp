#include <iostream>
#include <windows.h>
using namespace std;
void takePill();
void gotoxy(int x,int y);
void printEnemy();
void printMaze();
void eraseEnemy();
void eraseE2();
void eraseE3();
void moveEnemy();
void moveE2();
void moveE3();
void printPlayer();
void printE2();
void printE3();
void erasePlayer();
void movePlayerLeft();
void movePlayerRight();
void movP();
char getCharAtxy(short int x, short int y);
int eX=20,eY=1;
int pX=23,pY=24;
int pX2=23,pY2=3;
int pX3=50,pY3=1;
int tx=30,ty=15;
int score=0;
main()
{ 
  system("cls");  
  printMaze();
  cout<<"Score: "<<score;
  printEnemy();
  printE2();
  printE3();
  printPlayer();
  while(true)
  {
    if (GetAsyncKeyState(VK_LEFT))
    {
        movePlayerLeft();
    }
    if (GetAsyncKeyState(VK_RIGHT))
    {
        movePlayerRight();
    }
    moveEnemy();
    Sleep(200);
    moveE2();
    Sleep(200);
    moveE3();
    Sleep(200);
    movP();
    Sleep(200);
    takePill();
    
    
    
  }
  
}
void takePill()
  { 
    gotoxy(tx,ty);
    cout<<"*";
    Sleep (300);
    gotoxy(tx,ty);
    cout<<" ";
  }
void printE2()
{
    gotoxy(pX2,pY2);
    cout<<"  --- ---";
    gotoxy(pX2,pY2+1);
    cout<<"  #######";
    gotoxy(pX2,pY2+2);
    cout<<"  ####### ";
    gotoxy(pX2,pY2+3);
    cout<<"    \\ /  ";
}
void eraseE2()
{
    gotoxy(pX2,pY2);
    cout<<"         ";
    gotoxy(pX2,pY2+1);
    cout<<"         ";
    gotoxy(pX2,pY2+2);
    cout<<"         ";
    gotoxy(pX2,pY2+3);
    cout<<"         ";
}
void printE3()
{
    gotoxy(pX3,pY3);
    cout<<" %%%% ";
    gotoxy(pX3,pY3+1);
    cout<<"((()))";
    gotoxy(pX3,pY3+2);
    cout<<"+@@@@+";
    gotoxy(pX3,pY3+3);
    cout<<"  +   ";
    
}
void eraseE3()
{
    gotoxy(pX3,pY3);
    cout<<"       ";
    gotoxy(pX3,pY3+1);
    cout<<"       ";
    gotoxy(pX3,pY3+2);
    cout<<"       ";
    gotoxy(pX3,pY3+3);
    cout<<"       ";
}
void movP()
{
    erasePlayer();
    pY=pY-1;
    if(pY == 1)
    {
      pY=24;
    
    while(pX==30&&pY==15)
    {
         score=score+1;
        
    }
    }
    printPlayer();
}
void moveEnemy()
{
    eraseEnemy();
    eX=eX+1;
    if (eX == 60)
    { 
        eX=2;
    }
    printEnemy();
}
void moveE2()
{
    eraseE2();
    pY2=pY2+1;
    if (pY2 == 27)
    {
        pY2=1;
        
    }
    printE2();
}
void moveE3()
{
    eraseE3();
    pY3=pY3+1;
    pX3=pX3-3;
    if (pY3 == 18)
    {
         pX3=50;
         pY3=1;
    }
    printE3();
}
void eraseEnemy()
{
    gotoxy(eX,eY);
    cout<<"        ";
    gotoxy(eX,eY+1);
    cout<<"        ";
    gotoxy(eX,eY+2);
    cout<<"        ";
    gotoxy(eX,eY+3);
    cout<<"        ";
    gotoxy(eX,eY+4);
    cout<<"        ";
    
}
void printEnemy()
{
    gotoxy(eX,eY);
    cout<<"-----";
    gotoxy(eX,eY+1);
    cout<<"!!!!!>";
    gotoxy(eX,eY+2);
    cout<<"(    >>>";
    gotoxy(eX,eY+3);
    cout<<"!!!!!>";
    gotoxy(eX,eY+4);
    cout<<"-----";
    
}
void printMaze()
{
    cout<<"########################################################################"<<endl;
    cout<<"##                                                                   ####"<<endl;
    cout<<"##                                                                   #####"<<endl;
    cout<<"##                                                                   ######"<<endl;
    cout<<"##                                                                   #######"<<endl;
    cout<<"##                                                                   ########"<<endl;
    cout<<"##                                                                   #########"<<endl;
    cout<<"##                                                                   ##########"<<endl;
    cout<<"##                                                                   ###########"<<endl;
    cout<<"##                                                                   ############"<<endl;
    cout<<"##                                                                   #############"<<endl;
    cout<<"##                                                                   ##############"<<endl;
    cout<<"##                                                                   ###############"<<endl;
    cout<<"##                                                                   ###############"<<endl;
    cout<<"##                                                                   ###############"<<endl;
    cout<<"##                                                                   ###############"<<endl;
    cout<<"##                                                                   ###############"<<endl;
    cout<<"##                                                                   ###############"<<endl;
    cout<<"##                                                                   ###############"<<endl;
    cout<<"##                                                                   ###############"<<endl;
    cout<<"##                                                                   ##############"<<endl;
    cout<<"##                                                                   #############"<<endl;
    cout<<"##                                                                   ############"<<endl;
    cout<<"##                                                                   ###########"<<endl;
    cout<<"##                                                                   ##########"<<endl;
    cout<<"##                                                                   #########"<<endl;
    cout<<"##                                                                   ########"<<endl;
    cout<<"##                                                                   #######"<<endl;
    cout<<"##                                                                   ######"<<endl;
    cout<<"##                                                                   #####"<<endl;
    cout<<"#########################################################################"<<endl;
}
void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printPlayer()
{
    gotoxy(pX,pY);
    cout<<"    ^    ";
    gotoxy(pX,pY+1);
    cout<<" | ### | ";
    gotoxy(pX,pY+2);
    cout<<" ((   )) ";
    gotoxy(pX,pY+3);
    cout<<"  ----- ";

}   
   
     

void erasePlayer()
{
    gotoxy(pX,pY);
    cout<<"        ";
    gotoxy(pX,pY+1);
    cout<<"        ";
    gotoxy(pX,pY+2);
    cout<<"        ";
    gotoxy(pX,pY+3);
    cout<<"        ";
    
    
}
void movePlayerLeft()
{   
    if (getCharAtxy(pX - 1, pY) == ' ')
    {
        erasePlayer();
        pX=pX-4;
        printPlayer;
    }
}
void movePlayerRight()
{
    if (getCharAtxy(pX+15,pY)== ' ')
    {
    erasePlayer();
    pX=pX+4;
    printPlayer();
    }
}
char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}
