#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,a,b,sum=1;
printf("Enter the number:");
scanf("%d",&a);
printf("Enter the power:");
scanf("%d",&b);
while(i<b)
{
sum=sum*a;
i++;
}
printf("The power is %d:",sum);
getch();
}
