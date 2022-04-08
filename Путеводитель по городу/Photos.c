#include "My.h"
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void photos(void *buff)
{

    char s[10];
char key=NULL;
int x=1;
readimagefile("photos/1.jpg",0,0,640,480);
    setbkcolor(9);

            sprintf(s,"%d / 20",x);
            outtextxy(560,15,s);
    lin();
do
{
        setbkcolor(9);
            int xz, yz;
        getmouseclick(WM_LBUTTONDOWN, xz,yz);
if((xz>30)&&(yz>420)&&(xz<160)&&(yz<450))
{
  x--;
            if(x==0) x=20;
            photo(x);
            sprintf(s,"%d / 20 ",x);
            outtextxy(560,15,s);
    lin();
}
if((xz>480)&&(yz>420)&&(xz<610)&&(yz<450))
{
  x++;
            if(x==21) x=1;
            photo(x);
            sprintf(s,"%d / 20",x);
            outtextxy(560,15,s);
    lin();
}
if((xz>270)&&(yz>420)&&(xz<370)&&(yz<450))
{
key='e';
}

    if(kbhit())
    {
        key=getch();
        switch(key)
        {
        case 77://right
            x++;
            if(x==21) x=1;
            photo(x);
            sprintf(s,"%d / 20",x);
            outtextxy(560,15,s);
    lin();
            break;
        case 75://left
            x--;
            if(x==0) x=20;
            photo(x);
            sprintf(s,"%d / 20 ",x);
            outtextxy(560,15,s);
    lin();
            break;
        case 8://backspase
            key='e';
            break;
        }

    }
}
while(key!='e');
putimage(0,0,buff,COPY_PUT);
}

void photo(int x)
{
switch(x)
{
case 1:
    readimagefile("photos/1.jpg",0,0,640,480);
    break;
case 2:
    readimagefile("photos/2.jpg",0,0,640,480);
    break;
case 3:
    readimagefile("photos/3.jpg",0,0,640,480);
    break;
case 4:
    readimagefile("photos/4.jpg",0,0,640,480);
    break;
case 5:
    readimagefile("photos/5.jpg",0,0,640,480);
    break;
case 6:
    readimagefile("photos/6.jpg",0,0,640,480);
    break;
case 7:
    readimagefile("photos/7.jpg",0,0,640,480);
    break;
case 8:
    readimagefile("photos/8.jpg",0,0,640,480);
    break;
case 9:
    readimagefile("photos/9.jpg",0,0,640,480);
    break;
case 10:
    readimagefile("photos/10.jpg",0,0,640,480);
    break;
case 11:
    readimagefile("photos/11.jpg",0,0,640,480);
    break;
case 12:
    readimagefile("photos/12.jpg",0,0,640,480);
    break;
case 13:
    readimagefile("photos/13.jpg",0,0,640,480);
    break;
case 14:
    readimagefile("photos/14.jpg",0,0,640,480);
    break;
case 15:
    readimagefile("photos/15.jpg",0,0,640,480);
    break;
case 16:
    readimagefile("photos/16.jpg",0,0,640,480);
    break;
case 17:
    readimagefile("photos/17.jpg",0,0,640,480);
    break;
case 18:
    readimagefile("photos/18.jpg",0,0,640,480);
    break;
case 19:
    readimagefile("photos/19.jpg",0,0,640,480);
    break;
case 20:
    readimagefile("photos/20.jpg",0,0,640,480);
    break;
}
}

void lin()
{
    button(60,420,160,450,6,"Previous");
    button(480,420,580,450,6,"Next");
    setcolor(6);
    setfillstyle(1,6);

    line(60,410,60,460);
    line(30,435,60,410);
    line(30,435,60,460);
floodfill(31,435,6);

    line(580,410,580,460);
    line(580,410,610,435);
    line(580,460,610,435);
floodfill(581,435,6);

setcolor(0);
    line(29,435,61,409);
    line(29,435,61,461);
    line(61,409,61,420);
    line(61,450,61,461);

    line(579,409,611,435);
    line(579,461,611,435);
    line(579,409,579,420);
    line(579,450,579,461);
    //setfillstyle(1,4);
    button(270,420,385,450,4,"Main manu");
}
