#include <iostream>
#include <vector>
#include <windows.h>
#include "tower.h"
using namespace std;
/*
�@��:�i�Ůp 
��J:�L 
��X:�L 
�\��:�غc�l
*/
tower::tower(){}
/*
�@��:�i�Ůp 
��J:�L 
��X:��X��l������L 
�\��:��ܱ�l������L�A�Ϥ����n�ݤ@�I 
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
�@��:�d�A�� 
��J:x,y
��X:�L 
�\��:�]�w��Юy�� 
*/
void gotoxy(int x,int y){
  COORD c;
  c.X=x;
  c.Y=y; 
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
/* 
�@��:�\��
��J: �L 
��X: �L 
�\��:���ô�� 
*/ 
void HideCursor(){//���ô�� 
	CONSOLE_CURSOR_INFO cursor_info={1,0};//�ĤG�ӭȬ��s=���ô��
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info); 
}
