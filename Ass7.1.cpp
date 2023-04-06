


#include <iostream>
#include <iomanip>  //for using setw

using namespace std;




int main()
{
	const int N = 5;   //Number of rows
	const int M = 5;  //Number of columns
	int B[N][M];  //2D array with N rows and M columns
	float sum=0; //initizalizing a variable to caclulate sum with value zero
	const int Num= N * M; //initizaling a variable with initial value of number of array elements by multiplying num of rows times num of columns
    float avg; //decalring a variable of type float to store the average
	int count = 0;  //initialzing a counter

	for (int row = 0; row < N; row++)   //nested loop to fill the 2D array 
		for (int col = 0; col < M; col++)
		{
			if (row == col)  
				B[row][col] = 0;
			//to fill the array diagonal with zeros
			else if (row < col)
				B[row][col] = 51 + (rand() % (99 - 51 + 1));    
			//to generate random numbers between 51-99 above diagonal
			else if (row > col)
				B[row][col] = rand() % 51;
			//to geerate random numbers between 0-50 below diagonal
		}

	for (int row = 0; row < N; row++) //nested loop to display the 2D array
	{
		for (int col = 0; col < M; col++) {
			cout << setw(4) << B[row][col];
		}
		cout << endl;  //creating a new line after every row
	}

	for (int row = 0; row < N; row++) //nested loop to calculate the sum of array elements
	{
		for (int col = 0; col < M; col++) {
			sum += B[row][col]; //storing the sum of the elements in the variable sum
		}
	}

	avg = sum / Num;
	cout << "The avaerage is: " << avg;
	cout << endl;

	for (int row = 0; row < N; row++) {  //nesteed loop to count the numbers below average
		for (int col = 0; col < M; col++) {
			if (B[row][col] < avg)
				count++;  
		}
	}
	cout << "The number of values below average is: " << count << '\n';  //displaying the number of elements below average



	for (int i = 0; i < M; i++) {   //nested loop to display the flipped 2D array
		for (int j = N - 1; j >= 0; j--) {
			cout << setw(4) << B[i][j];  
		}
		cout << endl;  //creating a new line after every row
	}

    return 0;
}




