#include <stdio.h>
#include <stdlib.h>

//Exercise 9: Arrays and strings 

int main( int argc, char** argv[]){
int numbers[5] = {0};//you can't assign characters to an integer(invalid initializer)
char name[5] = {'a'};// a char can compiler an int 

//first, print them out raw 
printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

printf("name: %s\n", name);

//setup the numbers
numbers[0] = 1;
numbers[1] = 2;
numbers[2] = 3;
numbers[3] = 4;
numbers[4] = 5;

//setup the name
name[0] = 'I';
name[1] = 'v';
name[2] = 'a';
name[3] = 'n';
name[4] = '\0';

//then print them out initialized
printf("numbers: %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);

printf("name each: %c %c %c %c %c\n", name[0], name[1], name[2], name[3], name[4]);

//print the name like a string 
printf("name: %s\n", name);

//another way to use name
char *another = "Ivan";
printf("another: %s\n", another);

printf("aother each: %c %c %c %c %c\n", another[0], another[1], another[2], another[3], another[4]);
return 0;
}


//Exttra credits
//Assign the characters into numbers and then use printf to print them a character at a time. What kind of compiler warnings did you get?
// Do the inverse for name , trying to treat it like an array of int and print it out one int at a time. What does Valgrind think of that?
// How many other ways can you print this out? 
//If an array of characters is 4 bytes long, and an integer is 4 bytes long, then can you treat the whole name array like it's just an integer? 
//How might you accomplish this crazy hack?
// Take out a piece of paper and draw out each of these arrays as a row of boxes. Then do the operations you just did on paper to see if you get them right.
// Convert name to be in the style of another and see if the code keeps working.

