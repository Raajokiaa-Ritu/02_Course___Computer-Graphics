#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>

int main(){
   int gd = DETECT,gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   int h,k,radius;
   printf("Center coordinate: ");
   scanf("%d %d", &h, &k);

   printf("Radius : ");//radius
   scanf("%d", &radius);


    setbkcolor(BLUE);
    cleardevice();
    outtextxy(35, 55, "circle");
    circle(h, k, radius);



   getch();
   closegraph();
   return 0;
}
/*

*/
