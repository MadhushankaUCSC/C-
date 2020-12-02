#include <iostream>
#include<string.h>
using namespace std;
int product();

int main() {
 	string Name;
 		cout<<"Enter product Name:";
	getline(cin,Name);

	product();
	
	
	
	
	return 0;
}

int product(){
	
	
		double discount=0.25;
		double total;
double price;
	cout<<"price:";
	cin>>price;
	total=price-(price*discount);
	cout<<"Total:"<<total;
	
}
