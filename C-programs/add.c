#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	clrscr();
	int a,b,sum;
	printf("Enter 'a' value = ");
	scanf("%d",&a);
	printf("Enter 'b' value = ");
	scanf("%d",&b);
	sum=a+b;
	printf("(a+b) = %d\n",sum);
	getch();
	return 0;
}
