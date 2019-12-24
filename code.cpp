#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <iostream>
#include <cassert>

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
  for ( int n=0 ; n<v1.size() ; ++n )  {
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
  
    map< char, int > mp; 
  // inserting values  
  mp['a']=5; 
  mp['b']=10; 
  mp['c']=15; 
  mp['d']=20; 
  mp['e']=30; 

  map<char, int>::iterator it ; 
  it = mp.find('b'); 
      
  if(it == mp.end()) 
      cout << "Key-value pair not present in map" ; 
  else
      cout << "Key-value pair present : " 
        << it->first << "->" << it->second ; 
  
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

/*
struct SparseVector {
  // map<int,float> values;
  int size;
  vector<std::pair<int,float>> values; // first: component, second:value (sorted by first)
};


float dotProduct(const SparseVector& vector1, const SparseVector& vector2) {
  if (vector2.size!=vector1.size) // error
    return 0.f;
  float result=0.f;
  for(auto it=vector1.begin(), itend=vector1.end(), itend2=vector2.end(); it != itend; it++){
    auto it2 = vector2.find(it->first);
    if(it2!=it2end){
      result+=it1->second*it2->second;
    }
  }
  return result;
}

float dotProductV2(const SparseVector& vector1, const SparseVector& vector2) {
  if (vector2.size!=vector1.size) // error
    return 0.f;
  float result=0.f;
  auto itend=vector1.values.end(), itend2=vector2.values.end();
  for(auto it=vector1.values.begin(), it2=vector2.values.begin(); it!=itend; it++){
    while(it->first>it2->first)
      if(it2++==itend2)
        return result;
    if(it->first==it2->first){
      result+=it2->second*it->second;
    }
}

*/
