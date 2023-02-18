#include "headers.h"
#include "declarations.h"
void *displayLL(void *arg)
{
	Node * root, *temp;
	int i =1;

	printf("%s:Begin\n", __func__);
        root = (Node *)arg ;
        if(!root)
        {
                printf("LL not creted yet\n");
                exit(EXIT_FAILURE);
        }

        temp = root;
	while(temp->next != NULL)
        {
		printf("%d :- %d\n",i,(temp->data));
		++i;
                temp = temp->next;
        }
		printf("%d :- %d\n",i,(temp->data));

	return arg;
}
