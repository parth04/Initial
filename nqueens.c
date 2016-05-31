#include<stdio.h>
#include<math.h>
int board[10],count;

void nqueens(int k,int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(place(k,i))
		{
			board[k]=i;
			if(k==n)
			{
				print(n);
			}
			else
			{
				nqueens(k+1,n);
			}

		}

	}
}

int place(int k,int i)
{
	int j;
	for(j=1;j<=k-1;j++)
	{
		if(board[j]==i)
		{
			return 0;
		}
		else if(abs(board[j]-i)==abs(j-k))
		{
			return 0;
		}
	}
	return 1;
}

void print(int n)
{
	int i,j;
	printf("\nSolution %d : ",++count);
	for(i=1;i<=n;i++)
	{
		printf("\n\n");
		for(j=1;j<=n;j++)
		{
			if(board[i]==j)
				printf("\tQ");
			else
				printf("\t-");
		}
	}
	//hello
	printf("\n-------------------------------------------");

}

int main()
{
	int n;
	printf("Enter the number of quneens : ");
	scanf("%d",&n);
	nqueens(1,n);
	return 0;
}















