#include "Rectangle.h"

Rectangle::Rectangle(Point _topLeftPoint, int _height=0, int _width=0){
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
        point tempPoint();
        // if it's the top right point
        if (i == 0){
            tempPoint.setX(_x=(topLeftPoint.getX() + width));
            tempPoint.setY(_y=(topLeftPoint.getY()));
        }
        // if it's the bottom right point
        else if (i == 1){
            tempPoint.setX(_x=(topLeftPoint.getX() + width));
            tempPoint.setY(_y=(topLeftPoint.getY() - height));
        }
        // if it's the bottom left point
        else if (i == 2){
            tempPoint.setX(_x=(topLeftPoint.getX()));
            tempPoint.setY(_y=(topLeftPoint.getY() - height));
        }
        points.push_back(tempPoint);
    }

}
int Rectangle::getHeight(){
	return height;
}
int Rectangle::getWidth(){
	return width;
}
int Rectangle::getYMin(){
	return yMin;
}
int Rectangle::getYMax(){
	return yMax;
}
int Rectangle::getXMin(){
	return xMin;
}
int Rectangle::getXMax(){
	return xMax;
}
vector<Point> Rectangle::getRectanglePoints{
	return allPoints;
}
