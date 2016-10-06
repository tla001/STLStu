/*
 * st_set.cpp
 *
 *  Created on: Jul 18, 2016
 *      Author: tla001
 */

#include "st_set.h"

void InitSet()
{
	/***************set*********************/
	set<int> set1,set2;
	set<int>::iterator sItem1;
	set<int>::reverse_iterator sRItem1;
	set1.insert(10);
	set1.insert(20);
	set1.insert(10);//set 自动去重
	set1.insert(4);
	set1.insert(15);

	cout<<"set ori:";
	for(sItem1=set1.begin();sItem1!=set1.end();sItem1++)
		cout<<*sItem1<<"\t";
	cout<<endl;

	cout<<"set reverse out:";
	for(sRItem1=set1.rbegin();sRItem1!=set1.rend();sRItem1++)
		cout<<*sRItem1<<"\t";
	cout<<endl;

	if(set2.empty())
		cout<<"set2 is empty\n";
	/***************multiset*********************/
	multiset<int> multiset1;
	multiset<int>::iterator mItem1,mItem2;
	multiset1.insert(10);
	multiset1.insert(20);
	multiset1.insert(10);//set 自动去重
	multiset1.insert(4);
	multiset1.insert(15);

	cout<<"multiset1 ori:";
	for(mItem1=multiset1.begin();mItem1!=multiset1.end();mItem1++)
		cout<<*mItem1<<"\t";
	cout<<endl;

	int nums=multiset1.count(10);
	cout<<"nums="<<nums<<endl;

	mItem2=multiset1.begin();
	multiset1.erase(++mItem2,multiset1.end());
	cout<<"multiset1 afer del:";
	for(mItem1=multiset1.begin();mItem1!=multiset1.end();mItem1++)
		cout<<*mItem1<<"\t";
	cout<<endl;
}
