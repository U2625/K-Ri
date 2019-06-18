#include <stdio.h>
#define MAXLINE 1000

int bgetline(char line[], int lim);

int main(void)
{
  int len;
  char line[MAXLINE];

  while ((len = bgetline(line, MAXLINE)) > 0)
  {
      if (len > 80)
      
	      printf("Length is: %d for %s", len, line);
  }
  return 0;
}

int bgetline(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n')
  {
    s[i] = c;
    ++i;
  }  
  s[i] = '\0';
  return i;
}
void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}

