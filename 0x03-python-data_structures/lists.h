#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: Interger
 * @next: Points to the next node
 * Description: Singly linked list node structure for project
 */

typedef struct listint_s
{
int n:
struct listint_s *next:
listint_t:
}
size_t print_listint(const listint_*h):
listint_t *add_nodeint_end(listint_t **head, const int n):
void free_listint(listint_t *head):
int is_palindrome(listint_t **head):

#endif
