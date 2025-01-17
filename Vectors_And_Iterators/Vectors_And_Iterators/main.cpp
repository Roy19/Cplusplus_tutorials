// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> vIn);
void assignFunction(vector<int> vInts, int in);
void pushBackFunction(vector<int> vInts, int in);
void emplaceFunction(vector<int> vInts, int loc, int in);

void printVector(vector<int> vIn)
{//printing the contents of vIns
	vector<int>::iterator it;

	for (it = vIn.begin(); it != vIn.end(); ++it)
		cout << *it << " ";
	cout << endl;
}

void assignFunction(vector<int> vInts, int in)
{
	cout << "\nassigning " << in << " and printing the vector\n";
	vInts.assign(1, in);
	printVector(vInts);
}
void pushBackFunction(vector<int> vInts, int in)
{
	cout << "\npush back " << in << " and printing the vector\n";
	vInts.push_back(in);
	printVector(vInts);
}
void emplaceFunction(vector<int> vInts, int loc, int in)
{
	vector<int>::iterator it;
	cout << "\nemplacing " << in << " and printing the vector\n";
	it = vInts.begin() + loc;
	vInts.emplace(it, in);
	printVector(vInts);
}
void popBackFunction(vector<int> vInts) {
	cout << "Pop off 1 value from the end of the vector\n";
	vInts.pop_back();
	printVector(vInts);
}
int main()
{
	vector<int> vInts;
	vInts.assign(10, 5);
	printVector(vInts);
	assignFunction(vInts, 1);
	pushBackFunction(vInts, 2);
	emplaceFunction(vInts, 1, 3);
	popBackFunction(vInts);

	return 0;
}
