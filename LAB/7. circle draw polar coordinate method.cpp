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
    int x, y;
    float theta;
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    int h,k,radius;
    printf("Center coordinate: ");
    scanf("%d %d", &h, &k);
    printf("Radius : ");//radius
    scanf("%d", &radius);



    for(int i=0;i<=90;i++)
    {
        theta=(i*3.14)/180;

        x=(int)(radius*cos(theta));
        y=(int)(radius*sin(theta));

        setPixel(x,y, h,k);
    }


    getch();
    closegraph();

}
