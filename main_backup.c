#include <stdlib.h>

int  main(int argc, char **argv)
{
  int size;
 
  if (argv[1] == NULL)
    {
      write (1, "Error\n", 6);
      return(0);
    }
  size = atoi(argv[1]);
  sapin(size);
  return (0);
}
