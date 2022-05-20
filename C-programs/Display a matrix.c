#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
        clrscr();
        int a[3][2],b[3][2],i,j;
        printf("Enter 'a' matrix values = ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Enter 'b' matrix values = ");
        for(i=0;i<3;i++)
        {
                for(j=0;j<2;j++)
                        scanf("%d",&b[i][j]);
        }
        printf("\n'a' matrix is = \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n'b' matrix is = \n\n");
        for(i=0;i<3;i++)
        {
                for(j=0;j<2;j++)
                {
                        printf("%d",b[i][j]);
                }
                printf("\n");
        }
        getch();
        return 0;
}
