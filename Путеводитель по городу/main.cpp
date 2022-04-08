//City guite
//Author Ahmedjanov Shahzod


#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include "My.h"
#include <malloc.h>


int main(void)
{

   int GrDr,GrMod,rez ;

    GrDr=DETECT ;

    initgraph(&GrDr,&GrMod," ") ;
    rez=graphresult() ;

    if(rez != grOk)

    {

        printf("\n ООError graph modeи") ;
        return(1) ;
    }

readimagefile("1.jpg",0,0,640,480);
setbkcolor(15);
setcolor(2);
settextstyle(10,0,4);
outtextxy(450,0,"City guide");
outtextxy(340,445,"Press");
outtextxy(570,410,"the");
outtextxy(540,445,"key...");

getch();


    setfillstyle(1,8);
    bar(0,0,640,195);
readimagefile("1.jpeg",0,195,640,480);
readimagefile("2.jpeg",0,0,225,50);
readimagefile("3.jpeg",435,0,640,50);
readimagefile("photos/13.jpg",225,0,435,50);


settextstyle(10,0,4);
setfillstyle(1,9);
setcolor(15);
setbkcolor(8);
outtextxy(225,50,"Kyrgyzstan");
settextstyle(0,0,0);
    setfillstyle(1,4);
    setbkcolor(4);
    bar(600,0,640,30);
    outtextxy(603,7,"Exit");
    setfillstyle(1,15);
    setbkcolor(15);
    setcolor(0);
    bar(0,0,55,30);
    outtextxy(3,7,"Help");
    button(40,420,140,450,2,"Photos");
    button(200,420,300,450,6,"Reference");
    button(360,420,460,450,6,"Places");
    button(520,420,600,450,6,"Map");
    setbkcolor(8);
setcolor(15);
FILE *F;
F=fopen("title.txt","r");
for(int i=0,k=0;i<6;i++)
    {
fread(&text1[i],sizeof(struct text),6,F);
outtextxy(0,(90+k),text1[i].a1);
k+=17;
    }
    fclose(F);

        choose();

    closegraph() ;
    return(0) ;
}

void button(int x, int y,int x1,int y1,int colour, char *st)
{
    setcolor(0);
    setfillstyle(1,colour);
    rectangle(x,y,x1,y1);
    bar(x+1,y+1,x1,y1);
    setbkcolor(colour);
    outtextxy(x+15,y+7,st);
}
void choose()
{
    void *buff;
unsigned size;
size = imagesize(0,0,640,480);
buff = malloc(size);
getimage(0,0,640,480,buff);

    char key;
    int x=1;
    do
    {
        int xz, yz;
        getmouseclick(WM_LBUTTONDOWN, xz,yz);
if((xz>40)&&(yz>420)&&(xz<140)&&(yz<450))
{
    photos(buff);

}
if((xz>200)&&(yz>420)&&(xz<300)&&(yz<450))
{
    reference(buff);
    x=1;
}
if((xz>360)&&(yz>420)&&(xz<460)&&(yz<450))
{
    places(buff);
    x=1;
}
if((xz>520)&&(yz>420)&&(xz<600)&&(yz<450))
{
    map(buff);
    x=1;
}
if((xz>0)&&(yz>0)&&(xz<55)&&(yz<30))
{
    help(buff);
}

if((xz>600)&&(yz>0)&&(xz<640)&&(yz<30))
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
    if(x==5) x=1;
    result(x);
    break;
case 75://left
    x--;
    if(x==0) x=4;
    result(x);
    break;
case 13://enter
    if(x==1)
    {
            photos(buff);
    }
    if(x==2)
    {
            reference(buff);
            x=1;
    }
    if(x==3)
    {
            places(buff);
            x=1;
    }
    if(x==4)
    {
        map(buff);
            x=1;
    }
    break;
}
    }
    }

    while(key!='e');

}

void result(int x)
{
switch(x)
{
case 1:
    button(40,420,140,450,2,"Photos");
    button(200,420,300,450,6,"Reference");
    button(360,420,460,450,6,"Places");
    button(520,420,600,450,6,"Map");
    break;
case 2:
    button(40,420,140,450,6,"Photos");
    button(200,420,300,450,2,"Reference");
    button(360,420,460,450,6,"Places");
    button(520,420,600,450,6,"Map");
    break;
case 3:
    button(40,420,140,450,6,"Photos");
    button(200,420,300,450,6,"Reference");
    button(360,420,460,450,2,"Places");
    button(520,420,600,450,6,"Map");
    break;
case 4:
    button(40,420,140,450,6,"Photos");
    button(200,420,300,450,6,"Reference");
    button(360,420,460,450,6,"Places");
    button(520,420,600,450,2,"Map");
    break;
}
}

void help(void *buff)
{
    setfillstyle(1,8);
    bar(0,0,640,480);

    button(520,5,630,35,4,"Main manu");
    setcolor(15);
    setbkcolor(8);

    char key=NULL;

        outtextxy(5,45,"Active keys: ");
        outtextxy(5,75,"'next' , 'previous' , 'up' , 'down' , 'enter' , 'backspace' and 'e'");
        outtextxy(5,105,"Selection of items via mouse and key 'Enter'");
        outtextxy(5,135,"movement of points via keys 'next' , 'previous' , 'up' and 'down'");
        outtextxy(5,165,"Return to privios menu via mouse and keys 'Backspace <- ' , 'e'");
        outtextxy(5,195,"Closing program via mouse and key 'e'");

    do
    {
if(kbhit())
{
    key=getch();
    switch(key)
    {
    case 8://backspase
        key='e';
        break;
    }
}
    int xz,yz;
    getmouseclick(WM_LBUTTONDOWN,xz,yz);
    if((xz>520)&&(yz>5)&&(xz<630)&&(yz<35))
    {
        key='e';
    }
    }
    while(key!='e');
    putimage(0,0,buff,COPY_PUT);
}
