#include <iostream>
#include <vector>
#include <windows.h>
#include "class.h"
using namespace std;
/************************
作者:11003099A 黃翊豪 
輸入:無 
輸出:無 
功能: 預設建構子 ,初始化x=10,建立空瓶子 
************************/
bottle::bottle()
{
	x=10;
	water.clear();
}
/************************
作者:11003099A 黃翊豪
輸入:a 
輸出:無 
功能: 預設建構子 ,初始化x=a,建立空瓶子 
************************/
bottle::bottle(int a)
{
	x=a;
	water.clear();
}
/************************
作者:11003099A 黃翊豪
輸入:d,a 
輸出:無 
功能: 預設建構子 ,初始化x=a,建立裝滿d的瓶子 
************************/
bottle::bottle(char d,int a)
{
	x=a;
	for (int i=0;i<a;i++)
		water.push_back(d);
}
/************************
作者:11003099A 黃翊豪
輸入:無 
輸出:瓶子內容 
功能: 在螢幕上顯示杯子內容 
************************/
void bottle::show_w()
{
	for (int i=0;i<water.size();i++)
	    cout << water[i];
	cout<< endl; 
}
/************************
作者:11003102A王宥絜
輸入: bottle,a 
輸出:無 
功能: 將一瓶瓶子的水中的a份倒到另一瓶bottle 
************************/
void bottle::give_w(bottle &b,int a) 
{
	if(a<=water.size() && b.x-b.water.size()>=a)
	{
		for(int i=0;i<a;i++)
		{
			b.water.push_back(water[water.size()-1]);
			water.pop_back();
		}
	}
} 
/************************
作者:11003101A楊立驊
輸入:無 
輸出:無 
功能:回傳瓶子剩餘容量 
************************/
int bottle::bot_l_w() 
{
	return x-water.size();
} 
/************************
作者:11003102A王宥絜
輸入:無 
輸出:無 
功能:回傳瓶子最上方相同顏色水的數量 
************************/
int bottle::bot_d_w() 
{   int s=1;
	char d=water[water.size()-1];
	char d2=water[water.size()-2];
	while(d==d2)
	{
		s=s+1;
		d2=water[water.size()-s-1];
	}
	return s;
} 
/************************
作者:11003102A王宥絜
輸入:無 
輸出:瓶子的內容(有顏色) 
功能:在螢幕上顯示杯子內容 (有顏色)
************************/
void bottle::show_c_w() 
{
	HANDLE hOuput;

	hOuput = GetStdHandle(STD_OUTPUT_HANDLE);

	for(int i=0;i<water.size();i++)
	{
		SetConsoleTextAttribute(hOuput,water[i]);
		cout << char(water[i]+'A');
	}
	SetConsoleTextAttribute(hOuput,15);
	cout << endl; 
}
/************************
作者:11003101A楊立驊
輸入:無 
輸出:無 
功能:回傳瓶子容量 
************************/
int bottle::show_size()
{
	return water.size();
}





//////





/*
作者:徐晨瀚 
輸入:無 
輸出:無 
功能:存入資料，a代表資料數 
*/
void bottle::push_num(int a){
	for(int i=a;i>=1;i--){
		water.push_back(char(i+'A'));
	}
}

/*
作者:許仲岳 
輸入:無 
輸出:無 
功能:回傳water[a]的資料 
*/
char bottle::get_water(int a){
	return water[a];
}
/*
作者:許仲岳 
輸入:無 
輸出:無 
功能:丟掉water的一筆資料
*/
void bottle::pop(){
	water.pop_back();
}
/*
作者:吳澤延 
輸入:無 
輸出:無 
功能:放入一筆為a的資料進去water
*/
void bottle::push(char a){
	water.push_back(a);
}
/*
作者:吳澤延 
輸入:無 
輸出:無 
功能:回傳water的最尾端資料
*/
char bottle::top(){
	return water[water.size()-1];
}
