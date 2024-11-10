#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>

int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    ///Syntax: arc(int x, int y, int startAngle, int endAngle, int radius);
    int x1,y1,x2,y2,r;

    printf("Enter xCenter and yCenter : ");
    scanf("%d %d", &x1, &y1);

    printf("Enter startAngle and endAngle : ");
    scanf("%d %d", &x2, &y2);

    printf("Enter Radius: ");
    scanf("%d", &r);

    setbkcolor(GREEN);
    cleardevice();
    outtextxy(35, 55, "Arc");
    arc(x1,y1, x2,y2,r);



    getch();
    closegraph();
}
///100 100 0 135 50
