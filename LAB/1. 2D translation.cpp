#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;


void find_circle(){
   int h,k,tx,ty,radius;
   cout<<"Center coordinate: "; cin>>h>>k;
   cout<<"Radius : "; cin>>radius;
   circle(h, k, radius);
   outtextxy(h+20, k+20, "Circle Before Translation");
   cout<<"Enter tx and ty : ";cin>>tx>>ty;
   h = h+tx; k = k+ty;
   circle(h, k, radius);
   outtextxy(h+20, k+20, "Circle After Translation");
}
void find_line(){
    int x1,y1,x2,y2,x3,y3,tx,ty;
    cout<<"Enter 1st point x1 and y1 : ";cin>>x1>>y1;
    cout<<"Enter 1st point x2 and y2 : ";cin>>x2>>y2;
    line(x1,y1, x2,y2);
    outtextxy(x1-20, y1-20, "Line Before Translation");
    cout<<"Enter tx and ty : ";cin>>tx>>ty;
    x1 = x1+tx; y1 = y1+ty;
    x2 = x2+tx; y2 = y2+ty;
    line(x1,y1, x2,y2);
    outtextxy(x1-20, y1-20, "Line After Translation");
}
void find_triangle(){
    int x1,y1,x2,y2,x3,y3,tx,ty;
    cout<<"Enter 1st point x1 and y1 : ";cin>>x1>>y1;
    cout<<"Enter 1st point x2 and y2 : ";cin>>x2>>y2;
    cout<<"Enter 1st point x3 and y3 : ";cin>>x3>>y3;
    outtextxy(x1-40, y1-40, "Before Translation: ");
    line(x1,y1, x2,y2);
    line(x1,y1, x3,y3);
    line(x2,y2, x3,y3);
    cout<<"Enter tx and ty: "; cin>>tx>>ty;
    x1+=tx;y1+=ty;
    x2+=tx;y2+=ty;
    x3+=tx;y3+=ty;

    outtextxy(x1-40, y1-40, "After Translation: ");
    line(x1,y1, x2,y2);
    line(x1,y1, x3,y3);
    line(x2,y2, x3,y3);
}
void find_rectangle(){
    int x1,y1,x2,y2,x3,y3,x4,y4,tx,ty;
    cout<<"Enter 1st point x1 and y1 : ";cin>>x1>>y1;
    cout<<"Enter 1st point x2 and y2 : ";cin>>x2>>y2;
    cout<<"Enter 1st point x3 and y3 : ";cin>>x3>>y3;
    cout<<"Enter 1st point x4 and y4 : ";cin>>x4>>y4;
    outtextxy(x1-40, y1-40, "Before Translation: ");
    line(x1,y1, x2,y2);
    line(x2,y2, x3,y3);
    line(x3,y3, x4,y4);
    line(x4,y4, x1,y1);
    cout<<"Enter tx and ty: "; cin>>tx>>ty;
    x1+=tx;x2+=tx;x3+=tx;x4+=tx;
    y1+=ty;y2+=ty;y3+=ty;y4+=ty;
    outtextxy(x1-40, y1-40, "After Translation: ");
    line(x1,y1, x2,y2);
    line(x2,y2, x3,y3);
    line(x3,y3, x4,y4);
    line(x4,y4, x1,y1);
}
void find_pentagon(){
    int x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,tx,ty;
    cout<<"Enter 1st point x1 and y1 : ";cin>>x1>>y1;
    cout<<"Enter 1st point x2 and y2 : ";cin>>x2>>y2;
    cout<<"Enter 1st point x3 and y3 : ";cin>>x3>>y3;
    cout<<"Enter 1st point x4 and y4 : ";cin>>x4>>y4;
    cout<<"Enter 1st point x5 and y5 : ";cin>>x5>>y5;
    outtextxy(x1-40, y1-40, "Before Translation: ");
    line(x1,y1, x2,y2);
    line(x2,y2, x3,y3);
    line(x3,y3, x4,y4);
    line(x4,y4, x5,y5);
    line(x5,y5, x1,y1);
    cout<<"Enter tx and ty: "; cin>>tx>>ty;
    x1+=tx;x2+=tx;x3+=tx;x4+=tx;x5+=tx;
    y1+=ty;y2+=ty;y3+=ty;y4+=ty;y5+=ty;
    outtextxy(x1-40, y1-40, "After Translation: ");
    line(x1,y1, x2,y2);
    line(x2,y2, x3,y3);
    line(x3,y3, x4,y4);
    line(x4,y4, x5,y5);
    line(x5,y5, x1,y1);
}

int main(){
   ///graphics init
   int gd = DETECT,gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   while(1){
       cout<<"Press \n1.Circle \n2.Line \n3.Triangle \n4.Rectangle \n5.Pentagon \n6.Clear The Screen \n7.Exit \nChoice = ";
       int value; cin>>value;
       if(value == 1) {find_circle(); }
       else if(value == 2) find_line();
       else if(value == 3) find_triangle();
       else if(value == 4) find_rectangle();
       else if(value == 5) find_pentagon();
       else if(value == 6) cleardevice();
       else return 0;
       cout<<endl;
   }

   ///graphics close
   getch();
   closegraph();
   return 0;
}

