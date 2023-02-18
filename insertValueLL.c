#include "headers.h"
#include "declarations.h"
void *insertValueLL(void *arg)
{
	Node *root,*temp; 
	int res,len=0,j,loc,data;
	printf("%s: Begin\n",__func__);
	root = (Node *)arg;
	if(!root)
	{
	 	printf("Linked LIst not Created yet\n");
	 	exit(EXIT_FAILURE);
	
	}
	temp =root;

	printf("1.Insert value for all element , 2. At any node  3. Reset all the values for all nodes\n");
	scanf("%d",&res);
	while(temp->next != NULL)
	{
		 len++;
		 temp = temp->next;
	}
	len++;
	if(res == 1)
	{ 
	       for( j=1 ; j<= len; j++)
	       {
	        	printf("Enter node %d data\n",j);
			scanf("%d",&data);
			root->data = data;
	                root =root->next; 
	       }
	}
	else if( res == 2)
	{
		printf("Enter the location and value of node\n");
		scanf("%d %d",&loc,&data);
		for( j=1; j< loc ; j++)
		{
                     root=root->next;
		}
		root->data = data;
	}
	else if(res == 3)
	{
	   	for(j=0 ; j< len ; j++)
		{
		   root->data =0;
		   root = root->next ;
		}
	}
        else
		printf("Invalid input\n");
        
	printf("%s: End\n",__func__);
	return (void *)arg;
}
