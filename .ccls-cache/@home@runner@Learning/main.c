#include <stdio.h>

void squeeze(char s[], int c);
void squeeze2(char s[], char ss[]);

int string_length(const char *str);

int main()
{
  int length;
  char str[] = "Big string";
  char letter = 'g';
  char str2[] = "pa";

  length = string_length(&str[0]);

  printf("%i\n", length);

  squeeze2(str, str2);

  printf("%s\n", str);

  length = string_length(&str[0]);

  printf("%i\n", length);
}

void squeeze(char s[], int c)
{
  int i,  j;

  for (i = j = 0; s[i] != '\0'; i++){
    if (s[i] != c){
      s[j++] = s[i];
    }       
  }
        
  s[j] = '\0';
}

void squeeze2(char s[], char ss[])
{
  int i, j, k;

  for (i = 0; ss[i] != '\0'; i++){
    for (k = j = 0; s[j] != '\0'; k++){
      if(ss[i] != s[k]) {
        s[j++] = s[k];
      }
    }        
  }
        
  s[j] = '\0';
}

int string_length(const char *str) {
  int i;
  for (i = 0; str[i]; i++) 
    {}

  return i;
}