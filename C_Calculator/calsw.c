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
	switch(op)
	{
        case '+':        {
            r=a+b;
            a=r;
            break;
	}
       case '-':
        {
            r=a-b;
            a=r;
            break;
        }
        case '*':
        {
            r=a*b;
            a=r;
             break;
        }
       case '/':
        {
             r=(float)a/b;
             a=r;i=1;
            break;

        }
       default:{}
	
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
	if(op=='q'&& b==1)
	break;

    }

    printf("End");

    return 0;
}
