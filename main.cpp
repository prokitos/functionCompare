#include <cmath>
#include <iostream>
#include <algorithm>
#include <numeric>

#include "simpleTimer.h"
#include "hash.h"
#include "sortClass.h"

void consoleClear()
{

    for (short i = 0; i < 10; i++)
    {
        std::cout << "\t\n"; 
    }
    
}


int main()
{
    consoleClear();

    //SimpleTimer simptim;


    // хэш таблица с крутой функцией и обработкой коллизий
    // 26-29 микросекунд без коллизий.
    // basicHashTable basic = basicHashTable(100);
    // basic.addElement("aaab","anabadon");
    // basic.addElement("aaba","ayaya bababyka");
    // basic.addElement("abaa","abbadon alo");
    // basic.addElement("baaa","baaa kakoi telek");
    // basic.getElement("baaa");
    

    // хэш таблица со связным списком
    // 31-37 микросекунд. не зависит от коллизий.
    // LLhashTable advanced = LLhashTable(100);
    // advanced.addElement("arzamas","anabadon");
    // advanced.addElement("kiborg","ayaya bababyka");
    // advanced.addElement("lampodatti","abbadon alo");
    // advanced.addElement("georg","baaa kakoi telek");
    // advanced.getElement("georg");







    //int mass[10]{4,5,7,2,9,4,6,8,1,0};
    // bubble sort   4.5 - 5.5 микро секунд
    // merge  sort   4.5 - 6.5 микро секунд

    //int mass[30]{2,5,0,4,7,3,2,6,7,4,1,7,8,3,1,4,7,4,3,2,7,4,3,6,5,4,9,0,3};
    // bubble sort   7.7 - 8.7 микро секунд
    // merge  sort   6.7 - 7.7 микро секунд
    
    
    //bubbleSort(mass, std::size(mass));
    //mergeSortMain(mass, std::size(mass));
    


    



    return 0;
}

