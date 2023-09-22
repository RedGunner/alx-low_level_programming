#ifndef LISTS_H
#define LISTS_H

#include <stdio.h> /* size_t, printf */
#include <stdlib.h> /* malloc */
#include <string.h> /* strdup */

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

#endif
