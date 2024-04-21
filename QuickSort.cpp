#include "QuickSort.h"
#include <iostream>

std::vector<int> QuickSort::sort(std::vector<int> list) {
  quickSort(list, 0, list.size() - 1);
  return list;
}

void QuickSort::quickSort(std::vector<int> &list, int left, int right) {
  if (left < right) {
        // Partition the array and get pivot index
        int pivot_index = partition(list, left, right);
        
        // Recursively sort the two sub-arrays
        quickSort(list, left, pivot_index);
        quickSort(list, pivot_index + 1, right);
    }
}

int QuickSort::partition(std::vector<int> &list, int left, int right) {
    int pivot_index;
    if (right - left + 1 >= 3) {
        pivot_index = left + 2;
    } else {
        pivot_index = right;
    }
    int pivot = list[pivot_index];

    while (left <= right) {
        // Move left pointer to the right
        while (list[left] < pivot) {
            left++;
        }
        // Move right pointer to the left
        while (list[right] > pivot) {
            right--;
        }
        
        if (left <= right) {
            // Swap elements at left and right pointers
            std::swap(list[left], list[right]);
            left++;
            right--;
        }
    }

    // After the loop, right is the last position of the smaller or equal element
    return right;
}