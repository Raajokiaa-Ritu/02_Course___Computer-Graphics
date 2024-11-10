#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    /// ellipse(xCenter, yCenter, startAngle, endAngle, xRadius, yRadius):
    // Draws an ellipse for a given center, starting and ending angle
    // and horizontal and vertical radius.

    int x1,y1,x2,y2,x3,y3;
    printf("Enter xCenter and yCenter : ");
    scanf("%d %d", &x1, &y1);

    printf("Enter startAngle and endAngle : ");
    scanf("%d %d", &x2, &y2);

    printf("Enter xRadius and yRadius : ");
    scanf("%d %d", &x3, &y3);

    setbkcolor(BLUE);
    cleardevice();
    outtextxy(470, 55, "ELLIPSE");
    ellipse(x1,y1, x2,y2, x3,y3);


    getch();
    closegraph();
}

///500 120 0 360 70 35
