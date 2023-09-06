// i) Write a C program to enter 4 module marks of a student from the keyboard and
// display the total of all four module marks.

#include <stdio.h>
int main(void){
	int sub, marks, total, count;
	
	count=0;
	total=0;
	
	printf("Enter Count of Module : ");
	scanf("%d",&sub);
	
	while (count<sub){
		count=count+1;
		
		printf("Enter Marks %d : ",count);
		scanf("%d",&marks);
		
		total=total+marks;
	}
	
	printf("Total : %d",total);
	
	return 0;
}
