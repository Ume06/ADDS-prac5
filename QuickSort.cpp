#include "QuickSort.h"
#include <iostream>

std::vector<int> QuickSort::sort(std::vector<int> list) {
  if (list.size() <= 2)
    return list;

  int pivot = 2;
  int slow_ptr = -1, fast_ptr = 0;

  for (fast_ptr; fast_ptr < pivot; fast_ptr++) {
    if (list[fast_ptr] < list[pivot]) {
      slow_ptr++;
      std::swap(list[slow_ptr], list[fast_ptr]);
    }
  }

  std::swap(list[slow_ptr + 1], list[pivot]);

  // sort before pivot

  // sort after pivot
  return list;
}

void QuickSort::quickSort(std::vector<int> &list, int left, int right) {
  
}