typedef int *intptr;
typedef int integral_number;

struct tag_mystruct {
    int i;
    double d;
};

typedef struct tag_mystruct {
    int i;
    double d;
} mystruct;

mystruct s1, s2, s3;
mystruct *ptr;

typedef enum intem {one = 1, two, three, four, five} numbers;

numbers = one;

