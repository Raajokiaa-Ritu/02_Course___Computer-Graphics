#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    int x1, y1, x2, y2, x, y, steps;
    cout<<"enter x1 and y1 : ";
    cin>>x1>>y1;
    cout<<"enter x2 and y2 : ";
    cin>>x2>>y2;

    float dx = x2 - x1;
    float dy = y2 - y1;
    float m = dy / dx ;
    float b = x1 - m*y1;

    if(dx < 0){
        x = x2;
        y = y2;
        steps = x1;
    }
    else{
        ///if dx>0
        x = x1;
        y = y1;
        steps = x2;
    }

    while(x <= steps){
        putpixel(x, y, GREEN);
        x = x + 1;
        y = m*x + b;
    }

    getch();
    closegraph();
}
/*Sample Input Output
 Please enter an initial coordinate of the line = 100 100

 Now,
 enter final coordinate of the line = 200 300*/
