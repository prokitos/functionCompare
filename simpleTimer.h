#include <chrono>
#include <thread>
#include <math.h>
#include <cmath>
#include <iostream>
#include <iomanip>

class SimpleTimer
{
public:
    SimpleTimer()
    {
        startTime = std::chrono::high_resolution_clock::now();   
    };
    ~SimpleTimer()
    {
        endTime = std::chrono::high_resolution_clock::now();    
        timeCalc();
    };
    void Calculate()
    {
        timeCalc();
    };
private:
    // переменные которые хранят время
    std::chrono::time_point<std::chrono::_V2::system_clock> startTime, endTime;

    void printTime(double value, std::string timeName);
    void timeCalc();
};