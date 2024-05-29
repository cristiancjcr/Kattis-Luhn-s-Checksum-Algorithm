#include <iostream>
#include <string>
using namespace std;

bool luhn(const string& no)
{	 
	int c=0;
	int sum=0;
	bool second=false;
	int length=no.length();
	
	for(int i=length-1; i>=0; i--)
	{	
		c = no[i] - '0';
		if (second)
			c = c * 2;	

		sum += c / 10;
		sum += c % 10;
		second = !second;
	}
	return (sum % 10 == 0);	
}

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t)
    {
        string number;
        cin >> number;

        if (luhn(number))
            cout << "PASS" << endl;
        else
            cout << "FAIL" << endl;
    }

    return 0;
}
