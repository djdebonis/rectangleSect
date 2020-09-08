#include "Point.h"
#include <vector>
using namespace std;

#ifndef DEBONISDAVID_PA01
#define DEBONISDAVID_PA01

class Rectangle {
private:
    Point topLeftPoint;
    int height;
    int width;

public:
    explicit Rectangle(Point _topLeftPnt, int _height=0, int _width=0);

    int getHeight() const; // accessor
    int getWidth() const; // accessor

    vector<Point> setRectanglePoints();
};
