#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	start1:
double n;
double x, b, step;
double t = 1;
double y = 0;
	
	cout << "Input x=";
	while (!(cin >> x)) {
		cout << "Incorrect input. Please input x again:\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	cout << "Input b=";
	while (!(cin >> b)) {
		cout << "Incorrect input. Please input b again:\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
		
	cout << "Input step =";
	while (!(cin >> step)) {
		cout << "Incorrect input. Please input step again:\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	/* додаткова частина кода */
	cout << "Input n=";	
	inputn:

	while (!(cin >> n)) {
		cout << "Incorrect input. Please input n again:\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

		if (!(n == (int)n))
		{
			cout << "Incorrect input, n must be int.Please input n again : \n";
			goto inputn;
		}
				
			if (step > 0)
			{
				if (b >= x)
				{
					for (x; x <= b; x = x + step)
					{
						if (x >= 0)
						{
							if (n <= 2)
							{
								cout << "Incorrect input.Please input n > 2:\n ";
								goto inputn;
							}
							else
							{
								for (int i = 1; i <= n - 2; i++)
								{
									y = y + i - x;
								}
							}
						}
						else
						{
							if (n <= 1)
							{
								cout << "Incorrect input.Please input n > 1:\n ";
								goto inputn;
							}
							else
							{
								for (int i = 0; i <= n; i++)
								{
									for (int j = i; j <= n - 1; j++)
									{
										t = t * (i ^ 2 + j);
									}
									y = y + t;
								}
							}
						}

						cout << "x =" << x << ";   " << "y= " << y << endl;
					}
				}
				else
				{
					cout << "No results, please input b >= x";
				}
			}
			else
				{
					cout << "Erorr, infinite loop";
				}
			cout << "\nLet`s start program again: \n"; 
			goto start1;
			return 0;
		}
