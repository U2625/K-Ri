#include <stdio.h>
#define MAXLINE 1000

int bgetline(char line[], int lim);
void copy(char to[], char from[]);

int main(void)
{
  int len;
  int max;
  char line[MAXLINE];
  char maxline[MAXLINE];

  max = 0;
  while ((len = bgetline(line, MAXLINE)) > 0)
  {
      if (len > max)
      {
      max = len-1;
      copy(maxline, line);
      }
  }
  if (max > 0)
    printf("Length is: %d for %s", max, maxline);
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
