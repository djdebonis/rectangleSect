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
    int xMin;
    int xMax;
    int yMax;
    int yMin;
    vector<Point> allPoints;

public:
    explicit Rectangle(Point _topLeftPnt, int _height=0, int _width=0); 

    int getHeight() const; // accessor
    int getWidth() const; // accessor

    vector<Point> setRectanglePoints();
};
