#include<stdio.h>
#include<conio.h>
void main()
{     
     int a,b,c,d,e,f,g=0;
	    clrscr();
			  printf("Enter the No:- ");
			  scanf("%d",&e);
			    for(d=1;d<=e;d++)
			     {
         for(f=e;f>=d;f--)
		       {
			        printf("  ");
		        }
		      for(a=d;a>=1;a--)
		      {
            g=g+1;
            
			        printf(" %d",g);
	       	}
		      for(a=2;a<=d;a++)
		      {
            g=g-1;
			     printf(" %d",g);
		      }
		      printf("\n");
			}
			
	
	getch();
}