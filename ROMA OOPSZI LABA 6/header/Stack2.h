#pragma once
#include "StackBase.h"
#include "UnidirCyclicList.h"
#include <iostream>
using namespace std;

template <typename T>
class StackOnUnidirCyclicList : public StackBase<T>
{
private:
	UnidirCyclicList<T>* data;
	int count;
public:
	StackOnUnidirCyclicList()
	{
		this->count = 0;
		data = new UnidirCyclicList<T>();
	}
	StackOnUnidirCyclicList(const StackOnUnidirCyclicList& copy)
	{
		data = new UnidirCyclicList<T>();
		count = copy.count;
		for (int i = 0; i < count; ++i)
			arr->AddBack(other.arr->ElementAt(count - i));
	}
	StackOnUnidirCyclicList(StackOnUnidirCyclicList && move)
	{
		data = move.data;
		count = move.count;
		move.data = nullptr;
	}
	~StackOnUnidirCyclicList()
	{
		delete data;
	}

	StackOnUnidirCyclicList& operator=(const StackOnUnidirCyclicList & copy)
	{
		if (this == &copy) return *this;
		delete data;
		data = new UnidirCyclicList<T>();
		count = copy.count;
		for (int i = 0; i < count; ++i)
			arr->AddBack(other.arr->ElementAt(count - i));
	}
	StackOnUnidirCyclicList & operator=(StackOnUnidirCyclicList && move)
	{
		if (this == &move) return *this;
		delete data;
		data = move.data;
		count = move.count;
		move.data = nullptr;
	}
	T& operator[](int index)
	{
		if (index < 0 || index > count)
			throw exception("index was outside the array boundaries");
		return data->ElementAt(index);
	}
	friend ostream& operator<<(ostream & stream, const StackOnUnidirCyclicList & data)
	{
		for (int i = 0; i < data.count; ++i)
			cout << data.data->ElementAt(i) << " ";
		return stream;
	}

	int GetSize() override
	{
		return count;
	}
	T Pop() override
	{
		if (count == 0) throw exception("stack is empty");
		T ret = data->ElementAt(--count);
		data->RemoveBack();
		return ret;
	}
	void Push(const T & element) override
	{
		data->AddFront(element);
		++count;
	}
	T Peek() override
	{
		if (count == 0) throw exception("stack is empty");
		return data->ElementAt(count - 1);
	}
};