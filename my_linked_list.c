#include <stdio.h>
#include <stdlib.h>

struct list {
    int data;
    struct list *next;
};

struct list *enter_linked_list()
{
    struct list *first = NULL, *tmp;
    int n;
    
    for (scanf("%d", &n); n; scanf("%d", &n)) {
        tmp = malloc(sizeof(struct list));
        tmp->data = n;
        tmp->next = first;
        first = tmp;
    }
    return first;
}

void print_linked_list(const struct list *lst)
{
    while (lst) {
        printf("%d\n", lst->data);
        lst = lst->next;
    }

}

void delit_linked_list(struct list *lst)
{
    while (lst) {
        struct list *tmp = lst;
        lst = lst->next;
        free(tmp);
    }
}

int main()
{
    struct list *str_list;
    str_list = enter_linked_list();
    print_linked_list(str_list);
    delit_linked_list(str_list);
    return 0;
}