#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
using namespace std;

void setPixel(int x, int y, int h, int k)
{
    putpixel(x+h, y+k, WHITE);
    putpixel(x+h, -y+k, WHITE);
    putpixel(-x+h, -y+k, WHITE);
    putpixel(-x+h, y+k, WHITE);
    putpixel(y+h, x+k, WHITE);
    putpixel(y+h, -x+k, WHITE);
    putpixel(-y+h, -x+k, WHITE);
    putpixel(-y+h, x+k, WHITE);
}
int main()
{
    float theta;
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    int h,k,radius;
    printf("Center coordinate: ");
    scanf("%d %d", &h, &k);
    printf("Radius : ");//radius
    scanf("%d", &radius);
    int x=0,y=radius, d=3-(2*radius);
    while(x<=y)
    {
        if(d<=0)
        {
            d=d+(4*x)+6;
        }
        else
        {
            d=d+(4*x)-(4*y)+10;
            y=y-1;
        }
        x=x+1;
        setPixel(x,y,h,k);
    }


    getch();
    closegraph();

}
