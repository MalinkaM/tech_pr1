#pragma once
#include <fstream>
using namespace std;

class Books {
public:
    Books();
    virtual ~Books();
    virtual void p() = 0;  
};