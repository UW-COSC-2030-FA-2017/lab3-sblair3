//Samuel Blair
//Lab 4
//COSC2030
//9-25-2017

#include<iostream>
using std::cout;
using std::endl;

template <typename T>
T returnSum(T num)
{
	//cout << "Will now calculate the sum from  0 to " << num <<endl;
	T sum = 0;
	for (int i = 0; i <= num;  i++)
	{
		sum += i;
	}
	//cout << "The sum of all numbers between 0 and " << num << " is " << sum << endl << endl;
	return sum;
}
template <typename T>
T returnPro(T &pro, int num)
{
	
	pro = 1;
	for (int i = 1; i <= num; i++)
	{
		pro *= i;
	//	cout << "The factorial of all numbers between 1 and " << num << " is " << pro << endl;
	}
	return pro;
}
template <typename T>
T returnRecip(T &pro,int num)
{

	pro = 0;
	for (int i = 1; i <= num; i++)
	{
		pro+= (1/num);
	//	cout << "The recip of all numbers between 1 and " << num << " is " << pro << endl;
	}
	pro--;
	return pro;
}


int main()
{
	int counter = 0;
	//testing sum
	{
		long long1(0);
		short short1(0);
	
		do {
			if (returnSum(short1) == returnSum(long1))
			{
			long1++;
			short1++;
			counter++;
			}
		} while (returnSum(short1) == returnSum(long1));
		cout << "The highest number that a short can get to is " << returnSum(short1-1) << endl;
		cout << "The the short breaks at " << returnSum(long1) << endl << endl;
		
	}
	//breaking point of n is 257
	
	//testing factorial
	{
		float float1(0);
		double double1(0);
		counter = 0;
		do {
			if (returnPro(float1, counter) == returnPro(double1, counter))
			{
				counter++;
			}
		} while (returnPro(float1, counter) == returnPro(double1, counter));
		cout << "The highest number that a float can get to is " << returnPro(float1, counter-1) << endl;
		cout << "The the float breaks at " << returnPro(double1, counter) << endl<< endl;
	}
	//The value of n at breaking point is 14
	
	//testing reciprocal
	{
		float float2(0);
		double double2(0);
		counter = 1;
		do {
			if (returnRecip(float2, counter) == returnRecip(double2, counter))
			{
				counter++;
			}
			if (counter == 100) 
			{
				break;
			}
		} while (returnRecip(float2, counter) == returnRecip(double2, counter));
		cout << "The expected result is 0, and it was for all cases tested" << endl << endl;
		// You can uncomment the print line in the function to seee further proof
		// They are all zero becasue (1/n) n times is 1 and subtracting 1 will get zero
	}
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	//I observed the floating point value be in accurate when initalized and when adding .2. This leads me to believe that flaoting point values are innacurate in comparison to the double counterparts. 
	//The inaccuracy seems to hapen at the smallest level of decimal. This would not affect many things but it does affect the numbers in this instance.
	return 0 ;
}
