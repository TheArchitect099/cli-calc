#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  double n_one;
  double n_two;
  char op;
  printf("Enter your first number: ");
  scanf("%lf", &n_one);
  printf("Enter your second number: ");
  scanf("%lf", &n_two);
  printf("Enter your operation\nFor example: + - / *\n: ");
  scanf(" %c", &op);
  if (n_one && n_two == 0) printf("Your numbers is zero. It's not correct"); return 1;
    switch (op) {
      case '+': printf("Answer: %.2f\n", n_one + n_two); break;
      case '-': printf("Answer: %.2f\n", n_one - n_two); break;
      case '/': if (n_one == 0 || n_two == 0) {
        printf("You can't divide by zero\n");
      return 1;
      }
    else {
      printf("Answer: %.2f\n", n_one / n_two); break;
    }
      case '*': printf("Answer: %.2f\n", n_one * n_two); break;
        default: printf("No such operation exists\n");
      return 1;
    }
  system("pause");
  return 0;
}
