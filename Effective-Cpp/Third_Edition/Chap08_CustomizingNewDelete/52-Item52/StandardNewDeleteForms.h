#pragma once

#include <iostream>
#include <new>

class StandardNewDeleteForms
{
public:
	// normal new/delete
	static void* operator new(std::size_t size) throw(std::bad_alloc)
	{
		return ::operator new(size);
	}
	static void operator delete(void *pMemory) throw()
	{
		::operator delete(pMemory);
	}

	// placement new/delete
	static void* operator new(std::size_t size, void *ptr) throw()
	{
		return ::operator new(size, ptr);
	}
	static void operator delete(void *pMemory, void *ptr) throw()
	{
		return ::operator delete(pMemory, ptr);
	}

	// nothrow new/delete
	static void* operator new(std::size_t size, const std::nothrow_t& nt) throw()
	{
		return ::operator new(size, nt);
	}
	static void operator delete(void *pMemory, const std::nothrow_t&) throw()
	{
		::operator delete(pMemory);
	}
};


// Inherit standard forms.
class Widget : public StandardNewDeleteForms
{
public:
	// make those forms visible.
	using StandardNewDeleteForms::operator new;
	using StandardNewDeleteForms::operator delete;

	// add a custom placement new
	static void* operator new(std::size_t size, std::ostream& logStream) throw(std::bad_alloc);

	// add the corresponding placement delete
	static void operator delete(void* pMemory, std::ostream& logStream) throw();
};