struct item *int_array_to_list(int *arr, int len)
{
    struct item *first = NULL, *tmp;
    int i;
    for (i = lent - 1; i >= 0; i--) {
        tmp = malloc(sizeof(struct item));
        tmp->data = arr[i];
        tmp->next = NULL;
        first = tmp;
        }
    }
    return first;
};

int main()
{
    struct item {
        int data;
        struct  item *next;
    };
    return 0;
}