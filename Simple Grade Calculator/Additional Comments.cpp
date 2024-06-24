#include<stdio.h>
int main(){
	int mark;
	printf("Enter Your Marks :- ");
	scanf("%d",&mark);
	if(mark<100 && mark>=85){
		printf("Your grade is A. Excellent work!\n");
	}else if(mark<85 && mark>=70){
		printf("Your grade is B. Well done!.\n");
	}else if(mark<70 && mark>=50){
		printf("Your grade is C. Good job!.\n");
	}else if(mark<50 && mark>=33){
		printf("Your grade is D. You passed!.\n");
	}else{
		printf("Your grade is F. Sorry, you failed!.\n");
		printf("Kal Aaana!");
	}
}