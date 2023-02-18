#include "headers.h"
#include "declarations.h"
void *mainMenu(void *arg)
{
	int res;
	Node *root = NULL;

	root = (Node *)arg;
	printf("%s:Begin\n", __func__);

	printf("Choose from the following:\n");
	printf("1.Create Link List\n");
	printf("2.Delete a node\n");
	printf("3.Find the Length\n");
	printf("4.Insert a node\n");
	printf("5.Insert valus at node\n");
	printf("6.Reverse  node\n");
	printf("7.Display element\n");
        scanf("%d",&res);

        if(res == 1)
	{
		root = (*fptr[res])((void *)root);
	}	
	else if(res > 1 && res < 8)
	{
		root = (*fptr[res])((void *)root);
	}
	else
		printf("\nWrong Choice\n");
	
       	printf("%s:End\n", __func__);

	return (void *)root;
}
