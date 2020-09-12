#include "Point.h"
#include <vector>
using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H

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
	int getYMin() const; // accessor
	int getYMax() const; //accessor
	int getXMin() const;
	int getXMax() const;
    vector<Point> getRectanglePoints(); // accessor
};

#endif //RECTANGLE_H
