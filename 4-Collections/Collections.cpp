#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for sort and count

using namespace std;

int main() {

	vector<int> vec;

	for (int i = 0; i < 10; i ++) {
		//puts an item at the end of the list
		vec.push_back(i); 
	}

	//ranged for / for-each
	for (auto item : vec) {
		cout << item << " ";
	}
	cout << endl;

	cout << "vec has: " << vec.size() << " elements" << endl;
	vec[5] = 6;
	vec[6] = 5;
	
	for (auto item : vec) { 
		cout << item << " ";
	} 

	cout << endl;

	vector <string> stringVec;
	cout << "enter three words" << endl;
	for (int i = 0; i < 3; i++) {
		string s;
		cin >> s;
		stringVec.push_back(s);
	}
	
	for (auto item : stringVec) {
		cout << item << " ";
	}
	cout << endl;

	//need unsigned for collection size
	for ( unsigned int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << endl;
	
	//iterators
	for (auto i = begin(vec); i != end(vec); i++) { 
		cout << *i << " " ;
	}
	cout << endl;


	//sorting
	//sort() : from, to
	sort(begin(stringVec), end(stringVec));
	for ( auto item : stringVec) { 
		cout << item << " ";
	}
	cout << endl;

	//algorthims.count
	int threes = count(begin(vec), end(vec), 3);
	cout << "there are " << threes << " threes " << endl;

	int tees = count(begin(stringVec[0]), end(stringVec[0]), 't');
	cout << "there are " << tees << " letter t's " << endl;

	return 0;
}

