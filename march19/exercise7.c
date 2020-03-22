#include <stdio.h>
#include <stdlib.h>

//Exercise 7: More variables, some math

int main(int argc, char** argv){

int bugs = 100;

double bugs_rate = 1.2;
printf("you have %d bugs at the imaginary rate of %f.\n", bugs, bugs_rate);

unsigned long universe_of_defects = 1L * 1024L * 1024L * 1024L *1024L * 1024L * 1024L; //This numbers represent the multiply and print a huge numbers that represent the bugs 
//A variable that you declare unsigned will always use positive integer values, never negative
printf("The entire universe  has %ld bugs. \n", universe_of_defects);

double expected_bugs = bugs * bugs_rate;
printf("You are expected to have %f bugs.\n", expected_bugs);

double part_of_universe = expected_bugs / universe_of_defects;
printf("That is only a %e portion of the universe. \n", part_of_universe);

//multiply an char and an int  is posible becuse the char isn't a value 
char nul_byte = '\0';
int care_percentage = bugs *nul_byte;
printf("which means you should care %d%%.\n", care_percentage);

return 0;
}
