//Author: Evelyn Moore eim5178@psu.edu
// Collaborator:
// Collaborator:
// Collaborator:
// Section:
// Breakout: 
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  double percent = atof(readline("Enter your CMPSC 131 grade: "));
  if (percent >= 93.0){
    printf("Your letter grade for CMPSC 131 is A.");
  }
  else if (percent >= 90.0){
    printf("Your letter grade for CMPSC 131 is A-.");
  }
  else if (percent >= 87.0){
    printf("Your letter grade for CMPSC 131 is B+.");
  }
  else if (percent >=83.0){
    printf("Your letter grade for CMPSC 131 is B.");
  }
  else if (percent >=80.0){
    printf("Your letter grade for CMPSC 131 is B-.");
  }
  else if (percent >=77.0){
    printf("Your letter grade for CMPSC 131 is C+.");
  }
  else if (percent >=70.0){
    printf("Your letter grade for CMPSC 131 is C.");
  }
  else if (percent >=60.0){
    printf("Your letter grade for CMPSC 131 is D.");
  }
  else{
    printf("Your letter grade for CMPSC 131 is F.");
  }

  return 0;
}