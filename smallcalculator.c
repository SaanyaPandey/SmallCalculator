#include <stdio.h>
#include <math.h>
int main()
{
    char operator;
    printf("Enter any Operator: ");
    scanf("%c",&operator);
    int a ,b; 
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    float c;
    switch(operator)
    {
        case '+': printf("You chose to add the numbers. \n");
                  c= a+b;
                  printf("the total is: %f",c);
        break;
        case '-': printf("You chose to subtract the numbers. \n");
                  c= a-b;
                  printf("the answer is: %f",c);
        break;
        case '*': printf("You chose to multiply the numbers. \n");
                  c= a*b;
                  printf("the answer is: %f", c);
        break;
        case '/': printf("You chose to divide the numbers. \n");
                  if (b==0)
                  {
                    printf("Not defined");
                  }
                  if (a!=0 && b!=0)
                  {
                    c= a/b;
                    printf("The quotient is : %f", c);
                  }
                  if (a==0)
                  {
                    printf("0 is the answer");
                  }
                  
                  
        break;
        case '%': printf("You chose to find the remainder of the given numbers. \n");
                  c= a % b;
                  printf("The remainder is: %f", c);

    }
}

