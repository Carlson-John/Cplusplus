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
    double hours,overtime;
    float wage,total;
    double set_hours=40;


string file,firstname,lastname;




};

#endif // INFO_H_INCLUDED
