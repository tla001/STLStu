//============================================================================
// Name        : STLtest.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Include.h"
#include "st_vector.h"
#include "st_deque.h"
#include "st_list.h"
#include "st_set.h"
#include "st_map.h"
#include "st_algorithm.h"
//using namespace std;

int main() {
//	vector<int> v(3);
//	v[0] = 7;
//	v[1] = v[0] + v[1];
//	v[2] = v[0] + v[1];
//	cout << v[2] << endl;
//
//	vector<int>num;
//	for (int i = 0; i < 100; i++)
//		num.push_back(i);
//		//num.reserve(10);
//	cout << num.capacity() << endl;
//	try{
//		for (int i = 0; i < 100; i++)
//			cout << num[i] <<" "<<num.at(i)<< '\t';
//	}
//	catch (const exception &e){
//		cout << e.what();
//	}
	TadjacentFind();
	Tcount();
	Tfind();

	return 0;
}
