#include <iostream>
#include <algorithm>
using namespace std;


//int Numb(int a)
//{
//	cout << a << "\n";
//
//	if (a >= 5)
//	{
//		return 1;
//	}
//	a++;
//
//	Numb(a);	
//}

//int Range(int A, int B)
//{
//
//	if (A <= B)
//	{
//		cout << A << "\n";
//		A++;
//		if (A <= B)
//		{
//			Range(A, B);
//		}
//		return A;
//	}
//	else if (A >= B)
//	{
//		int numb = A;
//		A--;
//		cout << numb << "\n";
//		if (A >= B)
//		{
//			Range(A, B);
//		}
//		return A;
//	}
//}

//int Degree(int N, int numb = 1)
//{
//	numb = numb * 2;
//	if (numb < N) Degree(N, numb);
//	else 
//	{
//		if (numb <= N)
//		{
//			cout << "YES!" << "\n";
//		}
//		else if (numb != N)
//		{
//			cout << "NO!" << "\n";
//		}
//	}
//	return numb;
//}

//int Sum(int N, int number, int number2, int sum)
//{
//	sum += (N % number / number2);
//	number2 = number;
//	number *= number;
//	if (N >= number2)
//	{
//		sum = Sum(N, number, number2, sum);
//	}
//	return sum;
//}




int main()
{
	// TASK 1
	 /*Numb(1);*/

	// TASK 2
	/*int a;
	int b;

	cin >> a >> b;

	Range(a,b);*/

    // TASK 3

	/*int a;
	int b = 1;

	cin >> a;

	Degree(a,b);*/
	
	// TASK 4

	/*int N;
	int number = 10;
	int number2 = 1;
	int sum = 0;

	cin >> N;

	cout << Sum(N, number, number2, sum) << "\n";*/

}
