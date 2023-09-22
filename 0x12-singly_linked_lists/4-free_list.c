#include "lists.h"

/**
 * free_list - free linked list
 * @head: linked list
 */

void free_list(list_t *head)
{



	list_t *ptr;

        if (head == NULL) 
                return;

        while (head != NULL) 
        {
              ptr = head;
              head = head->next; 
              free(ptr->str); 
              free(ptr);
        }
}
/**
 * another way using temp pointer
 *
 *      list_t *ptr;
 *
 *	if (head == NULL) // account for no linked list
 *		return;
 *
 *	while (head != NULL) // have ptr keep track of head node and free
 *	{
 *		ptr = head;
 *		head = head->next; // move to next node while ptr frees prior
 *		free(ptr->str); // free malloced strings
 *		free(ptr);
 *	}
 */
