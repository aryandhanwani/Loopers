#include<stdio.h>
#include<conio.h>

main()
{
 char c,h;
 c='a';
 h='z';

 do
 {
  if('b'||'c'||'d'||'f'||'g'||'h'||'j'||'k'||'l'||'n'||'o'||'p'||'r'||'s'||'t'||'v'||'w'||'x'||'z')
  {
   continue;
  }
  printf("%c",c)
  c++;
 }
 getch();
}
