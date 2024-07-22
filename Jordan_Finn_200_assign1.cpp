#include <iostream>
using namespace std;

const int COLS = 5;
const int ROWS = 4;

int getTotal(int[ROWS][COLS], int, int);
double getAverage(int[ROWS][COLS], int, int);
int getRowTotal(int[ROWS][COLS], int, int);
int getColumnTotal(int[ROWS][COLS], int, int);
int getHighestInRow(int[ROWS][COLS], int);
int getLowestInRow(int[ROWS][COLS], int);

int main()
{
	
	int testArray[ROWS][COLS] =
	{ { 1,   1,  1,  1,  1 },
	{   0,   0,  0,  0, 0 },
	{  1,  1, 1, 1, 1 },
	{  0,  0, 0, 0, 0 } };


	cout << "The total of the array elements is "
		<< getTotal(testArray, ROWS, COLS)
		<< endl;


	cout << "The average value of an element is "
		<< getAverage(testArray, ROWS, COLS)
		<< endl;


	cout << "The total of row 0 is "
		<< getRowTotal(testArray, 0, COLS)
		<< endl;

	
	cout << "The total of col 2 is "
		<< getColumnTotal(testArray, 2, ROWS)
		<< endl;


	cout << "The highest value in row 2 is "
		<< getHighestInRow(testArray, 2)
		<< endl;


	cout << "The lowest value in row 2 is "
		<< getLowestInRow(testArray, 2)
		<< endl;


	system("PAUSE");
	return 0;
}

// comment 1: This function intializes a variable to have a value of zero to store the total of all values for the elements stored in the array.
int getTotal(int array[][COLS], int rows, int cols)
{
	int total = 0;

	// comment 2: This loop iterates through all of the elements of the array and stores the values into a variable for totalling the array.
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			total += array[i][j];
		}
	}
	
	return total;
}

// comment 3: This function uses an operation to store the size of the array into a variale.
// Another variable is then dedicated to store the sum of all values for the elements stored in the array.
double getAverage(int array[][COLS], int rows, int cols)
{

	double totalElements = rows * cols;
	double sum = 0.0;
	double average;
	
	// comment 4: This loop iterates through all of the elements of the array and stores the values into a variable for sum;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += array[i][j];
		}
	}

	// comment 5: This operation takes the variables used to store the sum and size of the array to calculate an average.
	average = (sum / totalElements);

	return average;
}

// comment 6: This function uses an operation to total a specific row provided as a call in int main() and initializes a variable at 0 to store this value.
int getRowTotal(int array[][COLS], int rowToTotal, int cols)
{
	int rowTotal = 0;

	// comment 7: This loop iterates through the specific row provided, totalling the values of the elements in that row, and then storing that value into a variable.
	for (int j = 0; j < cols; j++)
	{
		rowTotal += array[rowToTotal][j];
	}

	return rowTotal;
}

// comment 8: This function uses an operation to total a specific column provided as a call in int main() and initializes a variable at 0 to store this value.
int getColumnTotal(int array[][COLS], int colToTotal, int rows)
{
	int colTotal = 0;

	// comment 9: This loop iterates through the specific column provided, totalling the values of the elements in that row, and then storing that value into a variable.
	for (int i = 0; i < rows; i++)
	{
		colTotal += array[i][colToTotal];
	}

	return colTotal;
}

// comment 10: This function uses an operation search the array and row provided in int main() for the highest element value. A variable is initiliazed with the first element that will be searched and set as the highest value.
int getHighestInRow(int array[][COLS], int rowToSearch)
{
	int highestInRow = array[rowToSearch][0];

	// comment 11: This loop iterates through the row provided in int main() and compares it to the highest element value stored from previous searches. If the new element value is higher than the one stored, this will be the value stored.
	for (int j = 1; j < COLS; j++)
	{
		if (array[rowToSearch][j] > highestInRow)
		{
			highestInRow = array[rowToSearch][j];
		}
	}

	return highestInRow;
}

// comment 12: This function uses an operation to search the array and row provided in int main() for the lowest element value. A variable is initiliazed with the first element that will be searched and set as the lowest value;
int getLowestInRow(int array[][COLS], int rowToSearch)
{
	int lowestInRow = array[rowToSearch][0];

// comment 13: This loop iterates through the row provided in int main() and compares it to the lowest element value stored from previous searches. If the new element value is lower than the one stored, this will be the value stored.
	for (int j = 0; j < COLS; j++)
	{
		if (array[rowToSearch][j] < lowestInRow)
		{
			lowestInRow = array[rowToSearch][j];
		}
	}

	return lowestInRow;
}