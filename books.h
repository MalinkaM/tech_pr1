#pragma once
#include <fstream>
#include "books.h"
#include "keeper.h"
using namespace std;

class Books {
public:
    Books();
    virtual ~Books();
    virtual void p() = 0;  
};