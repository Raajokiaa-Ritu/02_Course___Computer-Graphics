#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
void setPixel(int x, int y, int h, int k)
{
    putpixel(x+h, y+k, RED);
    putpixel(x+h, -y+k, RED);
    putpixel(-x+h, -y+k, RED);
    putpixel(-x+h, y+k, RED);
    putpixel(y+h, x+k, RED);
    putpixel(y+h, -x+k, RED);
    putpixel(-y+h, -x+k, RED);
    putpixel(-y+h, x+k, RED);
}
int main(){
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    int h,k,radius;
    printf("Center coordinate: ");
    scanf("%d %d", &h, &k);
    printf("Radius : ");//radius
    scanf("%d", &radius);

    int x=0,y=radius;
    int x2 = radius/sqrt(2);

    while(x<=x2)
    {
        y = sqrt(radius*radius - x*x);
        setPixel(floor(x), floor(y), h,k);
        x += 1;
    }


   getch();
   closegraph();
}
