#include <string>


struct hashNode
{
    std::string key = "";
    std::string value = "";
};

class basicHashTable
{
public:
    basicHashTable(int len)
    {
        hashLen = len;

        hashNode* mass = new hashNode[len];
        massiv = mass;
    }

    void addElement(std::string key, std::string value);
    std::string getElement(std::string key);

private:
    int hashCalc(std::string key);
    int hashLen = 0;
    hashNode* massiv;
};





struct hashLL
{
    std::string key = "";
    std::string value = "";
    hashLL *next = nullptr;
};

class LLhashTable
{
public:
    LLhashTable(int len)
    {
        hashLen = len;

        hashLL* mass = new hashLL[len];
        massiv = mass;
    }

    void addElement(std::string key, std::string value);
    std::string getElement(std::string key);

private:
    int hashCalc(std::string key);
    int hashLen = 0;
    hashLL* massiv;
};

