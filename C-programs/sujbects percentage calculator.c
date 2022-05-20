#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
        int s1,s2,s3,s4,s5,sum,total=500;
	float per;
	clrscr();
        printf("Enter subject marks S1 = ");
        scanf("%d",&s1);
        printf("Enter subject marks S2 = ");
        scanf("%d",&s2);
        printf("Enter subject marks S3 = ");
        scanf("%d",&s3);
        printf("Enter subject marks S4 = ");
        scanf("%d",&s4);
        printf("Enter subject marks S5 = ");
        scanf("%d",&s5);
        sum=s1+s2+s3+s4+s5;
        printf("sum = %d\n",sum);
	per=(sum*100)/total;
	printf("percentage = %f\n",per);
	getch();
        return 0;
}

