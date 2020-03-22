#include <stdio.h>
#include <stdlib.h>

//Excersise 12: If, Else-if, Else

int main(int argc, char *argv[]){
int i = 0;

if(argc ==1){
	printf("You only have one argument. You suck.\n");
}else if(argc > 1 && argc < 4){
	printf("Here's your arguments: \n");
for(i = 0; i < argc; i++){
	printf( " %s ", argv[i]);
}
	printf("\n");
}else if(argc == 5){
	printf("You have 5 arguments\n");


}else if(argc >= 6 && argc <=8) {
	printf("Here's your arguments:\n");
for(i=6; i< argc; i++){
	printf(" %s ", argv[i]);
}
}else{
	printf("You have many arguments. You suck.\n");
}
return 0;
}

//Extra credit

//You were briefly introduced to && , which does an "and" comparison, so go research online the different "boolean operators".

//(A == B) means that if A equals B; 0 otherwise

//(A != B)means that if A is different from B

//(A > B) means that if A is greater than B

//(A < B) means tha if A is less than B

//(A >= B) means that if A is greater than or equal to B

//(A <= B) means that if A is less than or equal to B

//(A<B && A>C) that means if is true that A is less to B (AND) A is greater to C

//(A<B || A<C) that means if is true that A is less to B (OR) A is less to C


//Write a few more test cases for this program to see what you can come up with.

//Go back to Exercises 10 and 11, and use if-statements to make the loops exit early. You'll need the break statement to do that. Go read about it.

//Is the first test really saying the right thing? To you the "first argument" isn't the same first argument a user entered. Fix it.

