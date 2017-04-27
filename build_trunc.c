/* #include <stdlib.h> */
/* #include <stdio.h> */
/* #include <string.h> */
/* #include "tree_width.c" */
/* #include "my_putchar.c" */

int	build_trunc(int size)
{
  int countA;
  int countB;
  int trunc_width;
  int space_width;
  
  countA = 1;
  countB = 1;
  trunc_width = size;
  if (size %2 == 0)
    trunc_width = size +1;
  space_width = ((tree_width(size) - 1) - (trunc_width - 1)) / 2;
  while (countA <= size)
    {
      while (countB <= space_width)
	{
	  my_putchar(' ');
	  countB = countB + 1;
	}
      countB = 1;
      while (countB <= trunc_width)
	{
	  my_putchar('|');
	  countB = countB + 1;
	}
      my_putchar('\n');
      countB = 1;
      countA = countA + 1;
    }
  return(0);
} 

/* main () */
/* { */
/*   int size; */
/*   size = 3; */

/*   build_trunc(size); */
/*   return(0); */
/* } */
