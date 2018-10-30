#include <iostream>
#include <math.h>
using namespace std;

int calcAngle(double h, double m)
{
    if (h <0 || m < 0 || h >12 || m > 60)
        printf("Wrong input");
 
    if (h == 12) h = 0;
    if (m == 60) m = 0;
 
    
    double hour_angle = 0.5 * (h*60 + m);
    double minute_angle = 6*m;
    
    double angle = fabs((hour_angle - minute_angle));
    angle = min(360-angle, angle);
 
    return angle;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    double h,m;
	    cin>>h>>m;
	    cout<<calcAngle(h,m)<<endl;
	}
	return 0;
}
