#include <iostream>
using namespace std;

#ifndef DEBONISDAVID_PA01
#define DEBONISDAVID_PA01

class Point {
private:
    int x;
    int y;

public:
    explicit Point(int _x = 0, int _y = 0);

    int getX() const; // accessor
    int getY() const; // accessor

    void setX(int _x);
    void setY(int _y);

    friend ostream & operator <<(ostream &out, const Point &pnt);

};

#endif //DEBONISDAVID_PA01
