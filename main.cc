//Ainsley Pyle 


#include <iostream>
#include <cmath>
#define PI (4*atan(1))
using namespace std;


double distance( double x2, double y2, double x1, double y1) //Distance Function
{
	return (  sqrt(pow(x2-x1, 2) + pow(y2-y1, 2))  );
}

double radius( double x2, double y2, double x1, double y1) //Radius function
{
	 return distance(x2,y2,x1,y1);
 }

double circumference(double rad) //Circumference function
{ 
	return  2.0*PI*rad; 
}
	
double area(double radii) //Area function
{ 
	return PI*pow(radii, 2);
}


int main()
{
	double x1, y1, x2, y2, radi; //Local variables
	int input;
	

		cout << ("X1:") << endl;
		cin >> x1;
		cout << ("Y1:") << endl;
		cin >> y1;
		cout << ("X2:") << endl;
		cin >>	x2;
		cout << ("Y2") << endl;
		cin >> y2;
		radi = radius(x2, y2, x1, y1); //Radius with x and y increments 

    do {
		// Menu
        cout << "Pick one of the following:" << endl;
	    cout << "1. Compute the radius of the circle" << endl;
	    cout << "2. Compute the circumference of the circle" << endl;
	    cout << "3. Compute the area of the circle" << endl;
	    cout << "4. Exit the program" << endl << endl;
	    cout << "Your choice is: " ;
        cin >> input;
			
	//Switch statement to get user input
   switch (input) {
		case 1:
				cout << "The radius of the circle is " << radi << "."<< endl << endl;
			break;
		case 2:
				cout << "The circumference of the circle is " << circumference(radi) << "."<< endl<< endl;
			break;
		case 3:
				cout << "The area of the circle is " << area(radi) << "."<< endl<< endl;
			break;
		case 4:
			input= 4;
			break;
		default: 
			cout << "Invalid. Please attempt again" << endl;

        } //switch statement end
   } while (input !=4);

  return 0;
}



	
	

