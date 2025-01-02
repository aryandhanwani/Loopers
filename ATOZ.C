#include<stdio.h>
#include<conio.h>

main()
{
 char c,h;
 clrscr();

 c = 'a';
 h = 'z';

 do
 {
  printf("%c",c);
  c+=4;

 }while (c<=h);

 getch();
}