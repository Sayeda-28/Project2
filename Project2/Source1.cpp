/*Write a program that puts 5 integer values provided by the user into a vector. Output the vector to the console.*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>myvector(5);   //declaring a vector
	cout << "Enter the elements of the array(should be an integer)" << endl; //asking user to enter elements in the array

	for (int i = 0; i < 5; i++)  //using for loop for inputting elements in the vector
	{
		cin >> myvector[i];
	}
	cout << "The elements of the vectors are" << endl;
	for (int j =0; j < 5; j++)  //using for loop for outputting the elements of the vector
	{
		cout << myvector[j] << endl;
	}
	return 0;
}