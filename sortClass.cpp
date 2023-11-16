#include "sortClass.h"

void mergeSortMain(int *massiv, int lenght)
{
      // разделяем главный массив на 2 части.
      int len1 = lenght / 2;
      int len2 = lenght - len1;
      int mass1[len1];
      int mass2[len2];

      // в массиве перебираем главный массив, и делим элементы на 1 и 2 массив.
      for (size_t i = 0; i < lenght; i++)
      {
            if(i < len1)
                  mass1[i] = massiv[i];
            else
                  mass2[i - len1] = massiv[i];
      }

      // сортируем части массива
      mergeSorted(mass1, len1);
      mergeSorted(mass2, len2);

      // складываем массивы.
      mergeMassive(massiv, mass1, len1, mass2, len2);
      
}
void mergeSorted(int *massiv, int len)
{
      // внутри медж сорта, используем бабл сорт.
      for (size_t i = 0; i < len; i++)
      {
           for (size_t j = 0; j < len; j++)
           {
                  if(massiv[i] < massiv[j])
                        std::swap(massiv[i],massiv[j]);
           }
      }
}
void mergeMassive(int *main, int *first, int len1, int *second, int len2)
{
      // создаем итераторы по 2 массивам
      int summator1 = 0;
      int summator2 = 0;
      int maxIteration = len1 + len2;

      // проходимся по главному массиву
      for (size_t i = 0; i <= maxIteration; i++)
      {
            // если второй элемент меньше первого, или первые элементы закончились
            if( (first[summator1] > second[summator2] && summator2 < len2) || summator1 == len1)
            {
                  // добавляем второй элемент в главный массив, и берем следующий второй элемент
                  main[i] = second[summator2];
                  summator2 ++;
            }
            else
            {     // иначе идем и добавляем первый элемент
                  main[i] = first[summator1];
                  summator1 ++;
            }            
      }
      
      
}

void bubbleSort(int *massiv, int lenght)
{
    for (size_t i = 0; i < lenght; i++)
    {
        for (size_t j = 0; j < lenght; j++)
        {
            if(massiv[i] < massiv[j])
            std::swap(massiv[i],massiv[j]);
        }
    }
    
}