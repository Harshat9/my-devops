#include <stdio.h>
#include <conio.h>

int main()
{
  clrscr();
  int i,n,count=0; 
  printf("\n Please Enter any number to Check  = ");
  scanf("%d",&n);
  for (i=2; i<=n/2; i++)
   {
     if(n%i == 0)
     {
        count++;
	break;
     }	
   }
   if(count==0 && n!=1)
   {
   	printf("\n %d is a Prime Number\n\n",n);
   }
   else
   {
   	printf("\n %d is Not a Prime Number\n\n",n);
   }
  return 0;
}
