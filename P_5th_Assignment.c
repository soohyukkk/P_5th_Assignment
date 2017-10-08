#include <stdio.h>
void mult(int matrix1[][10], int matrix2[][10], int result[][10], int r1, int c1, int r2, int c2);
void mult_result(int mul[][10],int r,int c);
int main()
{
	int a1[10][10], a2[10][10], a3[10][10], a4[10][10], a5[10][10], a6[10][10],
		result1[10][10], result2[10][10], result3[10][10], result4[10][10], result5[10][10],
		r[10], c[10], i, j, q, m, n, count=0;
 
	printf("Suppose that we have the following matrixes:\n");
	for(q=0, m=0, n=0; q<6, m<6, n<6; ++q, ++m, ++n)
	{
		printf("%d.  A%d : ",q+1,q+1);
		scanf("%d %d",&r[m],&c[n]);
	}
 
	printf("\nA1:\n");
	for(i=0; i<r[0]; ++i)
	{
		for(j=0; j<c[0]; ++j)
		{
			a1[i][j]=1;
 
			if(count++%c[0]==0)
				puts("");
			else
				printf("");
			printf(" %d ",a1[i][j]);
		}
		count=0;
		puts("");
	}
 
	printf("\nA2:\n");
	for(i=0; i<r[1]; ++i)
	{
		for(j=0; j<c[1]; ++j)
		{
			a2[i][j]=1;
 
			if(count++%c[1]==0)
				puts("");
			else
				printf("");
			printf(" %d ",a2[i][j]);
		}
		count=0;
		puts("");
	}
 
	printf("\nA3:\n");
	for(i=0; i<r[2]; ++i)
	{
		for(j=0; j<c[2]; ++j)
		{
			a3[i][j]=1;
 
			if(count++%c[2]==0)
				puts("");
			else
				printf("");
			printf(" %d ",a3[i][j]);
		}
		count=0;
		puts("");
	}
 
	printf("\nA4:\n");
	for(i=0; i<r[3]; ++i)
	{
		for(j=0; j<c[3]; ++j)
		{
			a4[i][j]=1;
 
			if(count++%c[3]==0)
				puts("");
			else
				printf("");
			printf(" %d ",a4[i][j]);
		}
		count=0;
		puts("");
	}
 
	printf("\nA5:\n");
	for(i=0; i<r[4]; ++i)
	{
		for(j=0; j<c[4]; ++j)
		{
			a5[i][j]=1;
 
			if(count++%c[4]==0)
				puts("");
			else
				printf("");
			printf(" %d ",a5[i][j]);
		}
		count=0;
		puts("");
	}
 
	printf("\nA6:\n");
	for(i=0; i<r[5]; ++i)
	{
		for(j=0; j<c[5]; ++j)
		{
			a6[i][j]=1;
 
			if(count++%c[5]==0)
				puts("");
			else
				printf("");
			printf(" %d ",a6[i][j]);
		}
		count=0;
		puts("");
	}
 
	mult(a1, a2, result1, r[0], c[0], r[1], c[1]);
	mult(result1, a3, result2, r[0], c[1], r[2], c[2]);
	mult(result2, a4, result3, r[0], c[2], r[3],c[3]);
	mult(result3 , a5, result4, r[0],c[3],r[4],c[4]);
	mult(result4 , a6, result5, r[0],c[4],r[5],c[5]);
	printf("\nA1 x A2 x A3 x A4 x A5 x A6:\n");
	mult_result(result5 ,r[0],c[5]);
 
}
void mult(int matrix1[][10], int matrix2[][10], int result[][10], int r1, int c1, int r2, int c2)
{
	int i,j,k;
	for(i=0; i<r1; ++i)
	{
		for(j=0; j<c2; ++j)
			result[i][j]=0;
	}
	for(i=0; i<r1; ++i)
	{
		for(j=0; j<c2; ++j)
		{
			for(k=0; k<c1; ++k)
				result[i][j] += matrix1[i][k] * matrix2[k][j];
		}
	}
}
 
void mult_result(int result[][10],int r,int c)
{
	int i,j,count=0;
	for(i=0; i<r; ++i)
	{
		for(j=0; j<c; ++j)
		{
			if(count++%c==0)
				puts("");
			else
				printf("");
			printf(" %d ",result[i][j]);
		}
		count=0;
	}
}