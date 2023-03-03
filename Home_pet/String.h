#pragma once
#include <iostream>

//Zadanie 2
class String
{
protected:
    char* p;   
    int length; 

public:
    String(){}

    ~String() {
        delete[]p;

    }
};



class AnotherString : public String
{
public:
    AnotherString(const char* str) : String(str) {
    }
};