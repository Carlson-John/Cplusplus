#ifndef INFO_H_INCLUDED
#define INFO_H_INCLUDED

#include <string>
using namespace std;
class Info{

public:
    void buildFile();
    void getInfo();
    double calcInfo();
    void printInfo();
private:
    double hours;
    float wage,total;


string file,firstname,lastname;




};

#endif // INFO_H_INCLUDED
