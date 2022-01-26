#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,c;
    clrscr();
    printf("Enter any number:");
    scanf("%d",&c);
    for(i=1;i<=c;++i)
        {
            for(j=1;j<=i;++j)
                {
                printf("* ");
                }
            printf("\n");
        }
        getch();
}
    