#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int max(int,int);
int num1,num2,result;
int main(){
//	cout<<"enter first number:";
 srand((unsigned)time(NULL));
 num1=rand();
 cout<<"num1:"<<num1<<endl;
/*	cin>>num1;
	cout<<"enter second number:";
	cin>>num2;*/
	num2=rand();
	cout<<"num2:"<<num2<<endl;
	max(num1,num2);
}
int max(int a,int b){
	if(a>b){
		//return a;
		cout<<"max:"<<a;
	}
	else{
		//return b;
		cout<<"max:"<<b;
	}
   return 0;
}
