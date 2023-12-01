#include <iostream>
#include <cmath>
using namespace std;
double deg2rad(double degtorad){
    double rad;
    rad = (degtorad/180.0)*M_PI;
    return rad;
}
double rad2deg(double radtodeg){
    double deg;
    deg = (radtodeg/M_PI)*180.0;
    return deg;
}
double findXComponent(double L1,double L2,double anger1,double anger2){
    double XComponent;
    XComponent = L1*cos(anger1)+L2*cos(anger2);
    return XComponent;
}
double findYComponent(double L1,double L2,double anger1,double anger2){
    double YComponent;
    YComponent = L1*sin(anger1)+L2*sin(anger2);
    return YComponent;
}
double pythagoras(double XComponent,double YComponent){
    double resultofXY;
    resultofXY = pow((pow(XComponent,2)+pow(YComponent,2)),0.5);
    return resultofXY;
}
void showResult(double resultoflength,double resultofanger){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<< endl;
    cout << "Length of the resultant vector = " << resultoflength << endl;
    cout << "Direction of the resultant vector (deg) = "<< resultofanger << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<< endl;
}
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;

    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
