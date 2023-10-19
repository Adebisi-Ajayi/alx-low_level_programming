#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdlib.h>
/**
 * struct list_s - singly linked
 * @str: malloc string
 * @len: length of the string
 * @next: poinmts tothe next node
 * Description: singly linked node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
size_t list_len_recursion(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void adebisi(void) __attribute__((constructor));
#endif
