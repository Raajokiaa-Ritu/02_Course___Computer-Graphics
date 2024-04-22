#include<iostream>
#include<conio.h>

#include<graphics.h>
#include<stdio.h>
using namespace std;
void main()
{
int gd=DETECT,gm;
int x_initial,y_initial,x_final,y_final;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\n Please enter an initial coordinate of the line = ");
scanf("%d %d", &x_initial,&y_initial);
printf("\n Now, \n enter final coordinate of the line = ");
scanf("%d %d",&x_final,&y_final);
printf("\n***** LINE ******");
line(x_initial,y_initial,x_final,y_final);

getch();
closegraph();
}
