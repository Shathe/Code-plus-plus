#include <iostream>
using namespace std;
#include <vector>


/**
Some code in C++ just to remember its sintaxis
*/


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

	int foo[5];         
	int foo2 [] = {16, 2, 77, 40, 12071};

	std::vector<int> v1 (5,20);
	v1.insert(v1.begin()+2, 0);
	for ( int n=0 ; n<v1.size() ; ++n )	{
		cout << v1[n] << endl;
	}
	

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

