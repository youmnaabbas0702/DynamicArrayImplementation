#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main()
{
    clsDynamicArray<int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\nIs Empty?:  " << MyDynamicArray.IsEmpty() << endl;
    cout << "\nArraySize:  " << MyDynamicArray.Size() << endl;

    cout << "\nArray Items:" << endl;
    MyDynamicArray.PrintList();

    MyDynamicArray.Resize(2);
    cout << "\nArraySize:  " << MyDynamicArray.Size() << endl;
    cout << "\nArray Items after resize:" << endl;
    MyDynamicArray.PrintList();

    MyDynamicArray.Resize(10);
    cout << "\nArraySize:  " << MyDynamicArray.Size() << endl;
    cout << "\nArray Items after resize:" << endl;
    MyDynamicArray.PrintList();

    cout << "\n\nItem(1): " << MyDynamicArray.GetItem(1) << endl;
    
    MyDynamicArray.Reverse();
    cout << "\nArray after reverse:" << endl;
    MyDynamicArray.PrintList();

    MyDynamicArray.Clear();
    cout << "\n\nArray Items after clear:" << endl;
    MyDynamicArray.PrintList();

}