#include "Rectangle.h"

Rectangle::Rectangle(Point _topLeftPoint, int _height, int _width){
    topLeftPoint = _topLeftPoint;
    height = _height;
    width = _width;
    xMin = topLeftPoint.getX();
    xMax = xMin + width;
    yMax = topLeftPoint.getY();
    yMin = yMax - height;

    // filling in the vector with all points of the rectangle
    allPoints.push_back(topLeftPoint);
    // points are assigned in clockwise order, then pushed back into vector
    for(int i = 0; i < 3; i++){
        Point tempPoint;
        // if it's the top right point
        if (i == 0){
            int tempX = (topLeftPoint.getX() + width);
            int tempY = (topLeftPoint.getY());
            tempPoint.setX(tempX);
            tempPoint.setY(tempY);
        }
        // if it's the bottom right point
        else if (i == 1){
            int tempX = (topLeftPoint.getX() + width);
            int tempY = (topLeftPoint.getY() - height);
            tempPoint.setX(tempX);
            tempPoint.setY(tempY);
        }
        // if it's the bottom left point
        else if (i == 2){
            int tempX = (topLeftPoint.getX());
            int tempY = (topLeftPoint.getY() - height);
            tempPoint.setX(tempX);
            tempPoint.setY(tempY);
        }
        allPoints.push_back(tempPoint);
    }

}
int Rectangle::getHeight() const{
	return height;
}
int Rectangle::getWidth() const{
	return width;
}
int Rectangle::getYMin() const{
	return yMin;
}
int Rectangle::getYMax() const{
	return yMax;
}
int Rectangle::getXMin() const{
	return xMin;
}
int Rectangle::getXMax() const{
	return xMax;
}
vector<Point> Rectangle::getRectanglePoints(){
	return allPoints;
}
