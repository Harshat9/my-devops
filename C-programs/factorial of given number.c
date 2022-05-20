#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
        clrscr();
        int n,i,fact=1;
        printf("Enter number = ");
        scanf("%d",&n);
        for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
        printf("FACTORIAL = %d\n",fact);
        getch();
        return 0;
}
