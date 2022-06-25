#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main(){
	int gd= DETECT, gm;
	initgraph(&gd,&gm," C:\Program Files (x86)\Dev-Cpp");
	putpixel(200,150,GREEN);
	return 0;
}