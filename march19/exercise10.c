#include <stdio.h>
#include <stdlib.h>

//Ecercise 10: Arrays of Strings, Looping

int main(int argc, char* argv[]) {
int i = 0;

//go through each string in argv
//why am I skipping argv[0]?

for( i=1; i<argc; i++){
	printf("arg %d: %s\n", i, argv[i]);
}

//let's make our own array of strings
char* states[] =  { "California", "Oregon", NULL, "Washington", "Texas"}; //here we use the ',' to separte muiltimple statement

int num_states = 5;

for( i=0; i<num_states; i++){ //here we use ';' to separate operations
	printf("state %d: %s\n", i, states[i]);
}
return 0;
}

//Extra credit

//Figure out what kind of code you can put into the parts of a for-loop.
//you can put elments of "char"

// Look up how to use the ',' (comma) character to separate multiple statements in the parts of the for-loop , but between the ';' (semicolon) characters.

//Read what a NULL is and try to use it in one of the elements of the states array to see what it'll print.
// Null is a built-in constantthat has a value of 0
//{state 0: California, state 1: Oregon, state 2: (null), state 3: Washington, state 4: Texas}

//See if you can assign an element from the states array to the argv array before printing both. Try the inverse
//it's unable to do

