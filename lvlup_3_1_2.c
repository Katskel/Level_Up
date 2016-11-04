#include <stdio.h>
#include <stdlib.h>

typedef struct User1 {
        double sum, dif, pr, quo;
        char* errorMsg;
} User;

void printUser(User user);
User calcUser(double a, double b);

int main()
{
    int x;
    double a, b;
    printf("Vvedite a, b: ");
    x=scanf("%lf%lf", &a, &b);
    while(x<2)
    {
    printf("Input error. Try again: ");
    fflush(stdin);
    x=scanf("%lf%lf", &a, &b);
    }
    User user=calcUser(a, b);
    printUser(user);
    return 0;
}

void printUser(User user)
{
    printf("Sum: %6.3lf\n", user.sum);
    printf("Difference: %6.3lf\n", user.dif);
    printf("Product: %6.3lf\n", user.pr);
    if(user.errorMsg==NULL)
    printf("Quotient: %6.3lf\n", user.quo);
    else printf("Quotient: %s\n", user.errorMsg);
}

User calcUser(double a, double b)
{
    User user1;
    user1.errorMsg=(char*)malloc(sizeof(char)*30);
    user1.sum=a+b;
    user1.dif=a-b;
    user1.pr=a*b;
    if(b==0)
    {
    user1.errorMsg="Undefined. Division by 0\n";
    }
    else
    {
        user1.errorMsg=NULL;
        user1.quo=a/b;
    }
    return user1;
}













