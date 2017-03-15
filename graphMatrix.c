#include<stdio.h>
#include<malloc.h>
#include<ctype.h>

struct adjmat
{
	int v;
	int e;
	char **ar;
};

struct adjmat* initmat()
{
	int i,m,n;
	char u,v;

	struct adjmat *a = (struct adjmat*)malloc(sizeof(struct adjmat));

	printf("Enter The number of vertices And Edges\n");
	scanf("%d %d", &a->v, &a->e);

	a->ar = (char**)malloc(sizeof(char*) * a->v);

	for(i = 0; i < a->v; i++)
		a->ar[i] = (char*)malloc(sizeof(char) * a->v);

	for(m = 0; m < a->v; m++)
	{
		for(n = 0; n < a->v; n++)
			a->ar[m][n] = 'N';
	}

	for(i = 0; i < a->e; i++)
	{
		printf("Enter edges\n");
		scanf(" %c %c", &u, &v);

		u = toupper(u);
		v = toupper(v);

		m = u - 'A';
		n = v - 'A';

		a->ar[m][n] = 'Y';
		a->ar[n][m] = 'Y';
	}

return a;
}

void printmul(struct adjmat*p)
{
	int u, v;

	for(u = 0; u < p->v; u++)
	{
		for(v = 0; v < p->v; v++)
			printf(" %c", p->ar[u][v]);

		printf("\n");
	}

}

int main()
{
	struct adjmat *p = initmat();
	printmul(p);

return 0;
}
