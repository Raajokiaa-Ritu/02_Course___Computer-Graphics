#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
void circlemid(int,int,int);
void circlepoint(int,int,int,int);
int r,x1,x2,y1,y2,x3,y3,x4,y4;
int ch;
int x,y;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    {
        cleardevice();
        do
        {
            ch=1;
            switch(ch)
            {
            case 1:
                printf("ENTER STARING POINT\n");
                scanf("%d%d",&x1,&y1);
                printf("ENTER THE ENDPOINT");
                scanf("%d%d",&x2,&y2);
                setcolor(RED);
                line(x1,y1,x2,y2);
                printf("ENTER TRANSLATION FACTOR");
                scanf("%d%d",&x,&y);
                setcolor(RED);
                x3 = x1+x;
                x4 = x2+x;
                y3 = y1+y;
                y4 = y2+y;
                line(x3,y3,x4,y4);
                getch();
                break;
            default:
                exit(0);
            }
        }
        while(ch!=0);
        getch();
        closegraph();
    }
}
void circlemid(int xc,int yc,int rd)
{
    int x =0;
    int y =rd;
    int p = 1-rd;
    while(x<y)
    {
        x++;
        if(p<0)
            p = p+2*x+1;
        else
        {
            y--;
            p = p+2*(x-y)+1;
        }
        circlepoint(xc,yc,x,y);
        delay(200);
    }
}
void circlepoint(int xc,int yc,int x,int y)
{
    putpixel(xc+x,yc+y,1);
    putpixel(xc+y,yc+x,1);
    putpixel(xc-y,yc+x,1);
    putpixel(xc-x,yc+y,1);
    putpixel(xc+x,yc-y,1);
    putpixel(xc-y,yc-x,1);
    putpixel(xc+y,yc-x,1);
    putpixel(xc-x,yc-y,1);
}
/*Sample Output,Input
ENTER STARING POINT
100 100
ENTER THE ENDPOINT 200 300
ENTER TRANSLATION FACTOR 10 10*/
