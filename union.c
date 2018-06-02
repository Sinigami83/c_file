union sample_un {
  int i;
  double k;
  char str[16];
}

union sample_un su {
  su.i;
  su.k;
  su.str
}

struct tag_mystruct
{
  int i;
  double d;
};

typedef struct tag_mystruct mystruct;

typedef struct tag_mystruct {
  int i;
  double d;
} mystruct;

mystruct s1, s2, s3;
mystruct *ptr;

#if 0

#else

#endif