#include <stdio.h>
#include <stdlib.h>

int printer(int ray[], int len);
double avgCalc(int ray[], int len);
int copier(int *og, int *next, int len);

int main() {
  printf("Good News Everyone!\n");
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int length = 10;
  int cop[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  printer(arr, length);
  printf("avgCalc: %lf\n", avgCalc(arr, length));
  printer(arr, length);
  copier(arr, cop, length);
  printf("Copied\n");
  printer(cop, length);
  return 0;
}

int printer(int ray[], int len) {
  int i;
  printf("[ ");
  for (i = 0; i < len; i++) {
    printf("%d ", ray[i]);
  }
  printf("]\n");

  return 0;
}

double avgCalc(int ray[], int len) {
  double total = 0;
  int i;
  for (i = 0; i < len; i++) {
    total += ray[i];
  }

  return (total / len);
}

int copier(int *og, int *next, int len){
    int i;
    for(i = 0; i < len; i++){
        *next = *og;
        next++;
        og++;
    }
    return 0;
}
