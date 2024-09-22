#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime>
#include "tower.h" 
#include <windows.h>
#include "namespace_p.h"
using namespace std;
using namespace p;
/*
�@��:�d�A�� 
��J: n,t1,t2,ch,model
��X: �e����C�� 
�\��: ��J��L�Ƥξާ@�Ҧ��A�p�G�O��ʼҦ��A��Ja-b�Aa b������ơA�Y�i���� 
�ϥμҲ�:tower.h and namespace_p.h and ��L�禡�w 
*/
int main(){
	srand(time(NULL));
	int n,t1,t2;
	char ch,model;

	do{
		cout << "��J��ն�L�Ӽ�(1~10): "; 
		cin>>n;
	}while(n > 10 || n < 1);
	pole[0].push_num(n);
	cout<<"manual or auto (input m or a):";
	cin>>model;
	while((model!='a')&&(model!='m')){
		cin>>model;
	}
	system("mode con cols=50 lines=35");
	if(model=='m'){
	while(1){
		system("cls");
	    for(int i=0;i<3;i++){
		    pole[i].showbady(i);
	    }
		if(pole[2].show_size()==n){
			break;
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		gotoxy(13,22);
		cout<<"input A to B(A-B):";
		cin>>t1>>ch>>t2;
		while((pole[t1].show_size()==0)||(ch!='-')||(t1>2)||(t2>2)||(t1<0)||(t2<0)){
			cout<<"ERROR!!�Э��s��J:";
			cin>>t1>>ch>>t2;
		}
		while(pole[t2].show_size()>0){
			if(pole[t1].get_water(pole[t1].show_size()-1)>pole[t2].get_water(pole[t2].show_size()-1)){
				cout<<"ERROR!!�Э��s��J:";
				cin>>t1>>ch>>t2;
			}
			else
			break;
		}
		pole[t2].push(pole[t1].top());
		pole[t1].pop();	    
	}
}
	if(model=='a'){
		HideCursor();
		
		for(int i=0;i<3;i++){
		    pole[i].showbady(i);
	    }
		hanoi(n,pole[0],pole[1],pole[2]);
		
	}
system("pause");
system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
cout<<"���߹L��!!!"<<run<<endl;
system("pause");

}




