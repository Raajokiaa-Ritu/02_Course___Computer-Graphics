#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>

int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    ///Syntax: bar(int left, int top, int right, int bottom);
    int x1,y1,x2,y2,r;
    printf("Enter left and top : ");
    scanf("%d %d", &x1, &y1);

    printf("Enter right and bottom : ");
    scanf("%d %d", &x2, &y2);


    setbkcolor(GREEN);
    cleardevice();
    outtextxy(35, 55, "Bar Graph");
    bar(x1,y1, x2,y2);

    getch();
    closegraph();
}
///100 100 200 200
