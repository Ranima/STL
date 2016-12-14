#include <vector>
#include <iostream>

int main()
{
	std::vector<int> vectorOfInts;
	
	vectorOfInts.push_back(5);
	vectorOfInts.push_back(2);
	vectorOfInts.push_back(7);
	
	int secondValue = vectorOfInts.at(1);
	int thirdValue = vectorOfInts[2];
	
	vectorOfInts[2] = 10;
	
	if (vectorOfInts.size() > 2)
	{
		vectorOfInts[2] = 10;
	}
	
	std::vector<int>::iterator it = vectorOfInts.begin();
	
	typedef std::vector<int>::iterator IntVectorIterator;
	IntVectorIterator it = vectorOfInts.begin();
	
	auto it = vectorOfInts.begin();
	
	//iValue will equal 5
	int iValue = (*it);
	(*it) = 12;
	
	it = vectorOfInts.begin();
	it = it + 2;
	//it now points at the third element in our vector
	
	for (it = vectorOfInts.begin(); it != vectorOfInts.end(); ++it)
	{
		std::cout << (*it) << std::endl;
	}
	
	std::vector<int> myVector;
	myVector.push_back(19);



	return 0;
}