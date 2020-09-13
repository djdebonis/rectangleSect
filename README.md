# rectangleSect

Name: David J DeBonis

## what this program does
This program takes information of two rectangles plotted in a 2D plane and determines whether the rectangles intersect.*

*if the rectangles share a single point, such as a corner, this is considered intersection.

### input:
For each rectangle, the user inputs the (x,y) coordinates of the top-left point, as well as the height and width of the rectangle.

### output:
For each rectangle, the program will output all four of the rectangle's coordinates, the height and width, and a declarative statement of whether the rectangles intersect.

## organization
This program is compiled using two primary classes: Point and Rectangle. `Point` is a class that stores information of a single point on a 2D grid; in other words, point holds an (x,y) coordinate. Point is declared in the header file "Point.h" and further defined in the source file "Point.cpp."

`Rectangle` is a class that stores information about a sized rectangle that is situated on a 2D grid; thus, it contains all four coordinates of class type `Point`(one for each corner), as well as the width (y range) and height (x range) of the rectangle. Rectangle is declared in the header file "Rectangle.h" and further defined in the source file "Rectangle.cpp."

The function `isIntersect` determines whether the two rectangles intersect by returning a boolean value (rtype:`bool`). This function is declared in the header of the "main.cpp" file, then is further defined after the `main()` function. The `main()` function takes the user input to define the rectangles in question, calls the `Point` and `Rectangle` classes--as well as the bool function `isIntersect`--as needed, then prints a statement containing (1) all of the data for each rectangle (including all of the `Point`s) and (2) whether or not the rectangles intersect.


## how to run
This program runs when compiled with g++/gcc.

In a terminal (on a Unix machine), make a clone of the repository in the directory you want it using the command:
```bash
git clone https://github.com/djdebonis/rectangleSect.git
```
then navigate to the repository:
```bash
cd rectangleSect/
```
Next you will compile the output/executable file using the make command:
```bash
make
```
if you type `ls` you will now see a file named `a.out` in the repository. To run the file, type:
```bash
./a.out
```
and the program will run.

## status
it runs!
