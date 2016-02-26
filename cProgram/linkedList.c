// Linked list program

#include<stdio.h>
#include <stdlib.h>
typedef struct node * NODE;
struct node 
{
	int info;
	struct node *next;
};


//NODE first=NULL;
//NODE next=NULL;

// Function to get NODE

void displayMenu()
{
	printf("---------------------------------------------------------");
        printf("\n Pls. use below option to operate on link list \n\n");
        printf(" \n 1:  To INSERT NODE in begining of LINKED LIST");        
        printf(" \n 2:  To INSERT NODE in END of LINKED LIST");     
        printf(" \n 3:  To display NODE in Linked list");
        printf(" \n 9:  To EXIT this application \n ");
        printf("---------------------------------------------------------");
}


NODE getNode()
{
	NODE temp;
	temp = (NODE) malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("Memory allocation is failed");
		exit(0);
	}
	return temp;
} 

// delete a NODE

deleteNode(NODE node)
{
	free(node);
}

NODE insertNodeFrontSide(int info ,NODE first)
{

	NODE temp;
	temp=getNode();
      	temp->info=info;
      	temp->next=first;
//	printf("\n info is = %d inside function %s",temp->info,__FUNCTION__ );
	return temp;
}


NODE insertNodeBackSide(int info ,NODE first)
{
        NODE temp;
	temp=getNode();
	temp->info=info;
        if(first==NULL)
	{
        	first=temp;
		first->next=NULL;
	}
	else
	{
		temp->next=NULL;
		first->next=temp;
	}
//      printf("\n info is = %d inside function %s",temp->info,__FUNCTION__ );
        return first;
}


displayNode(NODE node)
{
	
	NODE temp;
	temp=node;	
 	int count=0;
	if(node==NULL)
	{
		printf("\n Linked list is empty");
	}	
	else
	{
	printf("\n--------------------------");
		while(temp!=NULL)
		{
			printf("\n Info is: %d",temp->info);
//			printf("\n Addressis  is : %u",node->next);
			temp=temp->next;	
			count ++;
		}
	}
		
	printf("\n--------------------------");
	printf("\n Number of element in LINKED LIST are: %d \n ",count);

}
main()
{
	
	int option, info;
	NODE first=NULL;
	NODE next= NULL;
	NODE previous=NULL;
//	NODE NEXT=NULL;

	displayMenu();	
//	scanf("%d",&option);
	while(1)
	{
	
		printf("\n Enter the option : ");
		scanf("%d",&option);
		if((option == 1) || (option == 2) || (option == 3) || (option == 4) || (option == 5) || (option == 9) )
		{	
	
			switch(option)
			{
				case 1:
					// Working fine...
					printf("\n Enter the info for linked list NODE from FRONT side: ");
					scanf("%d",&info);
					first=insertNodeFrontSide(info,first);
					break;
				case 2:
					// Need to validate this stuff...
					printf("\n Enter the info for linked list NODE from END side : ");
                                        scanf("%d",&info);
                                        next=insertNodeBackSide(info,first);
                                        break;

				case 3:
					// Working fine....
					displayNode(first);
					break;
				case 9:
					// Working fine ....
					printf("\n EXITING Application......");
					exit(0);
				default:
					printf("\n Pls. select right option to operate on LINKED LIST\n");
			}
		}
		else
		{
			printf("\n Pls. enter valid option ... THANKS ... \n");
			displayMenu();	
		}

	}	
}


