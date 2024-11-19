# CircleGeometryCalculator
Description:

The Circle Geometry Calculator is a C++ program that allows users to compute various properties of a circle based on two points in a 2D coordinate system. The program calculates the radius, circumference, and area of the circle, where the center of the circle is at the first point (x1, y1) and the second point (x2, y2) lies on the circumference.

The program operates via a menu-based system, allowing the user to choose which property of the circle they wish to calculate. Users can exit the program at any time.

Features:

Radius Calculation: Calculates the radius of the circle using the distance formula between two points (x1, y1) and (x2, y2).

Circumference Calculation: Computes the circumference of the circle using the formula 
2
×
𝜋
×
radius
2×π×radius.

Area Calculation: Calculates the area of the circle using the formula 
𝜋
×
radius
2
π×radius 
2
 .
 
Menu Interface: Users can interact with the program through a simple menu to choose which property they want to calculate.

Exit Option: Users can choose to exit the program at any time.


To compile the program:
bash g++ main.cpp -o circle_calculator

To run the program:
bash
./circle_calculator


Interaction with the Program:

Input the x1, y1 (center) coordinates for the circle.

Input the x2, y2 (point on the circumference) coordinates.

Use the menu to choose between calculating the radius, circumference, or area.

Exit the program when finished.
