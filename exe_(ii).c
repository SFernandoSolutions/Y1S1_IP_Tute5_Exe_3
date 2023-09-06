// i) Write a C program to enter 4 module marks of a student from the keyboard and
// display the total of all four module marks.
// ii) Modify the program written in i) above to enter 4 module marks of 3 students and
// display their total marks.

#include <stdio.h>
int main(void){
	int sub, marks, total, count, students, counts;
	
	count=0;
	total=0;
	counts=0;
	
	printf("Enter Count of Student : ");
	scanf("%d",&students);
	
	printf("Enter Count of Module : ");
	scanf("%d",&sub);
	
	while(counts<students){
		counts=counts+1;
		
		while (count<sub){
		count=count+1;
		
		printf("\tStudent %d\n",counts);
		printf("Enter Marks %d : ",count);
		scanf("%d",&marks);
		
		total=total+marks;
		}
		 
		
		printf("Student %d\n",counts);
		printf("Total : %d\n\n",total);
		
		count=0;
		total=0;	
		
		
	} 
	
	
	return 0;
}
