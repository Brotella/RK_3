#include <iostream>
using namespace std;
 
void bubbleSort(int* ptr, int length) // ���������� ���������
{
 int temp = 0;
 bool exit = false;
 
 while (!exit)
 {
  exit = true;
  for (int counter = 0; counter < (length - 1); counter++)
    if (ptr[counter] > ptr[counter + 1])
    {
     temp = ptr[counter];
     ptr[counter] = ptr[counter + 1];
     ptr[counter + 1] = temp;
     exit = false;
    }
 }
}
 
int main()
{
    cout << "Razmer massiva: ";
    int size; 
    cin >> size;
 
    int *sorted_array = new int [size];
    for (int counter = 0; counter < size; counter++)
    {
        sorted_array[counter] = rand() % 100;
        cout << sorted_array[counter] << "  ";
    }
    cout << "\n";
 
    bubbleSort(sorted_array, size);
 
    for (int counter = 0; counter < size; counter++)
    {
        cout << sorted_array[counter] << "  ";
    }
    cout << "\n" << "Complete! \n";

	int min = sorted_array[0];
    for (int count = 1; count < size; count++)
    {

    if ( min < sorted_array[count] )
    min = sorted_array[count];

    }
    cout << "Max element: " << min << endl;
    system("pause");
    return 0;
}
 
