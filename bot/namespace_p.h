#include<iostream>
using namespace std;

namespace p{
	tower pole[3];
	int run=0;
	/*
	作者:吳澤延 
	輸入:無 
	輸出:無 
	功能:進行河內塔自動化
	*/
	void hanoi(int n,tower &x,tower &y,tower &z){//圓盤數 起始柱 暫存柱 最終存放柱  
		run+=1;
		cout<<run<<endl;
		if(n==1){
			z.push(x.top());
			x.pop();
			Sleep(70);
			system("cls");
			for(int i=0;i<3;i++){
		    	pole[i].showbady(i);
	    	}
		}
		if(n>1){
			hanoi(n-1,x,z,y);//n-1個圓盤放到t柱 
			z.push(x.top());
			x.pop();
			Sleep(70);
			system("cls");
			for(int i=0;i<3;i++){
		    	pole[i].showbady(i);
	    	}
			hanoi(n-1,y,x,z); 
		} 	
	}
}
