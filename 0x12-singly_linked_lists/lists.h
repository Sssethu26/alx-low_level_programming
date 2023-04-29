#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list nod structure
 */
typedef struct list_s
{
	char *str;
	unsigned intnlen;
	struct list_s *next;
}
list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
size_t *add_node(list_t **head, const char *str);
size_t *aad_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
