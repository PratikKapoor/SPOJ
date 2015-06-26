#include<stdio.h>
#include<string.h>

int main()
{
		
	while(1)
	{
		int cols,i,k=0,j;
		char input[200];
		
		scanf("%d",&cols);
		
		if(cols==0)
		{
			break;
		}
		
		scanf("%s",&input);

		int len = strlen(input);
		int rows = len/cols;
	
		char mat[rows][cols];
		
		for(i=0;i<rows;i++)
		{
			for(j=0;j<cols;j++)
			{
				mat[i][j] = input[k++];
			}
			
			i++;
			
			for(j=cols-1;j>=0;j--)
			{
				mat[i][j] = input[k++];
			}
		}
		
		for(i=0;i<cols;i++)
		{
			for(j=0;j<rows;j++)
			{
				printf("%c",mat[j][i]);
			}
		}
		
		printf("\n");
	}
	
	return 0;
}
