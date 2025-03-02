#pragma once
#include <iostream>
using namespace std;

template <class T> class clsDynamicArray
{
protected:
	int _Size;
	T* _TempArray;
public:
	T* Array;

	clsDynamicArray(int size = 0)
	{
		if (size < 0)
			_Size = 0;

		_Size = size;
		Array = new T[size];
	}

	int Size()
	{
		return _Size;
	}

	void Resize(int newSize)
	{
		if (newSize < 0)
			newSize = 0;

		_TempArray = new T[newSize];

	   _Size = newSize > _Size ? _Size : newSize;

		for (int i = 0; i < _Size; i++)
			_TempArray[i] = Array[i];

		delete[] Array;
		Array = _TempArray;
		_Size = newSize;
	}

	bool IsEmpty()
	{
		return _Size == 0;
	}
	bool SetItem(int Index, T value)
	{
		if (Index >= _Size || Index < 0)
			return false;
		Array[Index] = value;
		return true;
	}

	void PrintList()
	{
		for (int i = 0; i < _Size; i++)
			cout << Array[i] << " ";
	}

	T GetItem(int Index)
	{
		return Array[Index];
	}

	void Reverse()
	{
		_TempArray = new T[_Size];

		for (int i = 0; i < _Size; i++)
			_TempArray[i] = Array[_Size - i - 1];

		delete[] Array;
		Array = _TempArray;
	}

	void Clear()
	{
		_Size = 0;
		delete[] Array;
		Array = new T[_Size];
	}

	/*bool DeleteItemAt(int Index)
	{
		if (Index >= _Size || Index < 0)
			return false;

		_TempArray = new T[_Size - 1];

		int Counter = 0;
		for (int i = 0; i < _Size; i++)
		{
			if (i == Index)
			{
				continue;
			}
			_TempArray[Counter] = Array[i];
			Counter++;

		}

		delete[] Array;
		Array = _TempArray;
		_Size--;
		return true;
	}*/

	bool DeleteItemAt(int Index)
	{
		if (Index >= _Size || Index < 0)
			return false;

		_Size--;
		_TempArray = new T[_Size];

		for (int i = 0; i < Index; i++)
		{
			_TempArray[i] = Array[i];
		}

		for (int i = Index + 1; i < _Size + 1; i++)
		{
			_TempArray[i - 1] = Array[i];
		}

		delete[] Array;
		Array = _TempArray;
		return true;
	}

	void DeleteFirstItem()
	{
		DeleteItemAt(0);
	}

	void DeleteLastItem() 
	{
		DeleteItemAt(_Size - 1);
	}

	int Find(T value)
	{
		for (int i = 0; i < _Size; i++)
		{
			if (Array[i] == value)
				return i;
		}
		return -1;
	}

	bool DeleteItem(T value)
	{
		int Index = Find(value);
		if (Index == -1)
			return false;

		DeleteItemAt(Index);
		return true;
	}

	bool InsertAt(int Index, T value)
	{
		if (Index >= _Size || Index < 0)
			return false;

		_Size++;
		_TempArray = new T[_Size];

		for (int i = 0; i < Index; i++)
		{
			_TempArray[i] = Array[i];
		}

		_TempArray[Index] = value;

		for (int i = Index + 1; i < _Size; i++)
		{
			_TempArray[i] = Array[i - 1];
		}

		delete[] Array;
		Array = _TempArray;
		return true;
	}

	~clsDynamicArray()
	{
		delete[] Array;
	}
};

