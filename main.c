#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

    

int main()
{
	int cc=40,cf=12;
    char tecla;
    while(tecla!='e')
     {
        clrscr();
         gotoxy(cc,cf);
        printf("*") ;
        tecla=getch();
        switch (tecla) /*es como if*/
        {
         case 'd':
          cc++;
         break;
         case 'i':
           cc--;
         break;
         case 'b':
           cf++;
         break;
         case 's':
           cf--;
         break;
        }
    }
   return 0;
}



