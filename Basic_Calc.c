#include <stdio.h>


//creates main function
int main()
{
  //establishes variables
  char userInput[2];
  double a, b;
  //takes user input based on what operator they want to use
  printf("Enter operator(+,-,*,/) \nEnter x to exit: ");
  scanf("%s", userInput);
  //sees if the user wants to exit before asking for the operands
  if (strcmp(userInput, "x") == 0)
  {
    exit(0);
  }
  printf("Enter first and second operand: ");
  scanf("%lf %lf", &a, &b);
  //creats if statments and else if statments based on what operator the user used
  if (strcmp(userInput, "+") == 0)
  {
    //prints a + b = c
    printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
    return 0;
  }
  //prints a - b = c
  else if (strcmp(userInput, "-") == 0)
  {
    printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
    return 0;
  }
  //prints a * b = c
  else if (strcmp(userInput, "*") == 0)
  {
    printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
    return 0;
  }
  //prints a / b = c
  else if (strcmp(userInput, "/") == 0)
  {
    printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
    return 0;
  }

}
