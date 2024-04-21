#include "Sort.h"
#ifndef QUICKSORT_H
#define QUICKSORT_H

class QuickSort : public Sort {
  public:
    std::vector<int> sort(std::vector<int> list);
    void quickSort(std::vector<int> &list, int left, int right);
    // int partition(std::vector<int> &list, int left, int right);
};

#endif