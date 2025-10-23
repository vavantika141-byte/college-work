#include <stdio.h>
 main()

{
   char ch[456];
   printf("enter the name");
   gets(ch);
   puts(ch);
   printf("ch=%s",ch); 
   
}
  

/*  printf is used to display the data on the screen.
prinf the use of & is not needed .
/n = new line
%4d =  (right justified)data will shift towards right leaving given specific spaces 
%-4d =  (left justified ) data will shift towards left leaving  given specific spaces
unformatted input functions -
1) getchar()-{reads only single character and displays on the screen as u typee  doesn't matter how much character u enter. 
   char ch ;
   ch = getchar();
   printf("ch=%c",ch); 
   },
   2) getch() -{ reads directly from the keyboard without echoing which means doesn't show what u typed it holds the screen of the program , used in case of security purposes.
    },


     3)getche() - {it also reads a single character only same as of getch but echoes the character on the screen .  }
     
     for a character and 
     4)gets() it reads an entire line of a text from the keyboard until the user presses enter.


     unformatted output functions 
     putchar() only prints one character at a time 
     putch()prints a single character directly on the screen
     puts()prints an entire line followed by an automatic new line
 */

