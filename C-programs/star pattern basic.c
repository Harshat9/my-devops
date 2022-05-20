#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
        clrscr();
        int i,j,n;
	printf("Enter No.of Lines = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
        getch();
        return 0;
}
