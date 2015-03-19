#pragma once
#include <iostream>
#include <algorithm>

template<class T>

class interval
{
private:
	T lower;
	T upper;
public:

	interval()
	{
		lower = upper = 0;
	}

	interval(T mean, double percent)
	{
		lower = (T)(mean - mean*percent / 100.0);
		upper = (T)(mean + mean*percent / 100.0);
	}

	friend interval<T> operator+(const interval<T>&lop, const interval<T>&rop)
	{
		interval<T> m;
		m.upper = lop.upper + rop.upper;
		m.lower = lop.lower + rop.lower;
		return m;
	}

	friend interval<T> operator*(const interval<T>&lop, const interval<T>&rop)
	{
		interval<T> m;
		m.upper = lop.upper * rop.upper;
		m.lower = lop.lower * rop.lower;
		return m;
	}

	friend interval<T> operator-(const interval<T>&lop, const interval<T>&rop)
	{
		interval<T> m;
		m.upper = lop.upper - rop.upper;
		m.lower = lop.lower - rop.lower;
		return m;
	}

	friend interval<T> operator/(const interval<T>&lop, const interval<T>&rop)
	{
		interval<T> m;
		m.upper = lop.upper / rop.upper;
		m.lower = lop.lower / rop.lower;
		return m;
	}

	double relative_error()
	{
		return(upper - lower) / 2 / mean;
	}

	double relative_error_percentage(){
		return 100 * (upper - lower) / 2 / mean();
	}
	double absolute_error(){
		return(upper - lower) / 2;
	}

	T mean()
	{
		return (upper + lower) / 2;
	}

	void print_choice(){
		cout << "upper:" << upper << endl;
		cout << "lower:" << lower << endl;
		cout << "relative error:" << relative_error_percentage() << "%" << endl;
		cout << endl;
	}

	~interval()
	{
	}
};

