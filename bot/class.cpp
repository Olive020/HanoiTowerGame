#include <iostream>
#include <vector>
#include <windows.h>
#include "class.h"
using namespace std;
/************************
�@��:11003099A ������ 
��J:�L 
��X:�L 
�\��: �w�]�غc�l ,��l��x=10,�إߪŲ~�l 
************************/
bottle::bottle()
{
	x=10;
	water.clear();
}
/************************
�@��:11003099A ������
��J:a 
��X:�L 
�\��: �w�]�غc�l ,��l��x=a,�إߪŲ~�l 
************************/
bottle::bottle(int a)
{
	x=a;
	water.clear();
}
/************************
�@��:11003099A ������
��J:d,a 
��X:�L 
�\��: �w�]�غc�l ,��l��x=a,�إ߸˺�d���~�l 
************************/
bottle::bottle(char d,int a)
{
	x=a;
	for (int i=0;i<a;i++)
		water.push_back(d);
}
/************************
�@��:11003099A ������
��J:�L 
��X:�~�l���e 
�\��: �b�ù��W��ܪM�l���e 
************************/
void bottle::show_w()
{
	for (int i=0;i<water.size();i++)
	    cout << water[i];
	cout<< endl; 
}
/************************
�@��:11003102A������
��J: bottle,a 
��X:�L 
�\��: �N�@�~�~�l��������a���˨�t�@�~bottle 
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
�@��:11003101A�����~
��J:�L 
��X:�L 
�\��:�^�ǲ~�l�Ѿl�e�q 
************************/
int bottle::bot_l_w() 
{
	return x-water.size();
} 
/************************
�@��:11003102A������
��J:�L 
��X:�L 
�\��:�^�ǲ~�l�̤W��ۦP�C������ƶq 
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
�@��:11003102A������
��J:�L 
��X:�~�l�����e(���C��) 
�\��:�b�ù��W��ܪM�l���e (���C��)
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
�@��:11003101A�����~
��J:�L 
��X:�L 
�\��:�^�ǲ~�l�e�q 
************************/
int bottle::show_size()
{
	return water.size();
}





//////





/*
�@��:�}���v 
��J:�L 
��X:�L 
�\��:�s�J��ơAa�N���Ƽ� 
*/
void bottle::push_num(int a){
	for(int i=a;i>=1;i--){
		water.push_back(char(i+'A'));
	}
}

/*
�@��:�\�� 
��J:�L 
��X:�L 
�\��:�^��water[a]����� 
*/
char bottle::get_water(int a){
	return water[a];
}
/*
�@��:�\�� 
��J:�L 
��X:�L 
�\��:�ᱼwater���@�����
*/
void bottle::pop(){
	water.pop_back();
}
/*
�@��:�d�A�� 
��J:�L 
��X:�L 
�\��:��J�@����a����ƶi�hwater
*/
void bottle::push(char a){
	water.push_back(a);
}
/*
�@��:�d�A�� 
��J:�L 
��X:�L 
�\��:�^��water���̧��ݸ��
*/
char bottle::top(){
	return water[water.size()-1];
}
