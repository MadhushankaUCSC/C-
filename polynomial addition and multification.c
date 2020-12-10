#include<Stdio.h>
#include<Stdlib.h>

//struct node
struct node{
	int data;
	int power;
	struct node *next;
};

char ch,ch1;
void create_polynomial1();
void create_polynomial2();
void display(struct node*head);



//create nodes
struct node *new1,*head1,*py1,*new2,*head2,*py2,*p;


//function of adding two polynomials
void adding_two_polynormial(struct node*head1, struct node*head2){
	py1=head1;
	py2=head2;
	
	while(py1!=NULL && py2!=NULL){
		if(py1->power==py2->power){
			printf("%dx^%d", py1->data+py2->data,py1->power);
			py1=py1->next;
			py2=py2->next;	
		}
		else if(py1->power>py2->power){
			printf("%dx^%d", py1->data,py1->power);
			py1=py1->next;
		}
		else{
			printf("%dx^%d", py2->data,py2->power);
			py2=py2->next;
		}
		if(py1!=NULL || py2!=NULL){
			printf("+");
		}
	}
	while(py1!= NULL){
	    	printf("%dx^%d", py1->data,py1->power);
			py1=py1->next;
			if(py1!=NULL){
				printf("+");
			}			
	}
	
		while(py2!= NULL){
	    	printf("%dx^%d", py2->data,py2->power);
			py2=py2->next;
			if(py2!=NULL){
				printf("+");
			}			
	}
}


//multification of polynomials
void multiplie_two_polynormial(struct node*head1, struct node*head2){
	py1=head1;
	py2=head2;
	while(py1!=NULL){
		while(py2!=NULL){
			printf("%d",py1->data*py2->data);
			printf("x^%d  +",py1->power+py2->power);
			py2=py2->next;
		}
		py2=head2;
		py1=py1->next;
	}
}


//main function
int main(){
	printf("----------------------Addition and multification of two polynomials-------------------\n\n");
	create_polynomial1();       //call polynomial1 function
	create_polynomial2();        //call polynomial2 function
	printf("-------------------------\n");
	printf("\n\n polynomial 1: ");
	display(head1);
	printf("\n\n polynomial 2: ");
	display(head2);
	
	
	printf(" \n\n..................................Addition of two polynormials .............................................................");
	printf(" \n\nAdding two polynormials :");       //print addition of polynomials
	adding_two_polynormial(head1,head2);
	
	
	printf(" \n\n..................................Multiplication of two polynormials .............................................................");
	printf(" \n\nMultipling two polynormials :");         //print multification of polynomials
	multiplie_two_polynormial(head1,head2);
	
}

//create polynormial 1
void create_polynomial1(){


  printf("..............Create_polynomial 1(Ex: 5X^2+2X+5 )...............");
	do{
		
	new1=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data :");
	scanf("%d",&new1->data);
	printf("Enter power :");
	scanf("%d",&new1->power);
	new1->next=NULL;
	if(head1==NULL){
		head1=new1;
		py1=new1;
	}
	else{
		py1->next=new1;
		py1=new1;
	}
	printf("\nDo you want to add more (y/n)");
	scanf("%s",&ch);
   }while(ch=='y');
}

//create polynormial 2
void create_polynomial2(){
  printf("\n\n..................Create_polynomial 2(Ex: 4X^2+3X+6 ).....................\n");
	do{
		
	new2=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data :");
	scanf("%d",&new2->data);
	printf("Enter power :");
	scanf("%d",&new2->power);
	new2->next=NULL;
	if(head2==NULL){
		head2=new2;
		py2=new2;
	}
	else{
		py2->next=new2;
		py2=new2;
	}
	printf("\nDo you want to add more (y/n)");
	scanf("%s",&ch1);
   }while(ch1=='y');


}

// Display polynormials
void display(struct node*head){
	p=head;
	while(p!=NULL){
		printf("%dx^%d  ",p->data,p->power);
		p=p->next;
		if(p!=NULL){
			printf("+");
		}
	}
}



