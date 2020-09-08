#include "Point.h"
#include <iostream>
using namespace std;

ostream operator<<(const ostream & out, const Point &pnt){
    out << "(" << pnt.getX() << ", " << pnt.getY() << ")";
    return out;
}

int main(){
    cout << "This is the start of the program" << endl;

    int xPoint = 5;
    int yPoint = 5;
    Point tempPoint{xPoint,yPoint};

    cout << tempPoint << endl;

    return 0;
}
