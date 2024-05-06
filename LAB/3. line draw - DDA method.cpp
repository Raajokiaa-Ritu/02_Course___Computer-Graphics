///DDA line draw
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
    int gd = DETECT ,gm, i=1;
    float x, y,dx,dy,steps;
    int x1, x2, y1, y2;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setbkcolor(WHITE);
    printf("Enter x1, y1: \n");
    scanf("%d %d", &x1, &y1);
    printf("Enter x2, y2: \n");
    scanf("%d %d", &x2, &y2);

    dx = (float)(x2 - x1);
    dy = (float)(y2 - y1);

    float m = dy /dx;

    if(m > 1)
    {
        x = x1 + (1/m);
        y = y1 + 1;
        steps = y2;

        while(i <= steps)
        {
            putpixel(x, y, GREEN);
            x = x + (1/m);
            y = y + 1;
            i++;
        }
    }
    else
    {
        x = x1 + 1;
        y = y1 + m;
        steps = x2;
        while(i <= steps)
        {
            putpixel(x, y, GREEN);
            x = x + 1;
            y = y + m;
            i++;
        }
    }

    getch();
    closegraph();
}
/*Sample Input Output:
Enter x1, y1:
100 200
Enter x2, y2:
200 250*/

/*
Function	Description
initgraph--It initializes the graphics system by loading the passed graphics driver then changing the system into graphics mode.
getmaxx--It returns the maximum X coordinate in current graphics mode and driver.
getmaxy--It returns the maximum Y coordinate in current graphics mode and driver.
outtextxy--It displays a string at a particular point (x,y) on screen.
circle--It draws a circle with radius r and centre at (x, y).
closegraph--It unloads the graphics drivers and sets the screen back to text mode.*/
