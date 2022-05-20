#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
        clrscr();
        int a,b,n,add,sub,mul;
	float div;
        printf("Enter 'a' value = ");
        scanf("%d",&a);
        printf("\nEnter 'b' value = ");
        scanf("%d",&b);
        printf("\n\nChoose options from the list below\n\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n\n Enter option : ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:add=a+b;
		       printf("\nAddition of values = %d\n",add);
		       break;
		case 2:sub=a-b;
		       printf("\nSubtraction of values = %d\n",sub);
		       break;
		case 3:mul=a*b;
		       printf("\nMultiplication of values = %d\n",mul);
		       break;
		case 4:div=a/b;
		       printf("\nDivision of values = %f\n",div);
		       break;
		default: printf("\nInput ERROR...!\nChoose options only from the list\n");
			 break;
	}
        getch();
        return 0;
}
