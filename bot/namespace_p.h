#include<iostream>
using namespace std;

namespace p{
	tower pole[3];
	int run=0;
	/*
	�@��:�d�A�� 
	��J:�L 
	��X:�L 
	�\��:�i��e����۰ʤ�
	*/
	void hanoi(int n,tower &x,tower &y,tower &z){//��L�� �_�l�W �Ȧs�W �̲צs��W  
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
			hanoi(n-1,x,z,y);//n-1�Ӷ�L���t�W 
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
