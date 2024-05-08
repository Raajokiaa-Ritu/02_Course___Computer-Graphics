#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main()
{
      int gd = DETECT, gm;
      initgraph(&gd, &gm, "c:\tc\bgi");
      int x1,y1, x2,y2,x,y,p, steps;

      printf("Enter x1 and y1: "); scanf("%d %d", &x1, &y1);
      printf("Enter x2 and y2: "); scanf("%d %d", &x2, &y2);

     ///konta small? x1 or x2?
      if((x2-x1) < 0){
        x = x2; y = y2;
      }
      else{ ///if dx>0
        x = x1; y = y1;
      }

      float dx = abs(x2- x1);
      float dy = abs(y2- y1);

      float m = dy / dx;


      cout<<"start: "<<x <<" "<<y<<endl;
      if(m>=1){
          p = (2*dx) - dy;
          steps = abs(y2-y1);
          int i = 1;
          while(i <= steps)
          {
              putpixel(x, y, WHITE);
              y = y+1;
              if(p < 0){
                p = p + (2*dx);
              }
              else{
                x = x+1;
                p = p + 2*dx - 2*dy;
              }
              i++;
          }
      }

      else{
          p = (2*dy) - dx;
          steps = abs(x2- x1);
          //cout<<"last: "<<steps<<endl;
          int i = 1;
          while(i <= steps)
          {
            putpixel(x, y, WHITE);
            x = x + 1;//cout<<"x = "<<x<<endl;
            if(p<0){
                p = p + 2*dy;
            }
            else{
                y = y+1;
                p = p + (2*dy - 2*dx);
            }
            i++;
          }
      }


      getch();
      closegraph();
}
/*Sample Input Output:
Enter Value of X1: 100
Enter Value of Y1: 100
Enter Value of X2: 150
Enter Value of Y2: 200*/
