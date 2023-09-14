#include<iostream>
using namespace std;
class ComplexNo{
  
    public:
      
	int x;
	int y;
	    
       void Addcomp(int x,int y){
       cout << "Addition is = " << x << " + i" <<"("<< y << ")"<< endl;
       } 
      
       void Subcomp(int z,int t){
       cout << "Subtraction is = " << z << " + i" <<"(" << t <<")" << endl;
       }
       
       void Multcomp(int w,int v){
       cout << "Multiplication is = " <<  w << " + i" << "(" <<  v <<")"<< endl;
      }
      
      
  };
      

int main(){

	int x,y,x1,x2,y1,y2;
	int z,t,w,v;

	cout << "enter x1 = " ;
	cin >> x1;
	cout << "enter y1 = " ;
	cin >> y1;
	cout << "enter x2 = " ;
	cin >> x2;
	cout << "enter y2 = " ;
	cin >> y2;
	
	x = x1+x2;

	y = y1+y2;

	z = x1-x2;

	t = y1-y2;

	w = (x1*x2 - y1*y2);
	v = (x1*y2 + y1*x2);
	
	cout << " x is = " << x <<endl;
	
	ComplexNo comp;
	comp.Addcomp(x,y);
	comp.Subcomp(z,t);
	comp.Multcomp(w,v);
	      
      
}      
      
      
      
      
      
      
      
      
      
       
