#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
        clrscr();
        int a,b,c;
        printf("Enter 'a' value = ");
        scanf("%d",&a);
        printf("Enter 'b' value = ");
        scanf("%d",&b);
	printf("Enter 'c' value = ");
        scanf("%d",&c);
        if((a>b) && (a>c))
		printf("a is greatest \n");
	if((b>a) && (b>c))
		printf("b is greatest \n");
	if((c>a) && (c>b))
		printf("c is greatest \n");
	else
		printf("all are equal \n");
        getch();
        return 0;
}

