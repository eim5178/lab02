//Author: Evelyn Moore eim5178@psu.edu
// Collaborator:Zelin Chen zvc5228@psu.edu
// Section: 4
// Breakout: 3
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  double percent = atof(readline("Enter your CMPSC 131 grade: "));
  if (percent >= 93.0){
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if (percent >= 90.0){
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if (percent >= 87.0){
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if (percent >=83.0){
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if (percent >=80.0){
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if (percent >=77.0){
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if (percent >=70.0){
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if (percent >=60.0){
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else{
    printf("Your letter grade for CMPSC 131 is F.\n");
  }

  return 0;
}