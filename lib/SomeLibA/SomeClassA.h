#ifndef SOME_CLASS_A
#define SOME_CLASS_A

class SomeClassA
{
private:
    const char* name;
    int prepareNumber();

public: 
    SomeClassA(const char* n);
    void someMethodA();
    int getANumber();
};

#endif