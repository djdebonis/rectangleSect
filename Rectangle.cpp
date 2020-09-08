#include "Rectangle.h"

Rectangle::Rectangle(Point _topLeftPnt, int _height=0, int _width=0){
    topLeftPoint = _topLeftPnt;
    height = _height;
    width = _width;
}

vector<Point> Rectangle::setRectanglePoints(){
    vector<Point> points;
    points.push_back(topLeftPoint);

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
        else if (i == 2){
            tempPoint.setX(_x=(topLeftPoint.getX()));
            tempPoint.setY(_y=(topLeftPoint.getY() - height));
        }
        points.push_back(tempPoint);

    }
}
