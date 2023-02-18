#include "headers.h"
#include "declarations.h"
void *createLL(void *arg)
{
	Node *root = NULL,*temp;
	int len = 0,i;
	printf("%s:Begin\n", __func__);
	
        root = (Node *)malloc(sizeof(Node));
        if(!root)
	{
		perror("malloc");
	        exit(EXIT_FAILURE);
	}
        temp = root;

	printf("Enter Length of linked list to create\n");
	scanf("%d", &len);

        for(i = 1; i < len ; i++)
	{
        	temp->next  = (Node *)malloc(sizeof(Node));
       		if(!temp)
		{	
			perror("malloc");
	        	exit(EXIT_FAILURE);
		}
	        temp = temp->next;
	}
        temp->next = NULL;
       

	printf("%s:End\n", __func__);
	return (void *)root;
}
