#include "functions.h"

// Examples of how to call the functions

int main()
{

	DrawShape();

	int deleteSampleArray[6] = { 2,3,8,5,6,7 };
	int deleteSampleSize = 6;
	int deleteSampleCount = 6;
	cout << deleteSampleSize << endl;
	cout << deleteSampleCount << endl;
	for (int i = 0; i < deleteSampleCount; i++)
	{
		cout << deleteSampleArray[i] << " ";
	}
	cout << endl;
	deleteElement(deleteSampleSize, deleteSampleCount, deleteSampleArray, 2);
	cout << deleteSampleSize << endl;
	cout << deleteSampleCount << endl;
	for (int i = 0; i < deleteSampleCount; i++)
	{
		cout << deleteSampleArray[i] << " ";
	}
	cout << endl;
	int numberArray[] = { 8,7,6,7,7 };
	int numFreq = frequencyCount(5, numberArray, 7);
	for (int i = 0; i < 5; i++)
	{
		cout << numberArray[i] << " ";
	}
	cout << endl;
	cout << numFreq << endl;
	int numberArray2[12] = { 0,0,2,3,9,5,6,1,9,8,7,7 };

	int freqArray[10] = { 0,0,0,0,0,0,0,0,0 };
	frequencyCount(12, numberArray2, 10, freqArray);
	for (int i = 0; i < 12; i++)
	{
		cout << numberArray2[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << freqArray[i] << " ";
	}
	cout << endl;
}