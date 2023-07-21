#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void deleteAlt(struct Node *head)
{
    if (head == NULL)
    return;
    struct Node *prev = head;
    struct Node *node = head->next;

    while (prev != NULL && node != NULL)
    {
        prev->next = node->next;
        free(node);
        prev = prev->next;
        if (prev != NULL)
            node = prev->next;
    }
}

