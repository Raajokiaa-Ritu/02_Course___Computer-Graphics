#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    int x1,y1,x2,y2,x3,y3;
    printf("Enter x1 and y1 : ");
    scanf("%d %d", &x1, &y1);

    printf("Enter x2 and y2 : ");
    scanf("%d %d", &x2, &y2);

    setbkcolor(BLUE);
    cleardevice();

    outtextxy(35, 55, "Rectangle");
    rectangle(x1,y1, x2,y2);

    getch();
    closegraph();
}

///100 200 300 400
