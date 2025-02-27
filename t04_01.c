// 12S24049 - Ika Maria Manurung
// 12S24049 - Rimanda Santa Risa Panjaitan

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

  char str1[61];
  fgets(str1, 61, stdin);
  str1[strcspn(str1, "\n")] = 0;

  if (strlen(str1) < strlen(str1) > 60){
    printf("invalid\n");
    return 0;
  }

  int x;
  char massage[21];

  for(x = 0; x < strlen(str1)/3; x++){
    char temp[4];
    strncpy(temp, str1 + x * 3, 3);
    temp[3] = 0;
    massage[x] = (char) atoi (temp);
  }
  massage[x] = 0;
  printf("%s\n", massage);

  return 0;
}

