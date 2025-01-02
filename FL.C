#include<stdio.h>
#include<conio.h>

main()
{
 int i,f,l,sum,n;
 clrscr();

 again:
 printf("\nentre the number : ");
 scanf("%d",&i);


 l=i%10;
 n=i/10;
 f=n/10;
 sum=f+l;

 printf("the sum of first and last number is : %d", sum);
 goto again;

 getch();
}