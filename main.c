//Author: Evelyn Moore eim5178@psu.edu
// Collaborator:Zelin Chen zvc5228@psu.edu
// Section: 4
// Breakout: 3
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  double percent = atof(readline("Enter your CMPSC 131 grade: "));
  char *letter;
  if (percent >= 93.0){
    letter = "A";
  }
  else if (percent >= 90.0){
    letter = "A-";
  }
  else if (percent >= 87.0){
    letter = "B+";
  }
  else if (percent >=83.0){
    letter = "B";
  }
  else if (percent >=80.0){
    letter = "B-";
  }
  else if (percent >=77.0){
    letter = "C+";
  }
  else if (percent >=70.0){
    letter = "C";
  }
  else if (percent >=60.0){
    letter = "D";
  }
  else{
    letter = "F";
  }
printf("Your letter grade for CMPSC 131 is %s.\n" ,letter);
  return 0;
}