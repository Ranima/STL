#include <vector>

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
	return 0;
}