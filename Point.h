#include <iostream>
using namespace std;

#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x;
    int y;

public:
    explicit Point(int _x = 0, int _y = 0);

    int getX() const; // accessor
    int getY() const; // accessor

    void setX(int _x); // mutator
    void setY(int _y); // mutator

    friend ostream & operator <<(ostream &out, const Point &pnt);

};

#endif //POINT_H
