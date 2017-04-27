/* #include <stdlib.h> */
/* #include <stdio.h> */
/* #include <string.h> */

int  tree_floor(int size, int char_width, int space_width)
{
  int countA;
  int countB;

  countA = 1;
  countB = 1;
  while (countA <= size + 3)
    {
      while (countB <= space_width)
	{
	  my_putchar(' ');
	  countB = countB + 1;
	}
      countB = 1;
      while (countB <= char_width)
	{
	  my_putchar('*');
	  countB = countB + 1;
	}
      my_putchar('\n');
      countB = 1;
      countA = countA + 1;
      char_width = char_width + 2;
      space_width = space_width - 1; 
    }
  return(space_width);
} 

/* main () */
/* { */
/*   int size; */
/*   int char_width; */
/*   int space_width; */
  
/*   size = 7; */
/*   char_width = tree_width(size); */
/*   printf("Character Width : %d\n", char_width); */
/*   space_width = tree_width(size)/2 - 1; */
/*   printf("Space Width : %d\n", space_width); */
/*   tree_floor(size, char_width, space_width); */
/*   return(0); */
/* } */
