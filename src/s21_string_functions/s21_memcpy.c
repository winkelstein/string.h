#include "../s21_string.h"

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  void *start = (void *)dest;

  for (s21_size_t i = 0; i < n; i++) {
    *(unsigned char *)dest = *(unsigned char *)src;
    dest++;
    src++;
  }

  return start;
}
