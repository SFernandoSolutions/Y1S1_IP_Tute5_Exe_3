// i) Write a C program to enter 4 module marks of a student from the keyboard and
// display the total of all four module marks.
// ii) Modify the program written in i) above to enter 4 module marks of 3 students and
// display their total marks.
// iii) Display the student with the highest total mark.


#include <stdio.h>
int main(void){
	int sub, marks, total, count, students, counts, highest, stno;
	
	count=0;
	total=0;
	counts=0;
	highest=0;
	
	printf("Enter Count of Student : ");
	scanf("%d",&students);
	
	printf("Enter Count of Module : ");
	scanf("%d\n",&sub);
	
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
		
		if(highest<total){
			highest=total;
			stno=count;
		}
		
		count=0;
		total=0;	
		
		
	} 
	
	printf("Highest Mark Student %d\n",stno);
	printf("Marks : %d\n\n",highest);
	return 0;
}
