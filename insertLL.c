#include "headers.h"
#include "declarations.h"
void *insertLL(void *arg)
{
	Node  *root,*temp1,*temp2; 
	int res,i;
	printf("%s:Begin\n", __func__);

	root = (Node *)arg ;
        if(!root)
        {
                printf("LL not creted yet\n");
                exit(EXIT_FAILURE);
        }

	printf("Where u want to insert the node :\n");
	printf("1:-At last   2:-Any Place");
	scanf("%d",&res);
        if(res == 1)
		goto LAST;
        else if(res>2 || res == 0)
	{
		printf("Invalid choise!!");
		exit(EXIT_FAILURE);
	}
        printf("Enter location to insert:");
	scanf("%d",&res);
	temp1 = root;
	temp2 = (Node *)malloc(sizeof(Node));
        if(temp2 == NULL)
        {
       		perror("malloc");
       		exit(EXIT_FAILURE);
        }
  
	for(i=1; i< res-1 ; i++)
	{
		temp1 = temp1->next;
	
	}
	temp2->next  = temp1->next ;
	temp1->next = temp2;

	return arg;

LAST:
       temp2 = (Node *)malloc(sizeof(Node));
       if(temp2 == NULL)
       {
       		perror("malloc");
       		exit(EXIT_FAILURE);
       }
       while(root->next != NULL)
       {
       		root=root->next;
       }
       root->next = temp2;
       temp2->next = NULL;

	printf("%s:End\n", __func__);
	return arg;
}
