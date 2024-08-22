#include<stdio.h>
  
//  Function
  
 void cal(int n1, int n2, int choice){
 	
 	switch (choice){
 		
 		case 1:
 			printf("Result:%d",n1+n2);
 		break;
		 
		case 2:
 			printf("Result:%d",n1-n2);
 		break;
		 
		case 3:
 			printf("Result:%d",n1*n2);
 		break;
		 
		case 4:
 			printf("Result:%d",n1/n2);
 		break;
		 
		default:
		    printf("Invalid choice");
		break;	
	 }
 	
 }
 int main(){
 	int n1,n2,choice;
 	
//    Input of 2 Numbers 	

 	printf("Enter the First number:");
 	scanf("%d",&n1);
 	
 	printf("Enter the Second number:");
 	scanf("%d",&n2);
 	
// 	display items

 	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Modulo\n");
	printf("Enter Your Choice:");
	scanf("%d",&choice);
	
	cal(n1,n2,choice);	
 }


