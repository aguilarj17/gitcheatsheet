#include <stdio.h>
#include <stdlib.h>

//Exercise 13: Switch Satatement

int main(int argc, char *argv[]){

if(argc != 2){
	printf("¡ERROR! You need one argumen.\n");
	//this is how you abort a program
	return 1;
}
int i = 0;
for( i=0; argv[1][i] != '\0'; i++){
char letter = argv[1][i];

switch(letter){
	case 'a':
	case 'A':
		printf("%d: 'A'\n", i);
	break;

	case 'e':
	case 'E':
		printf("%d: 'E'\n", i);
	break;

	case 'i':
	case 'I':
		printf("%d: 'I'\n", i);
	break;

	case 'o':
	case 'O':
		printf("%d: 'O'\n", i);
	break;

	case 'u':
	case 'U':
		printf("%d: 'U'\n", i);
	break;

	case 'y':
	case 'Y':
		if(i>2) {
	//it's only sometimes Y
		printf("%d: 'Y'\n", i);
		}
	break;

	default:
	printf("%d: %c is not a vowel\n", i, letter);
	}
	}
return 0;
}

//Extra credit
//Write another program that uses math on the letter to convert it to lowercase, and then remove all the extraneous uppercase letters in the switch. 

#include <stdio.h>

char LowerCase(char *letter){
if(letter >=  97 && letter <=90) {
	return letter;
}else if(letter >= 65 && letter <= 90){
	return letter + 33;
}else{
	return letter;
}
}
int main(int argc, char *argv[]){

if(argc != 2){
	printf("Â¡ERROR! You need one argumen.\n");
	//this is how you abort a program
	return 1;
}
int i = 0;
for( i=0; argv[1][i] != '\0'; i++){
char letter = argv[1][i];

switch(letter){
	case 'a':
	case 'A':
		printf("%d: 'A'\n", i);
	break;

	case 'e':
	case 'E':
		printf("%d: 'E'\n", i);
	break;

	case 'i':
	case 'I':
		printf("%d: 'I'\n", i);
	break;

	case 'o':
	case 'O':
		printf("%d: 'O'\n", i);
	break;

	case 'u':
	case 'U':
		printf("%d: 'U'\n", i);
	break;

	case 'y':
	case 'Y':
		if(i>2) {
	//it's only sometimes Y
		printf("%d: 'Y'\n", i);
		}
	break;

	default:
	printf("%d: %c is not a vowel\n", i, letter);
	}
	}
return 0;
}

//Use the ',' (comma) to initialize letter in the for-loop

int main(int argc, char *argv[]){

if(argc != 2){
	printf("Â¡ERROR! You need one argumen.\n");
	//this is how you abort a program
	return 1;
}
int i = 0;
char letter = 0;
for( i=0;letter = argv[1][i], letter != '\0'; i++){


switch(letter){
	case 'a':
	case 'A':
		printf("%d: 'A'\n", i);
	break;

	case 'e':
	case 'E':
		printf("%d: 'E'\n", i);
	break;

	case 'i':
	case 'I':
		printf("%d: 'I'\n", i);
	break;

	case 'o':
	case 'O':
		printf("%d: 'O'\n", i);
	break;

	case 'u':
	case 'U':
		printf("%d: 'U'\n", i);
	break;

	case 'y':
	case 'Y':
		if(i>2) {
	//it's only sometimes Y
		printf("%d: 'Y'\n", i);
		}
	break;

	default:
	printf("%d: %c is not a vowel\n", i, letter);
	}
	}
return 0;
}
//Make it handle all of the arguments you pass it with yet another for-loop.

int main(int argc, char *argv[]){

if(argc != 2){
	printf("Â¡ERROR! You need one argumen.\n");
	//this is how you abort a program
	return 1;
}
int i = 0;
int x = 0;
char letter = 0;
char *another;

for(x = 1; x< argc; x++){
another = argv[x];
	printf("Argument %d: %s\n", x, another);

for( i=0; letter = another[i], letter != '\0'; i++){

switch(letter){
	case 'a':
	case 'A':
		printf("%d: 'A'\n", i);
	break;

	case 'e':
	case 'E':
		printf("%d: 'E'\n", i);
	break;

	case 'i':
	case 'I':
		printf("%d: 'I'\n", i);
	break;

	case 'o':
	case 'O':
		printf("%d: 'O'\n", i);
	break;

	case 'u':
	case 'U':
		printf("%d: 'U'\n", i);
	break;

	case 'y':
	case 'Y':
		if(i>2) {
	//it's only sometimes Y
		printf("%d: 'Y'\n", i);
		}
	break;

	default:
	printf("%d: %c is not a vowel\n", i, letter);
	}
	}
return 0;
}

//Convert this switch-statement to an if-statement . Which do you like better?

int main(int argc, char *argv[]){

if(argc != 2){
	printf("Â¡ERROR! You need one argumen.\n");
	//this is how you abort a program
	return 1;
}
int i = 0;
for( i=0; argv[1][i] != '\0'; i++){
char letter = argv[1][i];

if(letter == 'a' || letter == 'A'){
	printf("%d: 'A' is a vowel\n",i);
}else if(letter == 'e' || letter == 'E'){
	printf("%d: 'E' is a vowel\n",i);
}else if(letter == 'i' || letter == 'I'){
	printf("%d: 'I' is a vowel\n", i);
}else if(letter == 'o' || letter == 'O'){
	printf("%d: 'O' is a vowel\n", i);
}else if(letter == 'u' || letter == 'U'){
	printf("%d: 'U' is a vowel\n", i);
}else{
	printf("%d: %c is not a vowel\n", i, letter);
}
}
return 0;
}

// but i prefer switch case

//In the case for 'Y' I have the break outside the if-statement . What's the impact of this and what happens if you move it inside the if-statement . Prove to yourself that you're right.

//if the 'y'is outside the break the profram don't take these letter

