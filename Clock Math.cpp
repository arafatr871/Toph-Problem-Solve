#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int H, M;
	cin >> H >> M;
	double hour = H*30.0 + M*0.5;
	double minitue = M*6.0;
	double angle = fabs(hour-minitue);

	if (angle>180)
	{
		angle = 360-angle;
	}

	cout<<angle<<endl;
	return 0;
}
