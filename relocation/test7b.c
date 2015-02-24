#include<stdio.h>
int begin(int space, int n)
{
	for (int k = 1; k <= n; k++)
        {
                for (int c = 1; c <= space; c++)
                        printf(" ");

                space--;

                for (int c = 1; c <= 2*k-1; c++)
                        printf("*");

                printf("\n");
        }

	return space;
}

int end(int space, int n)
{
	for (int k = 1; k <= n - 1; k++)
        {
                for (int c = 1; c <= space; c++)
                        printf(" ");

                space++;

                for (int c = 1 ; c <= 2*(n-k)-1; c++)
                        printf("*");

                printf("\n");
        }

	return space;
}











