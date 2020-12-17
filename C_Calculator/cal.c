#include<stdio.h>

int main()
{

    double a,b;
    double r;
    int i=0;
    char op;
    printf("-----Calculator-----\n");
    scanf("%lf",&a);
    scanf("%c",&op);
    scanf("%lf",&b);

     for(;;)
     {

        if(op=='+')
        {
            r=a+b;
            a=r;
        }
        else if(op=='-')
        {
            r=a-b;
            a=r;
        }
        else if(op=='*')
        {
            r=a*b;
            a=r;
        }
        else if(op=='/')
        {
             r=(float)a/b;
             a=r;
	i=1;
        }
        else if(op=='q' && b==1)
        {
            break;
        }
        if(i==0)
        {
             printf("\n %.0lf",a);
        }
        else
        {
             printf("\n %.2lf",a);
        }

        scanf(" %c",&op);
        scanf(" %lf",&b);


    }

    printf("End");

    return 0;
}
