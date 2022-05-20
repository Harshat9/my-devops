#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	int *p1,*p2,sum;
	clrscr();
	printf("Enter Number 1 = ");
	scanf("%d",&*p1);
	printf("Enter Number 2 = ");
        scanf("%d",&*p2);
	sum=*p1+*p2;
	printf("sum=%d",sum);
	getch();
	return 0;
}
