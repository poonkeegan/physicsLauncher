#include <iostream>
#include <math.h>

using namespace std;

const double v = 4.7;
const double pi = 4*atan(1);

double cosOf(int x){
	return cos( x*pi/180.0);
}

double aCosOf(int x){
	return (acos(x) * (180.0/pi));
}

double sinOf(int x){
	return sin( x*pi/180.0);
}

double aSinOf(int x){
	return (asin(x)*(180.0/pi));
}

int main(){
	double dx = 0;
	cin >> dx;
	for(int i = 30; i < 70; i++){
		
		double dy =( ((v*sinOf(i))*(dx)) / (v*cosOf(i)) ) + (-4.9)*((dx*dx)/((v*cosOf(i))*(v*cosOf(i))));
		cout << "At " << i << "  degrees, dy is " << dy << endl;
		
	}
	cin.ignore();
	cin.ignore();
	
}

