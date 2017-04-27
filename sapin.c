void	sapin(int size)
{
  int fixed_size;
  int char_width;
  int space_width;
  int count1;
  int count2;
  int count3;
 
  count1 = 0;
  count2 = 0;
  count3 = 2;
  space_width = (tree_width(size) - 1) / 2;
  fixed_size = size;
  size = 1;
  char_width = 1;
  while (count1 < fixed_size)
    {
      while (count2 < 2 && count1 < fixed_size)
      	{
	  space_width = tree_floor(size, char_width, space_width);
	  count2 = count2 + 1;
	  count1 = count1 + 1;
	  size = size + 1;
	  char_width = tree_width(size) - (2 * (size + 2));
	  space_width = space_width + count3;
	}      
      count2 = 0;
      count3 = count3 + 1;
    }
  build_trunc(fixed_size);
}
