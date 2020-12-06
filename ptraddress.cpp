#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
		//	srand((unsigned)time(NULL));
int var[3]={1,2,3};
int*ptr;
ptr=var;
	for(int i=0;i<3;i++){
//	int	j=rand();
//	cout<<"j:"<<j<<endl;
cout<<"Address of var["<<i<<"]:"<<ptr<<endl;
cout<<"value of var["<<i<<"]:"<<*ptr<<endl;
ptr++;
	}
}
