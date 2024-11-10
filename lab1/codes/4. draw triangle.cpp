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

    printf("Enter x3 and y4 : ");
    scanf("%d %d", &x3, &y3);

    setbkcolor(BLUE);
    cleardevice();

    outtextxy(35, 55, "triangle");
    line(x1,y1, x2,y2);
    line(x2,y2, x3,y3);
    line(x3,y3, x1,y1);


    getch();
    closegraph();
}
/*
    line(200, 100, 100, 200);
    line(200, 100, 300, 200);
    line(100, 200, 300, 200);

*/
///200 100 100 200 300 200
