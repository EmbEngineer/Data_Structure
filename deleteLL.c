#include "headers.h"
#include "declarations.h"
void *deleteLL(void *arg)
{
	Node * root,*temp1,*temp2; 
	int res,i;
	printf("%s:Begin\n", __func__);
    
	root = (Node *)arg ;
    	if(!root)
        {
                printf("LL not creted yet\n");
                exit(EXIT_FAILURE);
        }

	printf("Which node u want to delete :\n");
	printf("1:-At last   2:-Any Place\n");
	scanf("%d",&res);
        if(res == 1)
		goto LAST;
        else if(res>2 || res == 0)
	{
		printf("Invalid choise!!\n");
		exit(EXIT_FAILURE);
	}
        printf("Enter location to delete:\n");
	scanf("%d",&res);
	temp1 = root;
  
	for(i=1; i< res-1; i++)
	{
		temp1 = temp1->next;
	
	}
	temp2 =temp1->next;
	temp1->next = temp1->next->next;
	free(temp2);
	printf("%s:End\n", __func__);
	return arg;

LAST:
       while(root->next->next != NULL)
       {
       		root=root->next;
       }
       free(root->next);
       root->next = NULL;

	printf("%s:End\n", __func__);
	return arg;
}
