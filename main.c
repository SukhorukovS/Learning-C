#include <stdio.h>

void string_copy(char *dest, const char *src) {
  int i;
  for(i = 0; src[i]; i++)
    dest[i] = src[i];
  dest[i] = 0;
}

int main() {
  enum { max_name_len = 64, max_group_len = 8 };

  struct student {
    char name[max_name_len];
    char sex;
    int year_of_birth;
    int major_code;
    int year;
    char group[max_group_len];
    float average;
  };

  // Example 1
  struct student st1;

  string_copy(st1.name, "Otlichnikov Vasiliy Sergeevich");
  st1.sex = 'm';
  st1.year_of_birth = 1995;
  st1.major_code = 231234;
  st1.year = 3;
  string_copy(st1.group, "231");
  st1.average = 4.792;

  // Example 2 during initialization
  struct student st2 = {
    "Otlichnikov Vasiliy Sergeevich",
    'm', 1995, 231234, 3, "231", 4.792
  };

  struct student *p;
  *p = st1;

  // To get fields' value from pointer
  int year = (*p).year;
  float average = p->average;
}
