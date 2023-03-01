#include <iostream>
#define LIKE_APPLE

int main()
{
	using namespace std;

#ifdef LIKE_APPLE
	cout << "Apple";
#endif

#ifndef LIKE_APPLE
	cout << "Orange";
#endif

	return 0;
}