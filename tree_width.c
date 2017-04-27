/* #include <stdio.h> */

int	tree_width(int size)
{
  int countA;
  int countB;
  int width;
  
  countA = 1;
  countB = 3;
  width = 1;
  while (countA <= size)
    {
      width = width + 2 * 2 * (countB);
      countA = countA + 2;
      countB = countB + 1;
    }
  if (size % 2)
    {
      width = width - (2 * (countB - 1));
    }
  return (width);
}

/* main (int size) */
/* { */
/*   size = 1; */
/*   printf("Tree Width 1 = %d\n", tree_width(size)); */
/*   size = 2; */
/*   printf("Tree Width 2 = %d\n", tree_width(size)); */
/*   size = 3; */
/*   printf("Tree Width 3 = %d\n", tree_width(size)); */
/*   size = 4; */
/*   printf("Tree Width 4 = %d\n", tree_width(size)); */
/*   size = 5; */
/*   printf("Tree Width 5 = %d\n", tree_width(size)); */
/*   size = 6; */
/*   printf("Tree Width 6 = %d\n", tree_width(size)); */
/*   size = 7; */
/*   printf("Tree Width 7 = %d\n", tree_width(size)); */
/*   return(0); */
/* } */
