#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
int main(){
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    ///bar3d(int left, int top, int right, int bottom, int depth, int topflag);
    ///left, top, right, bottom are the positions
    ///depth specifies the depth of bar in pixels
    ///topflag determines whether a 3 dimensional top is put on the bar or not (1 for yes, 0 for not )

    int x1,y1,x2,y2,depth, topFlag;
    printf("Enter left and top : ");
    scanf("%d %d", &x1, &y1);

    printf("Enter right and bottom : ");
    scanf("%d %d", &x2, &y2);

    printf("Enter depth and topFlag : ");
    scanf("%d %d", &depth, &topFlag);

    setbkcolor(GREEN);
    cleardevice();
    outtextxy(35, 55, "3D - Bar Graph");
    bar3d(x1, y1, x2, y2, depth, topFlag);

    getch();
    closegraph();
}
///100 100 200 200 20 1
