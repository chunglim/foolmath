#include <stdio.h>
#include <string.h>

#define isodd(n)	((n) % 2)
#define isempty(n)	(!(n))
#define MAXDIM		15

void initialize(int [][MAXDIM+1], int);
void matrix(int [][MAXDIM+1], int);

int main()
{
	int i, j, n, a[MAXDIM+1][MAXDIM+1];

	do {
		printf("enter dimension <odd number 1-%d>: ", MAXDIM);
		scanf("%d", &n);
	} while (!isodd(n) || n > MAXDIM);
	initialize(a, n);
	matrix(a, n);
	int	sumrow,
		sumcol[n+1];
	memset(sumcol, 0, sizeof (int) * (n + 1));
	for (i = 1; i <= n; i++) {
		sumrow = 0;
		for (j = 1; j <= n; j++) {
			printf("%*d", j == 1 ? 4 : 5, a[i][j]);
			sumrow += a[i][j];
			sumcol[j] += a[i][j];
		}
		printf("%6d\n", sumrow);
	}
	puts("\n");
	for (j = 1; j <= n; j++)
		printf("%*d", j == 1 ? 4 : 5, sumcol[j]);
	puts("\n");
	return 0;
}

void initialize(int a[][MAXDIM+1], int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			a[i][j] = 0;
}

void matrix(int a[][MAXDIM+1], int n)
{
	int i, j, index;

	i = 1; j = (n + 1) / 2;
	a[i][j] = 1;
	for (index = 2; index <= n * n; index++) {
		j++; i--; /* normal case */
		if (i < 1)
			if (j <= n)
				for (i = n; !isempty(a[i][j]); i--)
					; /* overflow top go bottom */
			else { /* top right corner go next row same column */
				i += 2;
				j--;
			}
		else
			if (j > n) /* overflow right go first column */
				j = 1;
			else
				if (!isempty(a[i][j])) { /* next occupied go next row same column */
					i += 2;
					j--;
				}
		a[i][j] = index;
	}
}
