#include <stdio.h>
#include <stdlib.h>

//Exercise 11: While-Loop And Boolean Expressions

int main(int argc, char *argv[]){
//go through each stringn in argv

int i = 5;
while(i<=argc && i>0){//make a range that could do to background 
	printf("arg %d: %s\n", i, argv[i]);
	i--;// count backward 
}

//let's make our own array of strings
char *states[] = {"California", "Oregon", NULL, "Washington", "Texas"};

int num_states = 6;
i = 0; //watch for this
while(i <= num_states && i>=0) {
	printf("state %d: %s\n", i, states[i]);
	i++;
}
return 0;
}

//Extra credit

//Make these loops count backward by using i-- to start at argc and count down to 0. You may have to do some math to make the array indexes work right.
//Use a while loop to copy the values from argv into states.
//Make this copy loop never fail such that if there's too many argv elements it won't put them all into states.
//Research if you've really copied these strings. The answer may surprise and confuse you though.
//it is posible
