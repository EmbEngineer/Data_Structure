#include "headers.h"
#include "declarations.h"
void *findLengthLL(void *arg)
{
	Node *root;
	int len=0;
	printf("%s:Begin\n", __func__);
	
	root = (Node *)arg;
        if(!root)
        {
                printf("LL not creted yet\n");
                exit(EXIT_FAILURE);
        }

	while(root->next != NULL)
	{
		len++;
		root = root->next;
	}
	++len;
        printf("length :%d\n", len);

	printf("%s:End\n", __func__);
	return (void *)arg;
}
