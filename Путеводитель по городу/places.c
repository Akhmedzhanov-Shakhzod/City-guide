#include "My.h"
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <malloc.h>


void places(void *buff)
{
    int x=1;
void *buf;
void *bu;
unsigned size;
size = imagesize(0,0,640,480);
buf = malloc(size);
bu  = malloc(size);
    setfillstyle(1,8);
    bar(0,0,640,480);
getimage(0,0,640,480,buf);
place(x);
getimage(0,0,640,480,bu);

    char key=NULL;
    do
        {
                          int xz, yz;
        getmouseclick(WM_LBUTTONDOWN, xz,yz);
if((xz>520)&&(yz>440)&&(xz<630)&&(yz<475))
{
key='e';
}
if(x<13)
{
if((xz>0)&&(yz>0)&&(xz<225)&&(yz<120))
{
placess(1,buf,bu);
}
else if((xz>225)&&(yz>0)&&(xz<435)&&(yz<120))
{
placess(2,buf,bu);
      x=1;
}
else if((xz>435)&&(yz>0)&&(xz<640)&&(yz<120))
{
placess(3,buf,bu);
      x=1;
}
else if((xz>0)&&(yz>120)&&(xz<225)&&(yz<240))
{
placess(4,buf,bu);
      x=1;
}
else if((xz>225)&&(yz>120)&&(xz<435)&&(yz<240))
{

placess(5,buf,bu);
      x=1;
}

else if((xz>435)&&(yz>120)&&(xz<640)&&(yz<240))
{
placess(6,buf,bu);
      x=1;
}

else if((xz>0)&&(yz>240)&&(xz<225)&&(yz<360))
{
placess(7,buf,bu);
      x=1;
}

else if((xz>225)&&(yz>240)&&(xz<435)&&(yz<360))
{
placess(8,buf,bu);
      x=1;
}
else if((xz>435)&&(yz>240)&&(xz<640)&&(yz<360))
{
placess(9,buf,bu);
      x=1;
}
else if((xz>0)&&(yz>360)&&(xz<225)&&(yz<480))
{
placess(10,buf,bu);
      x=1;
}
else if((xz>225)&&(yz>360)&&(xz<435)&&(yz<480))
{
placess(11,buf,bu);
      x=1;
}
else if((xz>435)&&(yz>360)&&(xz<640)&&(yz<440)||(xz>435)&&(yz>440)&&(xz<520)&&(yz<480))
{

placess(12,buf,bu);
      x=1;
}
}
else if(x>12 && x<16)
    {
        if((xz>0)&&(yz>0)&&(xz<225)&&(yz<120))
{
placess(4,buf,bu);
}
else if((xz>225)&&(yz>0)&&(xz<435)&&(yz<120))
{
placess(5,buf,bu);
      x=1;
}
else if((xz>435)&&(yz>0)&&(xz<640)&&(yz<120))
{
placess(6,buf,bu);
      x=1;
}
else if((xz>0)&&(yz>120)&&(xz<225)&&(yz<240))
{
placess(7,buf,bu);
      x=1;
}
else if((xz>225)&&(yz>120)&&(xz<435)&&(yz<240))
{

placess(8,buf,bu);
      x=1;
}

else if((xz>435)&&(yz>120)&&(xz<640)&&(yz<240))
{
placess(9,buf,bu);
      x=1;
}

else if((xz>0)&&(yz>240)&&(xz<225)&&(yz<360))
{
placess(10,buf,bu);
      x=1;
}

else if((xz>225)&&(yz>240)&&(xz<435)&&(yz<360))
{
placess(11,buf,bu);
      x=1;
}
else if((xz>435)&&(yz>240)&&(xz<640)&&(yz<360))
{
placess(12,buf,bu);
      x=1;
}
else if((xz>0)&&(yz>360)&&(xz<225)&&(yz<480))
{
placess(13,buf,bu);
      x=1;
}
else if((xz>225)&&(yz>360)&&(xz<435)&&(yz<480))
{
placess(14,buf,bu);
      x=1;
}
else if((xz>435)&&(yz>360)&&(xz<640)&&(yz<440)||(xz>435)&&(yz>440)&&(xz<520)&&(yz<480))
{
placess(15,buf,bu);
      x=1;
}
    }
    else if(x>15)
    {
        if((xz>0)&&(yz>0)&&(xz<225)&&(yz<120))
{
placess(7,buf,bu);
}
else if((xz>225)&&(yz>0)&&(xz<435)&&(yz<120))
{
placess(8,buf,bu);
      x=1;
}
else if((xz>435)&&(yz>0)&&(xz<640)&&(yz<120))
{
placess(9,buf,bu);
      x=1;
}
else if((xz>0)&&(yz>120)&&(xz<225)&&(yz<240))
{
placess(10,buf,bu);
      x=1;
}
else if((xz>225)&&(yz>120)&&(xz<435)&&(yz<240))
{

placess(11,buf,bu);
      x=1;
}

else if((xz>435)&&(yz>120)&&(xz<640)&&(yz<240))
{
placess(12,buf,bu);
      x=1;
}

else if((xz>0)&&(yz>240)&&(xz<225)&&(yz<360))
{
placess(13,buf,bu);
      x=1;
}

else if((xz>225)&&(yz>240)&&(xz<435)&&(yz<360))
{
placess(14,buf,bu);
      x=1;
}
else if((xz>435)&&(yz>240)&&(xz<640)&&(yz<360))
{
placess(15,buf,bu);
      x=1;
}
else if((xz>0)&&(yz>360)&&(xz<225)&&(yz<480))
{
placess(16,buf,bu);
      x=1;
}
else if((xz>225)&&(yz>360)&&(xz<435)&&(yz<480))
{
placess(17,buf,bu);
      x=1;
}
else if((xz>435)&&(yz>360)&&(xz<640)&&(yz<440)||(xz>435)&&(yz>440)&&(xz<520)&&(yz<480))
{
placess(18,buf,bu);
      x=1;
}
    }

    if(kbhit())
    {
        key = getch();
    switch(key)
    {
    case 8://backspase
        key = 'e';
        break;
    case 77://right
        x++;
        if(x==19) x=1;
        place(x);
        break;
    case 75://left
        x--;
        if(x==0) x=18;
        place(x);
        break;
    case 72://up
        x-=3;
        if(x==-2) x=16;
        if(x==-1) x=17;
        if(x==0)  x=18;
        place(x);
        break;
    case 80://down
        x+=3;
        if(x==19) x=1;
        if(x==20) x=2;
        if(x==21) x=3;
        place(x);
        break;
    case 13://enter
        if(x==1)
        {
      placess(x,buf,bu);
        }
       else if(x==2)
        {
      placess(x,buf,bu);
      x=1;

        }
       else if(x==3)
        {
      placess(x,buf,bu);
x=1;
        }
        else if(x==4)
        {
      placess(x,buf,bu);
x=1;
        }
        else if(x==5)
        {
      placess(x,buf,bu);
x=1;
        }
        else if(x==6)
        {
      placess(x,buf,bu);
x=1;
        }
        else if(x==7)
        {
            placess(x,buf,bu);
x=1;

        }
        else if(x==8)
        {
               placess(x,buf,bu);

x=1;
        }
        else if(x==9)
        {
              placess(x,buf,bu);
x=1;

        }
        else if(x==10)
        {
      placess(x,buf,bu);
x=1;
        }
        else if(x==11)
        {
      placess(x,buf,bu);
x=1;
        }
        else if(x==12)
        {
      placess(x,buf,bu);
x=1;
        }
        else if(x==13)
        {
      placess(x,buf,bu);
x=1;
        }
        else if(x==14)
        {
      placess(x,buf,bu);
x=1;
        }
        else if(x==15)
        {
      placess(x,buf,bu);
x=1;
        }
        else if(x==16)
        {
      placess(x,buf,bu);
x=1;
        }
        else if(x==17)
        {
      placess(x,buf,bu);
x=1;
        }
        else if(x==18)
        {
      placess(x,buf,bu);
x=1;
        }
        break;
    }

    }


        }

while(key!='e');

    putimage(0,0,buff,COPY_PUT);
}

void place(int x)
{


    switch(x)
    {
    case 1:
    placec(4,2,2,2,2,2,2,2,2,2,2,2,x);
        break;
    case 2:
    placec(2,4,2,2,2,2,2,2,2,2,2,2,x);
        break;
    case 3:
    placec(2,2,4,2,2,2,2,2,2,2,2,2,x);
        break;
    case 4:
    placec(2,2,2,4,2,2,2,2,2,2,2,2,x);
        break;
    case 5:
    placec(2,2,2,2,4,2,2,2,2,2,2,2,x);
        break;
    case 6:
    placec(2,2,2,2,2,4,2,2,2,2,2,2,x);
        break;
    case 7:
    placec(2,2,2,2,2,2,4,2,2,2,2,2,x);
        break;
    case 8:
    placec(2,2,2,2,2,2,2,4,2,2,2,2,x);
        break;
    case 9:
    placec(2,2,2,2,2,2,2,2,4,2,2,2,x);
        break;
    case 10:
    placec(2,2,2,2,2,2,2,2,2,4,2,2,x);
        break;
    case 11:
    placec(2,2,2,2,2,2,2,2,2,2,4,2,x);
        break;
    case 12:
    placec(2,2,2,2,2,2,2,2,2,2,2,4,x);
        break;
    case 13:
    placec(2,2,2,2,2,2,2,2,2,4,2,2,x);
        break;
    case 14:
    placec(2,2,2,2,2,2,2,2,2,2,4,2,x);
        break;
    case 15:
    placec(2,2,2,2,2,2,2,2,2,2,2,4,x);
    break;
    case 16:
    placec(2,2,2,2,2,2,2,2,2,4,2,2,x);
        break;
    case 17:
    placec(2,2,2,2,2,2,2,2,2,2,4,2,x);
        break;
    case 18:
    placec(2,2,2,2,2,2,2,2,2,2,2,4,x);
        break;
    }
         button(520,440,630,475,4,"Main manu");

}


void placec(int y,int y1,int y2,int y3,int y4,int y5,int y6,int y7,int y8,int y9,int y10,int y11,int x)
{
    if(x<13)
        {
    readimagefile("photos/scrin.jpg",0,0,640,480);
    but(0,0,225,120,y);
    but(225,0,435,120,y1);
    but(435,0,640,120,y2);
    but(0,120,225,240,y3);
    but(225,120,435,240,y4);
    but(435,120,640,240,y5);
    but(0,240,225,360,y6);
    but(225,240,435,360,y7);
    but(435,240,640,360,y8);
    but(0,360,225,480,y9);
    but(225,360,435,480,y10);
    but(435,360,640,480,y11);
        }
       else if(x>12 && x<16)
       {
    readimagefile("photos/scrin1.jpg",0,0,640,480);
    but(0,0,225,120,y);
    but(225,0,435,120,y1);
    but(435,0,640,120,y2);
    but(0,120,225,240,y3);
    but(225,120,435,240,y4);
    but(435,120,640,240,y5);
    but(0,240,225,360,y6);
    but(225,240,435,360,y7);
    but(435,240,640,360,y8);
    but(0,360,225,480,y9);
    but(225,360,435,480,y10);
    but(435,360,640,480,y11);
       }
       else if(x>15)
       {
    readimagefile("photos/scrin2.jpg",0,0,640,480);
    but(0,0,225,120,y);
    but(225,0,435,360,y1);
    but(435,0,640,120,y2);
    but(0,120,225,240,y3);
    but(225,120,435,240,y4);
    but(435,120,640,240,y5);
    but(0,240,225,360,y6);
    but(225,240,435,360,y7);
    but(435,240,640,360,y8);
    but(0,360,225,480,y9);
    but(225,360,435,480,y10);
    but(435,360,640,480,y11);
       }
}

void placess(int x, void *buf,void *bu)
{
FILE *F;
setbkcolor(8);
setcolor(15);
switch(x)
{

case 1:
     putimage(0,0,buf,COPY_PUT);
    readimagefile("photos/dordoy.jpg",0,0,640,200);
    F=fopen("files/1.txt","r");
    outtextxy(0,400,"Address 14 trolleybus from Chuisky Prospekt, 42 Sovetskaya bus and");
    outtextxy(0,420,"20 / 24s Kievskaya street.");
    outtextxy(0,440,"Opening hours 8.00-13.00 ");
    outtextxy(0,460,"GPS coordinates N42 ° 52 '12.1 'E74 ° 35' 16.4'");

    break;
case 2:
     putimage(0,0,buf,COPY_PUT);
    readimagefile("photos/oshmarket.jpg",0,0,640,200);
        F=fopen("files/2.txt","r");
    outtextxy(0,440,"Address Alisher Navoi");
    outtextxy(0,460,"GPS coordinates N 40 ° 32 '16.0 'E72 ° 47' 53.4'");
    break;
case 3:
     putimage(0,0,buf,COPY_PUT);
    readimagefile("photos/burana.jpg",0,0,640,200);
        F=fopen("files/3.txt","r");
    outtextxy(0,440,"Address 80 km from Bishkek and 10 km from the city of Tokmok ");
    outtextxy(0,460,"GPS coordinates N 42 ° 44 '47.1 'E75 ° 15'1.6'");
    break;
case 4:
     putimage(0,0,buf,COPY_PUT);
    readimagefile("photos/boom.jpg",0,0,640,200);
        F=fopen("files/4.txt","r");
    outtextxy(0,440,"Address Starting 112 km from Bishkek");
    outtextxy(0,460,"GPS coordinates N 42 ° 34 '60.0 'E75 ° 47 60.0'");
    break;
case 5:
     putimage(0,0,buf,COPY_PUT);
    readimagefile("photos/erkindik.jpg",0,0,640,200);
        F=fopen("files/5.txt","r");
    outtextxy(0,440,"Address Erkindik Boulevard, Bishkek");
    outtextxy(0,460,"GPS coordinates N 42 ° 52 '31.3 'E74 ° 36'23.6'");
    break;
case 6:
     putimage(0,0,buf,COPY_PUT);
    readimagefile("photos/kurort.jpg",0,0,640,200);
        F=fopen("files/6.txt","r");
    outtextxy(0,400,"Address Nurmakmat St ");
    outtextxy(0,420,"Price Accommodation 3000-25000 soms per day ");
    outtextxy(0,440,"Website http://www.karakol-ski.kg/ ");
    outtextxy(0,460,"GPS coordinates N 42 ° 24 '28.5 'E 78 ° 2757.6'");
    break;
case 7:
     putimage(0,0,buf,COPY_PUT);
    readimagefile("photos/arashan.jpg",0,0,640,200);
        F=fopen("files/7.txt","r");
    outtextxy(0,440,"Address A363");
    outtextxy(0,460,"GPS coordinates N 42 ° 22 '42.4 'E 78 ° 36' 19.0'");
    break;
case 8:
     putimage(0,0,buf,COPY_PUT);
    readimagefile("photos/oak.jpg",0,0,640,200);
        F=fopen("files/8.txt","r");
    outtextxy(0,400,"Address Sokuluk  ");
    outtextxy(0,420,"Opening hours Oak Park, Bishkek  ");
    outtextxy(0,440,"Free price");
    outtextxy(0,460,"GPS coordinates N42 ° 31'26.8 'E74 ° 21'45.0'");
    break;
case 9:
     putimage(0,0,buf,COPY_PUT);
    readimagefile("photos/can.jpg",0,0,640,200);
        F=fopen("files/9.txt","r");
    outtextxy(0,440,"Address 125 km from Bishkek ");
    outtextxy(0,460,"GPS coordinates N 42 ° 34 '60.0 'E75 ° 47 60.0'");
    break;
case 10:
     putimage(0,0,buf,COPY_PUT);
    readimagefile("photos/philormony.jpg",0,0,640,200);
        F=fopen("files/10.txt","r");
    outtextxy(0,380,"Address Bishkek, Chui Avenue 253 ");
    outtextxy(0,400,"Opening hours summer period 17.00-19.00 ");
    outtextxy(0,420,"Price from 70 to 3000 soms, depending on the event ");
    outtextxy(0,440,"Website http://philharmonic.312.kg/ ");
    outtextxy(0,460,"GPS coordinates N42 ° 52 '32.3 'E74 ° 32'37.5 '");
    break;
case 11:
     putimage(0,0,buf,COPY_PUT);
    readimagefile("photos/gapar.jpg",0,0,640,200);
        F=fopen("files/11.txt","r");
    outtextxy(0,400,"Address Abdrakhmanov's , 196  ");
    outtextxy(0,420,"Opening hours Tue, Wed, Thu, Sat, Sun 9.00-17.00, Fri 10.00-16.00 ");
    outtextxy(0,440,"Website http://knmi.lg.kg/ ");
    outtextxy(0,460,"GPS coordinates N42 ° 52 '43.8 'E74 ° 36' 38.9'");
    break;
case 12:
     putimage(0,0,buf,COPY_PUT);
    readimagefile("photos/ala-archa.jpg",0,0,640,200);
        F=fopen("files/12.txt","r");
    outtextxy(0,420,"Address 365 bus from the Osh Bazaar in Bishkek ");
    outtextxy(0,440,"Price about 30 soms ");
    outtextxy(0,460,"GPS coordinates N42 ° 52 '0.0 'E 74 ° 34' 0.0'");
    break;
case 13:
     putimage(0,0,buf,COPY_PUT);
    readimagefile("photos/petrogliph.jpg",0,0,640,200);
        F=fopen("files/13.txt","r");
    outtextxy(0,440,"Address of Cholpon-Ata  ");
    outtextxy(0,460,"GPS coordinates N 42 ° 38 '60.0 'E77 ° 4' 60.0'");
    break;
case 14:
     putimage(0,0,buf,COPY_PUT);
    readimagefile("photos/ala-too.jpg",0,0,640,200);
        F=fopen("files/14.txt","r");
    outtextxy(0,440,"Address Ala-To Square, Bishkek  ");
    outtextxy(0,460,"GPS coordinates N 42 ° 31'23.9 'E74 ° 21'40.7'");
    break;
case 15:
     putimage(0,0,buf,COPY_PUT);
    readimagefile("photos/sanatory.jpg",0,0,640,200);
        F=fopen("files/15.txt","r");
    outtextxy(0,440,"Address Naryn region, pos.  Kochkor ");
    outtextxy(0,460,"GPS Coordinates N 42 ° 12 '58.5 'E75 ° 45'2.2'");
    break;
case 16:
     putimage(0,0,buf,COPY_PUT);
    readimagefile("photos/suleiman-too.jpg",0,0,640,200);
        F=fopen("files/16.txt","r");
    outtextxy(0,440,"Address Gapar Aytiev ");
    outtextxy(0,460,"GPS coordinates N 40 ° 31'51.0 'E 72 ° 47 '2.2'");
    break;
case 17:
     putimage(0,0,buf,COPY_PUT);
    readimagefile("photos/tamga.jpg",0,0,640,200);
        F=fopen("files/17.txt","r");
    outtextxy(0,440,"Address Tamga village  ");
    outtextxy(0,460,"GPS coordinates N 42 ° 9'17.3 'E77 ° 32 '43.3'");
    break;
case 18:
     putimage(0,0,buf,COPY_PUT);
    readimagefile("photos/karakol.jpg",0,0,640,200);
        F=fopen("files/18.txt","r");
    outtextxy(0,440,"Address Prjevalskogo  ");
    outtextxy(0,460,"GPS coordinates N 42 ° 30 '0.0 'E 78 ° 22' 60.0'");
    break;

}

for(int i=0,k=0;i<15;i++)
    {
                fread(&placetxt[i],sizeof(struct text),15,F);
                outtextxy(0,(205+k),placetxt[i].a1);
    k+=17;
    }


 button(560,440,630,475,4,"Back");
char key=NULL;
  do
        {
            int xz,yz;
            getmouseclick(WM_LBUTTONDOWN, xz,yz);
if((xz>560)&&(yz>440)&&(xz<630)&&(yz<475))
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

            for(int j=0;j<15;j++)
            placetxt[j].a1[0]=NULL;
    putimage(0,0,bu,COPY_PUT);
}

void but(int x, int y,int x1,int y1,int colour)
{
    setcolor(colour);
    setfillstyle(1,colour);
    bar(x,y,x1,(y+5));
    bar(x,(y+5),(x+5),y1);
    bar(x,(y1-5),x1,y1);
    bar((x1-5),(y+5),x1,(y1-5));
}

