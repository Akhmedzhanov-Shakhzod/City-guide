#include "My.h"
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <dos.h>


void map(void *buff)
{
    int c=1,cc=1, m=0;
void *bur,*v;
unsigned size;
size = imagesize(0,0,640,480);
bur = malloc(size);
v = malloc(imagesize(0,310,640,400));
    setfillstyle(1,8);
    readimagefile("map/map.jpg",0,0,640,480);
    char key=NULL;
    int z=1;
    button(100,400,200,430,2,"Bishkek");
    button(290,400,350,430,6,"Osh");
    button(440,400,560,430,6,"Uch-Korgon");
    button(530,5,630,35,4,"");
        setcolor(15);
        setbkcolor(4);
           outtextxy(545,12,"main menu");


    getimage(0,0,640,480,bur);
    getimage(0,310,640,400,v);
    do
        {
            int x,y;
getmouseclick(WM_LBUTTONDOWN,x,y);

if((x>100)&&(y>400)&&(x<200)&&(y<430))
{
    putimage(0,310,v,COPY_PUT);
       c=1;
           c1(c,cc);
           z=1;
           ma(z);
           m=1;
}
if((x>290)&&(y>400)&&(x<350)&&(y<430))
{
        putimage(0,310,v,COPY_PUT);
        c=2;
    c1(c,cc);
    z=2;
    ma(z);
    m=1;
}
if((x>440)&&(y>400)&&(x<560)&&(y<430))
{
        putimage(0,310,v,COPY_PUT);
   c=3;
   c1(c,cc);
   z=3;
   ma(z);
   m=1;
}
if(m==1)
{
if((x>100)&&(y>360)&&(x<220)&&(y<390))
{
bish(bur,c);
}
if((x>100)&&(y>320)&&(x<220)&&(y<350))
{
    bish1(bur,c);
}
if((x>290)&&(y>360)&&(x<410)&&(y<390))
{
bish(bur,c);
}
if((x>290)&&(y>320)&&(x<410)&&(y<350))
{
    bish1(bur,c);
}

if((x>440)&&(y>360)&&(x<560)&&(y<390))
{
bish(bur,c);
}
if((x>440)&&(y>320)&&(x<560)&&(y<350))
{
    bish1(bur,c);
}
}
if((x>530)&&(y>5)&&(x<630)&&(y<35))
{
    key='e';
}
    if(kbhit())
    {
        key = getch();
    switch(key)
    {
    case 77://right
        putimage(0,310,v,COPY_PUT);
        m=0;
        z++;
        if(z==4) z=1;
        ma(z);
        c++;
        if(c==4) c=1;
        break;
    case 75://left
        putimage(0,310,v,COPY_PUT);
        m=0;
        z--;
        if(z==0) z=3;
        ma(z);
        c--;
        if(c==0) c=3;
        break;
    case 72://up
        if(m==1)
            {
        cc++;
        if(cc==3) cc=1;
        c1(c,cc);
            }
        break;
    case 80://down
        if(m==1)
            {
        cc--;
        if(cc==0) cc=2;
        c1(c,cc);
            }
        break;
    case 13://enter
        if(m==0)
            {
        if(z==1)
        {
        c1(c,cc);
        }
        if(z==2)
        {
        c1(c,cc);
        }
        if(z==3)
        {
        c1(c,cc);
        }
        m=1;
            }
            else if(m==1)
                {
        if(cc==1)
        {
bish(bur,c);
        }
        if(cc==2)
        {
bish1(bur,c);
        }
        m=0;
                }
        break;
    case 8://backspase
        key = 'e';
        break;
    }

    }


        }
    while(key!='e');

    putimage(0,0,buff,COPY_PUT);
    settextstyle(0,0,0);

}

void bish(void *buff,int city)
{
       int w=0,z=0,w1=0,z1=0,ww=0,zz=0,zz1=0,ww1=0,x,y,xx=0,yy=0,xx1,yy1;
            int l=0,k=1;
    char key=NULL;
        do
        {
    setfillstyle(1,8);
            //getmouseclick(WM_MOUSEWHEEL,ww,zz);
settextstyle(10,0,1);
button(0,0,40,40,2,"+");
button(600,0,640,40,2,"-");

    settextstyle(0,0,0);

button(570,445,630,475,4,"back");

if(city==1)
readimagefile("map/1.jpg",(0+ww),(0+zz),(640+ww1),(480+zz1));
else if(city==2)
readimagefile("map/2.jpg",(0+ww),(0+zz),(640+ww1),(480+zz1));
else if(city==3)
readimagefile("map/3.jpg",(0+ww),(0+zz),(640+ww1),(480+zz1));



if((xx>0)&&(yy>0)&&(xx<40)&&(yy<40)&&(k<15))//increase size of map
{
    ww-=150;
    zz-=150;
    ww1+=150;
    zz1+=150;
    k++;
    //if(k==11) k=10;
}
else if((xx>600)&&(yy>0)&&(xx<640)&&(yy<40)&&(k>1))//reduce size of map
{
    ww+=150;
    zz+=150;
    ww1-=150;
    zz1-=150;
    k--;

   // if(k==0) k=1;
}
else if((xx>40)&&(yy>0)&&(xx<600)&&(yy<40)||(xx>0)&&(yy>40)&&(xx<640)&&(yy<480))
{
    w=ww;
    w1=ww1;
    z=zz;
    z1=zz1;
    x=0,y=0;
    while(!((x>0)&&(y>0)&&(x<40)&&(y<40)||(x>600)&&(y>0)&&(x<640)&&(y<40)||(key=='e')))
        {
            if(kbhit())
    {
        key=getch();
    switch(key)
    {
    case 8://backspase
        key = 'e';
        break;
    }
    }
                settextstyle(10,0,1);
button(0,0,40,40,2,"+");
button(600,0,640,40,2,"-");
                settextstyle(0,0,0);
button(570,445,630,475,4,"back");

x=0,y=0;
//printf("before  %d\t%d\n",x,y);
delay(100);
    getmouseclick(WM_LBUTTONDOWN,x,y);
//    printf("after  %d\t%d\n",x,y);

    if((x>40)&&(y>0)&&(x<600)&&(y<40)||(x>0)&&(y>40)&&(x<640)&&(y<480))
        {
            l=1;
        }
         if((x>570)&&(y>445)&&(x<630)&&(y<475))
{
    key='e';
}
      //  printf("after  %d\n",l);
    if(l==1)
    {
    if(ismouseclick(WM_LBUTTONUP))
{
    xx1=mousex();
    yy1=mousey();
}
//mouving in map
if((x>=xx1)&&(w>2*ww)&&(w1<=2*ww1))//on the left
{
w-=50;
w1-=50;
}
if((x<=xx1)&&(w<-2*ww)&&(w1<2*ww1))//on the right
{
w+=50;
w1+=50;
}
if((y<=yy1)&&(z<-2*zz)&&(z1<2*zz1))//on up
{
z+=50;
z1+=50;
}
if((y>=yy1)&&(z>2*zz)&&(z1<=2*zz1))//on down
{
z-=50;
z1-=50;
}
if(city==1)
  readimagefile("map/1.jpg",(0+w),(0+z),(640+w1),(480+z1));
else if(city==2)
  readimagefile("map/2.jpg",(0+w),(0+z),(640+w1),(480+z1));
else if(city==3)
  readimagefile("map/3.jpg",(0+w),(0+z),(640+w1),(480+z1));
l=0;
        }
        }


xx=x;
yy=y;
}
getmouseclick(WM_LBUTTONDOWN,xx,yy);

if((xx>570)&&(yy>445)&&(xx<630)&&(yy<475))
{
    key='e';
}

if(kbhit())
    {
        key=getch();
    switch(key)
    {
    case 8://backspase
        key = 'e';
        break;
    }
    }        }
    while(key!='e');

    putimage(0,0,buff,COPY_PUT);

}
void ma(int z)
{
    switch(z)
    {
    case 1:
    button(100,400,200,430,2,"Bishkek");
    button(290,400,350,430,6,"Osh");
    button(440,400,560,430,6,"Uch-Korgon");
        break;
    case 2:
    button(100,400,200,430,6,"Bishkek");
    button(290,400,350,430,2,"Osh");
    button(440,400,560,430,6,"Uch-Korgon");
        break;
    case 3:
    button(100,400,200,430,6,"Bishkek");
    button(290,400,350,430,6,"Osh");
    button(440,400,560,430,2,"Uch-Korgon");
        break;
    }
}
void bish1(void *buff,int city)
{
    setfillstyle(1,8);
bar(0,0,640,480);
char key=NULL;
    switch(city)
    {
case 1:
          readimagefile("map/11.jpg",0,0,640,480);

    break;
case 2:
readimagefile("map/22.jpg",0,0,640,480);
break;
case 3:
    readimagefile("map/33.jpg",0,0,640,480);

break;
}
do
{
    button(570,445,630,475,4,"back");

    if(kbhit())
    {
        key=getch();
        switch(key)
        {
        case 8://backspace
            key='e';
            break;
        }
    }
            int xz, yz;
        getmouseclick(WM_LBUTTONDOWN, xz,yz);
if((xz>570)&&(yz>445)&&(xz<630)&&(yz<475))
{
            key='e';
}
}
while(key!='e');
    putimage(0,0,buff,COPY_PUT);

}
void c1(int c,int z)
{
switch(c)
{
case 1:
    if(z==1)
    {
    button(100,320,220,350,6,"Full map");
    button(100,360,220,390,2,"Centre");
    }
    if(z==2)
    {
    button(100,320,220,350,2,"Full map");
    button(100,360,220,390,6,"Centre");
    }
    break;
case 2:
    if(z==1)
        {
    button(290,320,410,350,6,"Full map");
    button(290,360,410,390,2,"Centre");
        }
        if(z==2)
        {
    button(290,320,410,350,2,"Full map");
    button(290,360,410,390,6,"Centre");
        }
break;
case 3:
    if(z==1)
        {
    button(440,320,560,350,6,"Full map");
    button(440,360,560,390,2,"Centre");
        }
        if(z==2)
        {
    button(440,320,560,350,2,"Full map");
    button(440,360,560,390,6,"Centre");
        }
    break;
}
}
