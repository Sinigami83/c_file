enum {max_name_len = 64, max_group_len = 8};

int main()
{
    struct student {
        char name [max_name_len];
        char sex;
        int year_of_birth;
        int major_code;
        int year;
        char group[max_group_len];
        float average;
    };

    stuct student *group825;

    group825 = malloc(sizeof(*group825));
    /* (*group825).year = 25;  равносильны 
         group825->year = 25; */
}

