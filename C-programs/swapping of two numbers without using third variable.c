#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
        clrscr();
        int a,b;
        printf("Enter 'a' value = ");
        scanf("%d",&a);
        printf("Enter 'b' value = ");
        scanf("%d",&b);
        a=a+b;
	b=a-b;
	a=a-b;
        printf("swapped value of a = %d\n",a);
	printf("swapped value of b = %d\n",b);
        getch();
        return 0;
} 
