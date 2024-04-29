#include<stdio.h>
int main ()
{
int no,fact=1,i;
double sum=0.0,product=1.0;
printf("Enter number:- ");
scanf("%d",&no);
for (i=1;i<=no;i++)
{
    fact*=i;
    sum+=1.0/fact;
    product*=1.0/fact;

}
printf("sum of series=%.2lf",sum);
printf("\nproduct of series=%.2lf\n",product);
return 0;
}
