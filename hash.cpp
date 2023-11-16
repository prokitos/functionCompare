#include "hash.h"
#include <math.h>


int basicHashTable::hashCalc(std::string key)
{ 
    int resKey = 0;
    int chislo = 0;
    int j = 1;

    // находим численное представление ключа. делаем множители чтобы aab не было равно baa.
    for(auto i : key)
    {
        chislo += i * j;
        j ++;
    }

    // находим число кнута
    double knootNum = (sqrt(5) - 1) / 2;

    // вычисляем по формуле
    resKey = std::floor(hashLen * std::abs(chislo * knootNum));

    // приводим число в наш диапазон
    resKey = resKey % hashLen;

    return resKey;
};

void basicHashTable::addElement(std::string key, std::string value)
{
    int pos = hashCalc(key);
    int counter = 0;        // для слишком больших коллизий. если больше 5 перемешений то выкидывать.
    

    while(massiv[pos].key != "")
    {
        pos ++;
        counter ++;

        if(pos > hashLen)
        pos = 0;

        if(counter == 5)
        break;
    }

    massiv[pos].value = value;
    massiv[pos].key = key;
};

std::string basicHashTable::getElement(std::string key)
{
    int pos = hashCalc(key);
    std::string value = "NULL";
    int counter = 0;        // для слишком больших коллизий. если больше 5 перемешений то выкидывать.

    while(massiv[pos].key != key)
    {
        pos ++;
        counter ++;

        if(pos > hashLen)
        pos = 0;

        if(counter == 5)
        return value;
    }

    if(massiv[pos].key == key)
    value = massiv[pos].value;

    return value;
};















int LLhashTable::hashCalc(std::string key)
{ 
    int resKey = 0;
    for(auto i : key)
    {
        resKey += i;
    }

    resKey = resKey % hashLen;
    return resKey;
};

void LLhashTable::addElement(std::string key, std::string value)
{
    int pos = hashCalc(key);

    // если самая первая нода пустая, то просто меняем в ней значения
    if (massiv[pos].key == "" || massiv[pos].value == "")
    {
        massiv[pos].key = key;
        massiv[pos].value = value;
        return;
    }

    // если в связном списке только 1 нода занята
    if(massiv[pos].next == nullptr)
    {
        hashLL *newLL = new hashLL();
        newLL->key = key;
        newLL->value = value;
        massiv[pos].next = newLL;
        return;
    }
    // если в связном списке больше 1 ноды
    else
    {
        hashLL *newLL = massiv[pos].next;

        if(newLL->next != nullptr)
        while (newLL->next != nullptr || newLL->next != nullptr)
        {
            newLL = newLL->next;
        }
        
        hashLL *newNode = new hashLL();
        newNode->key = key;
        newNode->value = value;
        newLL->next = newNode;
    }


};

std::string LLhashTable::getElement(std::string key)
{
    int pos = hashCalc(key);
    std::string value = "NULL";
    bool find = false;

    // если в первой ноде массива совпадает ключ, то значение найдено
    if(massiv[pos].key == key)
    {
        value = massiv[pos].value;
        find = true;
    }

    // если значение не найдено в первой ноде
    if(find == false)
    {   
        // если у этого этого элемента массива есть несколько нод
        if(massiv[pos].next != nullptr)
        {
            hashLL *newLL = massiv[pos].next;
            while (newLL->key != "" || newLL->value != "")
            {
                if(newLL->key == key)
                {
                    value = newLL->value;
                    break;
                }

                newLL = newLL->next;
            }
            
        }
    }

    return value;
};

