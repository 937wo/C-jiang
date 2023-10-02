#include <stdio.h>
int main()
{
   puts("**************************");
   puts("*        + => 1          *");
   puts("*        - => 2          *");
   puts("*        * => 3          *");
   puts("*        / => 4          *");
   puts("*        % => 5          *");
   puts("**************************");
   
   printf("Please enter arithmetic symbols:");
   
   int sa;
   scanf("%d",&sa);
   
   int wae = 0;
   int wqw = 0;
   
   if (sa == 1)
   {
      printf("Please enter the first integer:");
      scanf("%d",&wae);
      printf("Please enter the second integer:");
      scanf("%d",&wqw);
      printf("%d + %d = %d\n",wae,wqw,wae+wqw);
   }
   else if (sa == 2)
   {
      printf("Please enter the first integer:");
      scanf("%d",&wae);
      printf("Please enter the second integer:");
      scanf("%d",&wqw);
      printf("%d - %d = %d\n",wae,wqw,wae-wqw);
   }
   else if (sa == 3)
   {
      printf("Please enter the first integer:");
      scanf("%d",&wae);
      printf("Please enter the second integer:");
      scanf("%d",&wqw);
      printf("%d * %d = %d\n",wae,wqw,wae*wqw);
   }
   else if (sa == 4)
   {
      printf("Please enter the first integer:");
      scanf("%d",&wae);
      printf("Please enter the second integer:");
      scanf("%d",&wqw);
      printf("%d / %d = %d\n",wae,wqw,wae/wqw);
   }
   else if (sa == 5)
   {
      printf("Please enter the first integer:");
      scanf("%d",&wae);
      printf("Please enter the second integer:");
      scanf("%d",&wqw);
      printf("%d %% %d = %d\n",wae,wqw,wae%wqw);
   }

   return 0;
}