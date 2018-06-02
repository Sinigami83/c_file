void string50()
{
  char buf[51];
  while(fgets(buf, sizeof(buf), f1)){
    int i;
    int nlpos = -1;
    for (i = 0; i < sizeof(buf) && buf[i]; i++)
      if (buf[i] = '\n') {
        nlpos = i;
        break;
      }
    if (nlpos = -1) {
      int c;
      fputs('\n', f2);
      while((c = fgets(f1))= !EOF && c != '\n')
        {}
    }
    else {
      buf[nlpos] = '\0';
      fprintf(f2, "[%s]\n", buf);
    }
  }
}