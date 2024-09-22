#include <iostream>
#include <vector>
#include <windows.h>
#include "tower.h"
using namespace std;
/*
作者:張嘉峰 
輸入:無 
輸出:無 
功能:建構子
*/
tower::tower(){}
/*
作者:張嘉峰 
輸入:無 
輸出:輸出桿子內的圓盤 
功能:顯示桿子內的圓盤，使介面好看一點 
*/
void tower::showbady(int a){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	gotoxy((a+1)*10+3,18);
	cout<<a;
	for(int i=0;i<show_size();i++){
		gotoxy((a+1)*10+2,16-i);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),int(get_water(i)-'A')*16);
		if(int(get_water(i)-'A')>=10)
		cout<<" "<<int(get_water(i)-'A');
		
		else
		cout<<" "<<int(get_water(i)-'A')<<" ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
	}
	
} 
/*
作者:吳澤延 
輸入:x,y
輸出:無 
功能:設定游標座標 
*/
void gotoxy(int x,int y){
  COORD c;
  c.X=x;
  c.Y=y; 
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
/* 
作者:許仲岳
輸入: 無 
輸出: 無 
功能:隱藏游標 
*/ 
void HideCursor(){//隱藏游標 
	CONSOLE_CURSOR_INFO cursor_info={1,0};//第二個值為零=隱藏游標
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info); 
}
