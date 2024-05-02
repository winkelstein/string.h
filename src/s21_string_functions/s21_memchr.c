#include "../s21_string.h"

void *s21_memchr(const void *str, int c, s21_size_t n) {
  char *ans = S21_NULL;
  for (s21_size_t i = 0; i < n; i++)
    if (*((char *)str + i) == c) {
      ans = (char *)str + i;
      break;
    }
  return ans;
}
