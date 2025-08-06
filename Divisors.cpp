#include <iostream>

using namespace std;

int main() {
	int A;
	cin >> A;
	for(int i=1;i<=A;i++)
	{
		int n=A%i;
		if(n==0)
		{
			cout<<i<<endl;
		}
	}
	
	return 0;
}
