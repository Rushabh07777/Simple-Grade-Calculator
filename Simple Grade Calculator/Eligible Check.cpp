#include<stdio.h>
int main(){
	int Score;
	printf("Enter Your Score :- ");
	scanf("%d",&Score);
	if(Score<100 && Score>=85){
		printf("Your grade is A. Excellent work!\n");
		printf("Congratulations! You are eligable for the next level.");
	}else if(Score<85 && Score>=70){
		printf("Your grade is B. Well done!.\n");
		printf("Congratulations! You are eligable for the next level.");
	}else if(Score<70 && Score>=50){
		printf("Your grade is C. Good job!.\n");
		printf("Congratulations! You are eligable for the next level.");
	}else if(Score<50 && Score>=33){
		printf("Your grade is D. You passed!.\n");
		printf("Congratulations! You are eligable for the next level.");
	}else{
		printf("Your grade is F. Sorry, you failed!.\n");
		printf("Please tey again next time.\n");
		printf("Kal Aaana!");
	}
}