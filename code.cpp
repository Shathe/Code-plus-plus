#include <iostream>
using namespace std;



// class template:
template <class T>
class mycontainer {
    T element;
  public:
    mycontainer (T arg) {element=arg;} // constructor
    T increase () {return ++element;} // method
};



/* Class */
class Circle {
    double radius; // Atributtes
  public:
    Circle(double r) { radius = r; } // Constructor
    double circum() {return 2*radius*3.14159265;} // Method
};


void odd (int x);
int doubleCircum (Circle circ);



int main () {
	Circle circle (10.0);

	cout << "circle's circumference: " << circle.circum() << '\n';
	cout << "circle's circumference doubled: " << doubleCircum(circle) << '\n';
	cout << "circle's circumference: " << (&circle)->circum() << '\n';

	int i = 5;
	cout << i;
	odd (i);

	mycontainer<int> myint (7);
	cout << myint.increase() << endl;

	return 0;
}




void odd (int x)
{
  if ((x%2)!=0) cout << " It is odd.\n";
  else cout << " It is even.\n";
}

int doubleCircum (Circle circ){
		return 2 * circ.circum();
}

// usar templates