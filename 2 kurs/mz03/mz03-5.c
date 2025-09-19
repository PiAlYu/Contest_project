#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <string.h>

enum
{
    SYSTEM_BASE = 10,
    STR_SIZE = 12
};

struct Elem
{
    struct Elem *next;
    char *str;
};

struct Elem *
dup_elem(struct Elem *head)
{
    if (head == NULL) {
        return NULL;
    }

    char *endptr = NULL;
    errno = 0;
    long number = strtol(head->str, &endptr, SYSTEM_BASE);
    if (errno || *endptr || endptr == head->str || number + 1 > INT_MAX || number < INT_MIN) {
        head->next = dup_elem(head->next);
        return head;
    }

    char *new_str = malloc(STR_SIZE);
    if (new_str == NULL) {
        head->next = dup_elem(head->next);
        return head;
    }
    snprintf(new_str, STR_SIZE, "%d", (int) number + 1);

    struct Elem *new_elem = calloc(1, sizeof(struct Elem));
    if (new_elem == NULL) {
        free(new_str);
        head->next = dup_elem(head->next);
        return head;
    }

    new_elem->next = head;
    new_elem->str = new_str;
    head->next = dup_elem(head->next);
    return new_elem;
}

// -----------------------------------
// Вспомогательные функции для отладки

void free_list(struct Elem *head) {
    while (head != NULL) {
        struct Elem *next = head->next;
        free(head->str);
        free(head);
        head = next;
    }
}

int main(void) {
    struct Elem *head = malloc(sizeof(struct Elem));
    head->str = strdup("10");
    head->next = malloc(sizeof(struct Elem));
    head->next->str = strdup("5x");
    head->next->next = malloc(sizeof(struct Elem));
    head->next->next->str = strdup("alpha");
    head->next->next->next = malloc(sizeof(struct Elem));
    head->next->next->next->str = strdup(" -03");
    head->next->next->next->next = NULL;

    head = dup_elem(head);

    struct Elem *curr = head;
    while (curr != NULL) {
        printf("\"%s\" ", curr->str);
        curr = curr->next;
    }
    printf("\n");

    free_list(head);
    return 0;
}
