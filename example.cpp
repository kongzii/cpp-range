#include <iostream>
#include "range.h"

int main() {
	using std::cout; using kongzii::range;

	std::vector<int> usual = {1, 2, 3, 4, 5};
	auto withRange = range(1, 6);

	// Standart one-input range
	for(auto i : range(10)) {
		cout << i << " ";
	} cout << std::endl;

	// Two-input range
	for(auto i : range(-5, 4)) {
		cout << i << " ";
	} cout << std::endl;

	// With step = 2
	for(auto i : range(-5, 4, 2)) {
		cout << i << " ";
	} cout << std::endl;

	// Reverse order
	for(auto i : range(-5, 20, -1)) {
		cout << i << " ";
	} cout << std::endl;

	// Floats
	for(auto i : range(-5.0, 24.0, -1.7)) {
		cout << i << " ";
	} cout << std::endl;

	return 0;
}