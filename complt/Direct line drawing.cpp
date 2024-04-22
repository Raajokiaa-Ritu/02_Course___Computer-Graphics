#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    int x_initial,y_initial,x_final,y_final;
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
/*Sample Input Output
 Please enter an initial coordinate of the line = 100 100

 Now,
 enter final coordinate of the line = 200 300*/
