#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>

using namespace std;
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");

    setbkcolor(LIGHTBLUE); // Set background color to white
    cleardevice(); // Clear the screen with the background color

    // Draw each letter with specific colors and positions
    setcolor(RED); // Color for 'G'
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);

    outtextxy(150, 100, "G");
    setcolor(BLUE); // Color for 'O'
    outtextxy(200, 100, "O");

    setcolor(YELLOW); // Color for 'O'
    outtextxy(250, 100, "O");

    setcolor(GREEN); // Color for 'G'
    outtextxy(300, 100, "G");

    setcolor(MAGENTA); // Color for 'L'
    outtextxy(350, 100, "L");

    setcolor(CYAN); // Color for 'E'
    outtextxy(400, 100, "E");

    // Draw additional text
    setcolor(BLACK); // Color for 'surf'
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
    outtextxy(180, 200, "surf");
    setcolor(BLACK); // Color for 'Go AHEAD'
    outtextxy(250, 300, "Go AHEAD");

    // Draw rectangles
    setcolor(BLACK);
    rectangle(120, 180, 300, 220); // Rectangle around 'surf'
    rectangle(240, 280, 400, 320); // Rectangle around 'Go AHEAD'

    getch();
    closegraph();
}

