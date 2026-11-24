/*Rehan Sheikh
Lab: 01
Task : 03
Roll No : 22
Date : 24-11-2026
*/
#include <iostream>
using namespace std; /*//Bug 1 :missing ; after std*/
int main()
{
	cout <<"Wellcome to the lab" << endl; /*//Bug 2 :missing ; after endl*/
	cout <<"Today we learn \\C++" << endl; /*//Bug 3 :Used capital C for cout*/
	cout <<"Files are in C:\\Lab01"<< endl; /*//Bug 4 :Used double slash instead of one*/
	cout <<"Bye!"<< endl; /*Bug 5 :Used inverted commas for the input*/
	return 0;	
}
