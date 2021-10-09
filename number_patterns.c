#include <stdio.h>
int main() 
{
   int x, y, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (x = 1; x <= rows; ++x , k = 0)
    {
      for (y = 1; y <= rows - x ; ++y) {
         printf("  ");
      }
      while (k != 2 * x - 1) 
	  {
         printf(" %d ",x);
         ++k;
      }
      printf("\n");
   }
   return 0;
}
