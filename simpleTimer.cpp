#include "simpleTimer.h"


void SimpleTimer::printTime(double value, std::string timeName)
{
    std::cout << std::fixed << std::setprecision(3) << value << " " + timeName;
}
void SimpleTimer::timeCalc()
{
    double temp1, temp2;

    // проверка на секунды
    temp1 = std::chrono::duration_cast<std::chrono::seconds>(endTime - startTime).count();
    temp2 = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();
    if(temp1 > 0)
    {
        std::round(temp2*1000)/1000;
        temp2 = temp2 / 10000;

        temp1 = temp1 + temp2;
        printTime(temp1,"second");
        return;
    }

    // проверка на милисекунды
    temp1 = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();
    temp2 = std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime).count();
    if(temp1 > 0)
    {
        std::round(temp2*1000)/1000;
        temp2 = temp2 / 10000;

        temp1 = temp1 + temp2;
        printTime(temp1,"milli-second");
        return;
    }

    // проверка на микросекунды
    temp1 = std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime).count();
    temp2 = std::chrono::duration_cast<std::chrono::nanoseconds>(endTime - startTime).count();
    if(temp1 > 0)
    {
        std::round(temp2*1000)/1000;
        temp2 = temp2 / 10000;
        
        temp1 = temp1 + temp2;
        printTime(temp1,"micro-second");
        return;
    }

    // проверка на наносекунды
    temp1 = std::chrono::duration_cast<std::chrono::nanoseconds>(endTime - startTime).count();
    if(temp1 > 0)
    {
        printTime(temp1,"nano-second");
        return;
    }

}