#include <stdio.h>

struct list {
        int elem;
        struct list *next;
};

struct list *int_arr_to_list(int *arr, int len) 
{
    struct list *first = NULL, *last = NULL, *tmp;
    int i;
    for (i = 0; i < len; ++i) {
        tmp = malloc(sizeof(struct list));
        tmp->data = arr[i];
        tmp->next = NULL;
        if (last) {
            last->next = tmp;
            last = last->next;
        } else {
            first = last = tmp;
        }
    }
    return first;

    struct list *first = NULL, *tmp;
    int i;
    for (i = len - 1; i >= 0; --i) {
        tmp = malloc(sizeof(struct list));
        tmp->data = arr[i];
        tmp->next = first;
        first = tmp;
    }
    return first;
}

int int_list_sum(const struct list *lst)
{
    int sum = 0;
    const struct item *tmp = lst;
    while (tmp) {
        sum += tmp->data;
        tmp = tmp->next;
    }
    return sum;
}

int int_arr_to_list_for(const struct list *lst)
{
    int sum = 0;
    const struct list *tmp;
    for (tmp = lst; tmp; tmp = tmp->next) {
        sum += tmp->data;
    }
    return sum;
}

int int_arr_to_list_for_two(const struct list *lst)
{
    int sum = 0;
    const struct list *tmp;
    for (; lst; lst = lst->next) {
        sum += lst->data;
    }
    return sum;
}

int main(int argc, char const *argv[])
{

    return 0;
}