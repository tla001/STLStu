/*
 * st_deque.cpp
 *
 *  Created on: Jul 18, 2016
 *      Author: tla001
 */
#include "st_deque.h"

void InitDeque()
{
	deque<int> d_int;
	deque<int>::iterator d_intItem;
	deque<int>::reverse_iterator d_intRItem;
	d_int.push_back(1);
	d_int.push_back(2);
	d_int.push_front(3);
	for(d_intItem=d_int.begin();d_intItem!=d_int.end();d_intItem++)
		cout <<*d_intItem<<"\t";
	cout <<"\n\n";
	d_int.pop_back();
	d_int.pop_front();
	for(int i=0;i<d_int.size();i++)
		cout<<d_int[i]<<"\t";
	cout<<"\n\n";

	d_int.push_back(10);
	d_int.push_back(12);
	d_intItem=d_int.begin();
	cout <<"the final element:"<<*d_intItem<<endl;
	*d_intItem=30;
	cout <<"the final element new:"<<*d_intItem<<endl;
	for(int i=0;i<d_int.size();i++)
			cout<<d_int[i]<<"\t";
	cout<<"\n\n";
	//front back的使用 &
	int &num1=d_int.front();
	const int &num2=d_int.front();
	cout<<"the first element is:"<<num1<<endl;
	num1++;
	cout<<"the new first element is:"<<num2<<endl;
	for(int i=0;i<d_int.size();i++)
				cout<<d_int.at(i)<<"\t";
	cout<<"\n\n";
	//反序列
	for(d_intRItem=d_int.rbegin();d_intRItem!=d_int.rend();d_intRItem++)
			cout <<*d_intRItem<<"\t";
		cout <<"\n\n";

	//assign swap
	deque<int>d_int2;
	deque<int>d_int3;
	d_int3.assign(5,1);
	d_int3.swap(d_int);
	cout<<"swap 3:\n";
	for(d_intItem=d_int3.begin();d_intItem!=d_int3.end();d_intItem++)
			cout <<*d_intItem<<"\t";
	cout<<endl;
	cout<<"swap 1:\n";
	//insert
	d_int.insert(++d_int.begin(),10);
	//erase
	d_int.erase(d_int.begin()+2,d_int.end());
	for(d_intItem=d_int.begin();d_intItem!=d_int.end();d_intItem++)
			cout <<*d_intItem<<"\t";
	cout<<endl;
	cout<<"assign\n";
	d_int2.assign(d_int3.begin(),d_int3.end());
	for(d_intItem=d_int2.begin();d_intItem!=d_int2.end();d_intItem++)
		cout <<*d_intItem<<"\t";
	cout <<endl;
}
