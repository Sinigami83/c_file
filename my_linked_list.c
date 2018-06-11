#include <stdio.h>
#include <stdlib.h>

struct list {
    int data;
    struct list *next;    
};


/* enter linked_list */
struct list *enter_list()
{
    struct list *first = NULL;
    struct list *tmp;

    int n;
    
    for (scanf("%d", &n); n >= 0; scanf("%d", &n)) {
        tmp = malloc(sizeof(struct list));
        tmp->data = n;
        tmp->next = first;
        first = tmp;
    }
    return first;
}

/* print linked_list */
void print_list(struct list *lst)
{
    while (lst) {
        printf("%d\n", lst->data);
        lst = lst->next;
    }
}

/* delit linked list*/
void delit_list(struct list *lst)
{
    while (lst) {
        struct list *tmp = lst;
        lst = lst->next;
        free(tmp);
    }
}

int main()
{
    struct list *our_list;
    //struct list *tmp;

    our_list = enter_list();   
    print_list(our_list);
    delit_list(our_list);   
    
    return 0;
}