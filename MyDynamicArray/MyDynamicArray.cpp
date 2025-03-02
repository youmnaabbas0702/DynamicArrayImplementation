#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main()
{
    //clsDynamicArray<int> MyDynamicArray(5);

    //MyDynamicArray.SetItem(0, 10);
    //MyDynamicArray.SetItem(1, 20);
    //MyDynamicArray.SetItem(2, 30);
    //MyDynamicArray.SetItem(3, 40);
    //MyDynamicArray.SetItem(4, 50);

    //cout << "\nIs Empty?:  " << MyDynamicArray.IsEmpty() << endl;
    //cout << "\nArraySize:  " << MyDynamicArray.Size() << endl;

    //cout << "\nArray Items:" << endl;
    //MyDynamicArray.PrintList();

    //MyDynamicArray.Resize(2);
    //cout << "\nArraySize:  " << MyDynamicArray.Size() << endl;
    //cout << "\nArray Items after resize:" << endl;
    //MyDynamicArray.PrintList();

    //MyDynamicArray.Resize(10);
    //cout << "\nArraySize:  " << MyDynamicArray.Size() << endl;
    //cout << "\nArray Items after resize:" << endl;
    //MyDynamicArray.PrintList();

    //cout << "\n\nItem(1): " << MyDynamicArray.GetItem(1) << endl;
    //
    //MyDynamicArray.Reverse();
    //cout << "\nArray after reverse:" << endl;
    //MyDynamicArray.PrintList();

    //MyDynamicArray.Clear();
    //cout << "\n\nArray Items after clear:" << endl;
    //MyDynamicArray.PrintList();

    clsDynamicArray<int> DynamicArray(5);

    DynamicArray.SetItem(0, 10);
    DynamicArray.SetItem(1, 20);
    DynamicArray.SetItem(2, 30);
    DynamicArray.SetItem(3, 40);
    DynamicArray.SetItem(4, 50);

    cout << "\n\nArray Items:" << endl;
    DynamicArray.PrintList();

    /*DynamicArray.DeleteItemAt(4);
    cout << "\n\nArray Items after delete item(3):" << endl;
    DynamicArray.PrintList();

    DynamicArray.DeleteFirstItem();
    cout << "\n\nArray Items after delete first item:" << endl;
    DynamicArray.PrintList();

    DynamicArray.DeleteLastItem();
    cout << "\n\nArray Items after delete last item:" << endl;
    DynamicArray.PrintList();*/

    int Index = DynamicArray.Find(40);
    if (Index == -1)
        cout << "\nItem was not found\n";
    else
        cout << "\nItem 40 was found at index: " << Index << endl;

    DynamicArray.DeleteItem(30);
    cout << "\n\nArray Items after deleting 30:" << endl;
    DynamicArray.PrintList();

    cout << "\nArray Size: " << DynamicArray.Size() << endl;

    DynamicArray.InsertAt(2, 500);
    cout << "\n\nArray Items after inserting 500 at index 2:" << endl;
    DynamicArray.PrintList();
    cout << "\nArray Size: " << DynamicArray.Size() << endl;

}