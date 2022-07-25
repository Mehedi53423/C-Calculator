#include<stdio.h>

Sum()
{
    printf("\nSumition : \n");

    int n,i;
    double s=0;

    printf("\nHow many numbers...?\n\n: ");
    scanf("%d",&n);

    printf("\nEnter numbers : ");

    for(i=0;i<n;i++)
    {
        double a = 0;
        scanf("%lf",&a);
        s = s+a;
    }

    printf("\nThe Sumition Is : %lf\n",s);
}

Sub()
{
    printf("\nSubtraction : \n");

    double a,b;

    printf("\nEnter the first number : ");
    scanf("%lf",&a);

    printf("\nEnter the second number : ");
    scanf("%lf",&b);

    printf("\nThe subtraction is : %lf\n",a-b);

    return 0;
}

Mul()
{
    printf("\nMultiplication : \n");

    int n,i;
    double m = 1;

    printf("\nHow many numbers...?\n\n: ");
    scanf("%d",&n);

    printf("\nEnter the numbers : ");

    for(i=0;i<n;i++)
    {
        double p = 0;

        scanf("%lf",&p);

        m = m*p;
    }

    printf("\nThe multiplication is : %lf\n",m);
}

Div()
{
    printf("\nDivide : \n");

    double a,b;

    printf("\nEnter the first number : ");
    scanf("%lf",&a);

    printf("\nEnter the second number : ");
    scanf("%lf",&b);

    printf("\nThe quotient is : %lf\n",a/b);

    return 0;
}

int main()
{
    int o;
    system("color D0");
    printf("\nWhat you want to do.....???\n\n1. Sumition\n2. Subtraction\n3. Multiplication\n4. Divide\n\n: ");
    scanf("%d",&o);

    switch(o)
    {
    case 1:
        system("color 50");
        Sum();
        break;
    case 2:
        system("color E0");
        Sub();
        break;
    case 3:
        system("color B0");
        Mul();
        break;
    case 4:
        system("color C0");
        Div();
        break;
    }

    getch();
    return 0;
}
