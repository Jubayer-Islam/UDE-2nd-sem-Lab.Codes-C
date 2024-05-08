#include <stdio.h>
#include <stdlib.h>

typedef struct nodestruct
{
	int data; //The data of the node. Just an integer for simplicity.
	struct nodestruct *next; //Pointer to the next node.
} node;


node *head = NULL; //more convenient than writing ‘struct nodestruct *head’ //set to NULL as the list is empty initially

void findBigger(int num)
{
    int found=0;
    if(head==NULL){printf("the list is empty: ");}
    else
    {
    for(node *n=head; n!=NULL; n=n->next)
    {
       if(n->data>num)
       {
           found++;
       }
    }
    printf("no of values in the list which are bigger than %d is : %d",num,found);
    }
}

//calculates the sum of all the elements in the list and prints it
void listsum()
{
if(head==NULL){printf("the list is empty: ");}
else
{
int sum=0;
for(node *n=head;n!=NULL;n=n->next)
{sum+=(n->data);}
printf("\n the sum is: %d",sum);
}
}

//function displays the values of all nodes in the list
void display()
{
	// get pointer of the next node after every iteration.
	// if it is NULL, the end of the list is reached
	for (node *n = head; n != NULL; n=n->next)
		{printf("%d ", n->data);} //print data element of n
		listsum();
}

//function counts the number of nodes
int size()
{
	int count = 0;
	for (node *n = head; n != NULL; n=n->next)
		count++; //increment count for each node of the list
	return count;
}

//creates a new node element, assigns the values,
//returns a pointer to the new node
node *newElement(int num, node *next)
{
	node *newnode;
	// allocate new memory that is big enough to store a variable
	// of type node. Point newnode tto the new memory
	newnode = (node *)malloc(sizeof(node));
	//initialize fields of the new node
	newnode->data = num;
	newnode->next = next;
	return newnode;
}

//function insert a node. num is used to find the insert position
void insert(int num)
{
	node *currp = head; //pointer to current node
	if(head == NULL)		//list is empty, first element
		head = newElement(num, NULL);
	else if(num < head->data) 	     //num is smaller then first value
		head = newElement(num, head);// -> new node becomes first
	else	// num is bigger than the first node (or equal)
	{
		// Go through all nodes of the list
		// while the data of the next node is less than num.
		// The loop ends when either num is bigger than the
		// data of the next node or the last node is reached
		currp = head;
		while(currp->next != NULL)
		{
			if(currp->next->data < num)
				currp = currp->next;
			else // data of next node is bigger than num: end loop
				break;
		}
		// insert the new node after the node pointed to by currp
		currp->next = newElement(num, currp->next);
	}
}

//function deletes a node from our linked list
//returns 1 if a node was deleted and 0 otherwise
int delete(int num)
{
	node *currp = head; //current node
	node *prev;		//previous node
	while(currp != NULL)
	{
		//we found the node with data value num: the node pointed
		//to by currp will be deleted
		if(currp->data == num)
		{
			//the node to delete is the first one: The second
			//node becomes first
			if(currp == head)
				head = currp->next;
			//Otherwise, set the next pointer of the previous node
			//to the next node of the node pointed to by currp
			else
				prev->next = currp->next;

			free(currp); //delete the node from memory, otherwise a dangling pointer, garbage i think
			return 1;
		}
		//element not found yet, go further through the list
		else
		{
			//advance to the next node and remember the current
			//node in prev, this actually should be the first if case, but whatever
			prev = currp;
			currp = currp->next;
		}
	}
	//element is not found in the list
return 0;
}


int main()
{
	int choice;
	int num;
	head = NULL;
	while(1)
	{
		printf("\nLinkedlist Operations\n");
		printf("--------------\n");
		printf("0.Find no. of bigger values than: \n");
		printf("1.Insert\n");
		printf("2.Display\n");
		printf("3.Size\n");
		printf("4.Delete\n");
		printf("5.Exit\n");
		printf("Please enter your choice: ");

		if(scanf("%d", &choice)<=0)
		{
		    //if the user did not enter an integer, exit
		    printf("Enter only an integer\n");
		    exit(0);
		}
		else
		{
		    //Depending on the choice of the user, the program will
		    //use one of the list functions to manipulate the list
		    switch(choice)
		    {
            case 0: // find smaller
		        printf("Enter lower limit: ");
		        scanf("%d", &num);
		        findBigger(num);
		        break;
		    case 1: // Insert
		        printf("Enter data value to be inserted: ");
		        scanf("%d", &num);
		        insert(num);
		        break;
		    case 2: // Display
		        if(head == NULL)
		            printf("The list is empty\n");
		        else
		        {
		            printf("The data values in the list are: ");
		            display();
		            printf("\n");
		        }
		        break;


		    case 3: // Size
		        printf("Size of list is: %d\n", size());
		        break;
		    case 4: // Delete
		        if(head == NULL)
		            printf("The list is empty\n");
		        else
		        {
		            printf("Enter the value to be deleted: ");
		            scanf("%d", &num);
		            if(delete(num))
		                printf("%d deleted!\n", num);
		            else
		                printf("%d not found in list!\n", num);
		        }
		        break;
		    case 5: // Exit
		        return 0;
		    default:
		        printf("Invalid option!\n");
		    }
		}
	}
	return 0;
}

