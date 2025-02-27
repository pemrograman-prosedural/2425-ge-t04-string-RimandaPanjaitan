// 12S24049 - Ika Maria Manurung
// 12S24049 - Rimanda Santa Risa Panjaitan

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {

  char str[61];
  fgets(str, sizeof(str), stdin);

  size_t len = strlen(str);
  if (len > 0 && str[len-1] == '\n') {
    str [--len] = '\0';
    len --;
  }
  for (int i =0; i < len; i++) {
    printf ("%03d", (int) str[i]);
  }
  printf("013");
  return 0;
}
