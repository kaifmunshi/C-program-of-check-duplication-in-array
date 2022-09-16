#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,arr[10],num,count=0;
	long char c[50],arr2[10],z,x;

	clrscr();
	printf("enter size of array");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
	     printf("enter element number %d ",i);
	      scanf("%d",&arr[i]);
	}
		for(i=0;i<num;i++)
		{
			for(j=i+1;j<num;j++)
			{

				if(arr[i]==arr[j])
				{
					if(arr2[z]==arr[i])
					{
				       break;
					}
				arr2[z]=arr[i];
				printf("\nduplicate number is %d",arr2[z]);
				count=count+1;
				}
			}
		}
	       printf("\ntotal number of duplications are %d",count);
getch();
}