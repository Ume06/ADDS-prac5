#include <vector>
#include <iostream>
#include "QuickSort.h"
#include "BubbleSort.h"

void print(std::vector<int> list) {
  for (int i = 0; i < list.size(); i++) {
    std::cout << list[i] << " ";
  }
  std::cout << std::endl;
}

int main() {
  QuickSort qs;
  BubbleSort bs;
  std::vector<int> unsorted = {5, 2, 4, 6, 1, 3};
  std::vector<int> bs_sorted = bs.sort(unsorted);
  std::vector<int> qs_sorted = qs.sort(unsorted);

  print(unsorted);
  print(bs_sorted);
  print(qs_sorted);

  return 0;
}