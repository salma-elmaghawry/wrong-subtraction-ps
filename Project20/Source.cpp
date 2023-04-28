#include<iostream>
using namespace std;
int main()
{
	int n;
	int k;
	
	cin >> n >> k;
	for ( int i = 0; i < k; i++)
	{
		int last_digit = (n % 10);
		if (last_digit == 0)
		{
			n /= 10;
		}
		else
		{
			n-=1;
		}
		
	}
	cout << n << endl;
	
}