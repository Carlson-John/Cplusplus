#include <iostream>
#include "Info.h"
using namespace std;
int main()
{
    Info run;
    run.buildFile();
    run.getInfo();
    run.calcInfo();
    run.printInfo();
}
