#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));

  const int array_size = 10;
  int numbers[array_size];

  for (int i = 0; i < array_size; ++i) {
    numbers[i] = rand() % 50;
  }

  printf("random_arr:\n");
  for (int i = 0; i < array_size; ++i) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  int max = numbers[0];
  int min = numbers[0];
  int sum = 0;

  for (int i = 0; i < array_size; ++i) {
    if (numbers[i] > max) {
      max = numbers[i];
    }

    if (numbers[i] < min) {
      min = numbers[i];
    }

    sum += numbers[i];
  }

  double average = (double)sum / array_size;

  printf("MAX value: %d\n", max);
  printf("MIN value: %d\n", min);
  printf("AVR value: %.2f\n", average);

  return 0;
}
