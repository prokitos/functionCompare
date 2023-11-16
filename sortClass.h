#include <cmath>
#include <iostream>
#include <algorithm>

// сортировка слиянием log n
void mergeSortMain(int *massiv, int lenght);
void mergeSorted(int *massiv, int len);
void mergeMassive(int *main, int *first, int len1, int *second, int len2);

// пузырьковая сортировка n^2
void bubbleSort(int *massiv, int lenght);