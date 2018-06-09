#define IF if(
#define THEN ) {
#define ELSE } else {
#define FI }

#define MAX(A,B) ((A) > (B) ? (A) : (B))

IF a > b THEN
    printf("msg_1\n");
    b = a;
ELSE
    printf("msg_2\n", );
    a = b;
FI
#ifndef NUMBER_DEF
#define NUMBER_DEF 1
#endif

#if NUMBER_DEF /* 0 - close,  1 - open */ 
void sort(itn *a, int n)
{
    /* */
}
#else

#endif