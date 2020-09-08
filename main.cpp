#include "Point.h"
#include <iostream>
using namespace std;


int main(){
    cout << "This is the start of the program" << endl;

    int xPoint = 5;
    int yPoint = 5;
    Point tempPoint(xPoint,yPoint);

    cout << tempPoint << endl;

    return 0;
}
