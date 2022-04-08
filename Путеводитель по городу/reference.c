#include "My.h"
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <malloc.h>

void reference(void *buff)
{
void *buf;
void *bu;
unsigned size;
size = imagesize(0,0,640,480);
buf = malloc(size);
bu  = malloc(size);
    setfillstyle(1,8);

    bar(0,0,640,480);
getimage(0,0,640,480,buf);
    setcolor(15);
    setbkcolor(8);
settextstyle(10,0,4);
outtextxy(225,5,"Kyrgyzstan");

settextstyle(0,0,0);
FILE *F;
F=fopen("files/1a.txt","r");

for(int i=0,k=0;i<6;i++)
    {
fscanf(F,"%s",text1[i].a1);
outtextxy(20,(60+k),text1[i].a1);
k+=25;
    }
    fclose(F);
    int x=1;
    char key=NULL;
            reference1(x);

getimage(0,0,640,480,bu);
do
{
               int xz, yz;
        getmouseclick(WM_LBUTTONDOWN, xz,yz);
if((xz>30)&&(yz>380)&&(xz<100)&&(yz<410))
{
                texx(1,buf,bu);
}
if((xz>135)&&(yz>380)&&(xz<255)&&(yz<410))
{
                texx(2,buf,bu);
}
if((xz>290)&&(yz>380)&&(xz<410)&&(yz<410))
{
                texx(3,buf,bu);

}
if((xz>450)&&(yz>380)&&(xz<610)&&(yz<410))
{
                texx(4,buf,bu);
}
if((xz>30)&&(yz>420)&&(xz<100)&&(yz<450))
{
                texx(5,buf,bu);
}
if((xz>135)&&(yz>420)&&(xz<255)&&(yz<450))
{
                texx(6,buf,bu);
}
if((xz>290)&&(yz>420)&&(xz<410)&&(yz<450))
{
                texx(7,buf,bu);
}
if((xz>450)&&(yz>420)&&(xz<610)&&(yz<450))
{
                texx(8,buf,bu);
}
if((xz>520)&&(yz>5)&&(xz<630)&&(yz<35))
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
            if(x==9) x=1;
            reference1(x);
            break;
        case 75://left
            x--;
            if(x==0) x=8;
            reference1(x);
            break;
        case 72://up
            x-=4;
            if(x==-3) x=5;
            if(x==-2) x=6;
            if(x==-1) x=7;
            if(x==0)  x=8;
                        reference1(x);
            break;
        case 80://down
            x+=4;
            if(x==9)  x=1;
            if(x==10) x=2;
            if(x==11) x=3;
            if(x==12) x=4;
                        reference1(x);
            break;
        case 8://backspase
            key='e';
            break;
        case 13://enter
            if(x==1)
            {
                texx(x,buf,bu);
            }
            if(x==2)
            {
                texx(x,buf,bu);
                x=1;
            }
            if(x==3)
            {
                texx(x,buf,bu);
                x=1;
            }
            if(x==4)
            {
                texx(x,buf,bu);
            x=1;
            }
            if(x==5)
            {
                texx(x,buf,bu);
                x=1;
            }
            if(x==6)
            {
                texx(x,buf,bu);
                x=1;
            }
            if(x==7)
            {
                texx(x,buf,bu);
                x=1;
            }
            if(x==8)
            {
                texx(x,buf,bu);
                x=1;
            }

            break;
        }

        }
    }



while(key!='e');
putimage(0,0,buff,COPY_PUT);
}

void reference1(int x)
{
     button(520,5,630,35,4,"Main manu");

switch(x)
{
case 1:
    button(30,420,100,450,6,"Lived");
    button(135,420,255,450,6,"Customs");
    button(290,420,410,450,6,"Shopping");
    button(450,420,610,450,6,"Money and prices");
    button(30,380,100,410,2,"Visa");
    button(135,380,255,410,6,"How to get");
    button(290,380,410,410,6,"When to go");
    button(450,380,610,410,6,"Local transport");

    break;
case 2:
    button(30,420,100,450,6,"Lived");
    button(135,420,255,450,6,"Customs");
    button(290,420,410,450,6,"Shopping");
    button(450,420,610,450,6,"Money and prices");
    button(30,380,100,410,6,"Visa");
    button(135,380,255,410,2,"How to get");
    button(290,380,410,410,6,"When to go");
    button(450,380,610,410,6,"Local transport");

    break;
case 3:
    button(30,420,100,450,6,"Lived");
    button(135,420,255,450,6,"Customs");
    button(290,420,410,450,6,"Shopping");
    button(450,420,610,450,6,"Money and prices");
    button(30,380,100,410,6,"Visa");
    button(135,380,255,410,6,"How to get");
    button(290,380,410,410,2,"When to go");
    button(450,380,610,410,6,"Local transport");

    break;
case 4:
    button(30,420,100,450,6,"Lived");
    button(135,420,255,450,6,"Customs");
    button(290,420,410,450,6,"Shopping");
    button(450,420,610,450,6,"Money and prices");
    button(30,380,100,410,6,"Visa");
    button(135,380,255,410,6,"How to get");
    button(290,380,410,410,6,"When to go");
    button(450,380,610,410,2,"Local transport");

    break;
case 5:
    button(30,420,100,450,2,"Lived");
    button(135,420,255,450,6,"Customs");
    button(290,420,410,450,6,"Shopping");
    button(450,420,610,450,6,"Money and prices");
    button(30,380,100,410,6,"Visa");
    button(135,380,255,410,6,"How to get");
    button(290,380,410,410,6,"When to go");
    button(450,380,610,410,6,"Local transport");

    break;
case 6:
    button(30,420,100,450,6,"Lived");
    button(135,420,255,450,2,"Customs");
    button(290,420,410,450,6,"Shopping");
    button(450,420,610,450,6,"Money and prices");
    button(30,380,100,410,6,"Visa");
    button(135,380,255,410,6,"How to get");
    button(290,380,410,410,6,"When to go");
    button(450,380,610,410,6,"Local transport");

    break;
case 7:
    button(30,420,100,450,6,"Lived");
    button(135,420,255,450,6,"Customs");
    button(290,420,410,450,2,"Shopping");
    button(450,420,610,450,6,"Money and prices");
    button(30,380,100,410,6,"Visa");
    button(135,380,255,410,6,"How to get");
    button(290,380,410,410,6,"When to go");
    button(450,380,610,410,6,"Local transport");

    break;
case 8:
    button(30,420,100,450,6,"Lived");
    button(135,420,255,450,6,"Customs");
    button(290,420,410,450,6,"Shopping");
    button(450,420,610,450,2,"Money and prices");
    button(30,380,100,410,6,"Visa");
    button(135,380,255,410,6,"How to get");
    button(290,380,410,410,6,"When to go");
    button(450,380,610,410,6,"Local transport");

    break;

}

}


void texx(int x,void *buf,void *bu)
{

    char key=NULL;

FILE *F;
        settextstyle(10,0,4);
        setbkcolor(8);
        setcolor(15);
    switch(x)
    {
    case 1:
        putimage(0,0,buf,COPY_PUT);
outtextxy(255,5,"Visa");
readimagefile("photos/visa.jpg",0,280,640,480);
 F=fopen("files/visa.txt","r");
        break;
    case 2:
        putimage(0,0,buf,COPY_PUT);
outtextxy(225,5,"How to get");
readimagefile("photos/manas.jpg",0,175,350,480);
readimagefile("photos/osh.jpg",350,175,640,480);
 F=fopen("files/how to get.txt","r");

        break;
    case 3:
 putimage(0,0,buf,COPY_PUT);
outtextxy(225,5,"When to go");
readimagefile("photos/when to go.jpg",0,265,320,480);
readimagefile("photos/when to go1.jpg",320,265,640,480);
 F=fopen("files/when to go.txt","r");

        break;
    case 4:
 putimage(0,0,buf,COPY_PUT);
outtextxy(200,5,"Local transport");
readimagefile("photos/bus.jpg",0,377,213,480);
readimagefile("photos/minibus.jpg",213,377,427,480);
readimagefile("photos/poesd.jpg",427,377,640,480);
 F=fopen("files/local transport.txt","r");
        break;
    case 5:
        putimage(0,0,buf,COPY_PUT);
outtextxy(255,5,"Lived");
readimagefile("photos/hotels.jpg",0,390,350,480);
readimagefile("photos/palatka.jpg",350,390,640,480);

 F=fopen("files/lived.txt","r");
        break;
    case 6:
        putimage(0,0,buf,COPY_PUT);
outtextxy(240,5,"Customs");
readimagefile("photos/custom.jpg",0,390,640,480);
 F=fopen("files/customs.txt","r");
        break;
    case 7:
        putimage(0,0,buf,COPY_PUT);
outtextxy(230,5,"Shopping");
readimagefile("photos/spop.jpg",0,150,320,315);
readimagefile("photos/spop1.jpg",320,150,640,315);
readimagefile("photos/spop2.jpg",320,315,640,480);
readimagefile("photos/spop3.jpg",0,315,320,480);
 F=fopen("files/shopping.txt","r");
        break;
    case 8:
        putimage(0,0,buf,COPY_PUT);
outtextxy(175,5,"Money and prices");
readimagefile("photos/money.jpg",0,200,640,480);
 F=fopen("files/money and prices.txt","r");
        break;

    }

            settextstyle(0,0,0);
            button(560,5,630,35,4,"Back");
            setbkcolor(8);
            setcolor(15);
    for(int i=0,k=0;i<20;i++)
    {
                fread(&referencetxt[i],sizeof(struct text),20,F);
                outtextxy(0,(40+k),referencetxt[i].a1);
    k+=17;
    }
    do
        {
            int xz,yz;
            getmouseclick(WM_LBUTTONDOWN, xz,yz);
if((xz>560)&&(yz>5)&&(xz<630)&&(yz<35))
{
            key='e';
}
    if(kbhit())
    {
        key = getch();
        if(key==8)
            key='e';
    }
        }
        while(key!='e');
            fclose(F);
            for(int j=0;j<20;j++)
            referencetxt[j].a1[0]=NULL;
        putimage(0,0,bu,COPY_PUT);
}
