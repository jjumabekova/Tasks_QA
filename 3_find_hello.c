#include <stdio.h>

int findDuplicateChar(const char *str) {
  int characters[256] = {0};

  for (int i = 0; str[i] != '\0'; ++i) {
    char currentChar = str[i];

    if (characters[currentChar] == 1) {
      return currentChar;
    }

    characters[currentChar] = 1;
  }

  return 0;
}

int main() {
  const char *word = "Hello";

  char duplicateChar = findDuplicateChar(word);

  if (duplicateChar != 0) {
    printf("Repeating char: %c\n", duplicateChar);
  } else {
    printf("Repeating char not found\n");
  }

  return 0;
}
