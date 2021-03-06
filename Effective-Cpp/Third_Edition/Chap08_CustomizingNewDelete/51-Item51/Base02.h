#pragma once

#include <new>

class Base
{
public:
	static void* operator new(std::size_t size) throw (std::bad_alloc);
	static void operator delete(void* rawMemory, std::size_t size) throw();
};


void Base::operator delete(void* rawMemory, std::size_t size) throw()
{
	// do nothing if the null pointer is being deleted.
	if (0 == rawMemory)
	{
		return;
	}

	if (size != sizeof(Base))
	{
		::operator delete(rawMemory);
		return;
	}

	// deallocate the memory pointed to by rawMemory.
	return;
}