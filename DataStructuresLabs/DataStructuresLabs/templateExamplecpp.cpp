#include <iostream>

template <class T>
T smallest(T a, T b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <class T>
T largest(T a, T b)
{
	if (a > b)
		return a;
	else
		return b;
}

template<class T>
class TemplateClass {
public:
	TemplateClass(T val)
	{
		m_val = val;
	}
	bool operator<(TemplateClass& rVal)
	{
		return m_val < rVal.GetVal();
	}
	bool operator>(TemplateClass& rVal)
	{
		return m_val > rVal.GetVal();
	}
	T GetVal()
	{
		return m_val;
	}
private:
	T m_val;
};

int main() {
	std::cout << smallest(3, 6) << std::endl;
	std::cout << largest(TemplateClass<int>(2), TemplateClass<int>(5)).GetVal() << std::endl;
}