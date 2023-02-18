#include "headers.h"
#include "declarations.h"
void *reverseLL(void *arg)
{
	Node * root,*newRoot,*temp,*temp1; 
	int res,i;
	printf("%s:Begin\n", __func__);

	root = (Node *)arg ;
	if(!root)
	{
		printf("LL not creted yet\n");
		exit(EXIT_FAILURE);
	}
	temp1 = root;

	while(root->next != NULL)
	{
	  root = root->next;
	}
	temp = newRoot = root;
	root = temp1;

	while(root != temp)
	{
		while(temp1->next != temp)
		{		
			temp1 = temp1->next ;
		}
		temp->next = temp1; 
		temp = temp1;
		temp1 = root;
	}
	temp->next =NULL;
	printf("%s:End\n", __func__);
	return (void *)newRoot;;
}
