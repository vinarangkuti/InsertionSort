#include <stdio.h>

int main()
{
	 int n, array[1000], c, d, t;
	  printf("Enter number of elements\n");
	   scanf("%d", &n);
	     printf("Enter %d integers\n", n);
	 for (c = 0; c < n; c++) {
	 	 scanf("%d", &array[c]);
  }

   for (c = 1 ; c <= n - 1; c++) {
 