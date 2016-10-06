/*
 * st_list.cpp
 *
 *  Created on: Jul 18, 2016
 *      Author: tla001
 */
#include "st_list.h"

void InitList()
{
	list<int> l_int;
	list<int> l_int2;
	list<int>::iterator l_intItem;
	l_int.push_back(5);
	l_int.push_back(4);
	l_int.push_front(8);
	l_int.push_front(5);

	cout<<"ori:";
	for(l_intItem=l_int.begin();l_intItem!=l_int.end();l_intItem++)
		cout << *l_intItem<<"\t";
	cout<<endl;

	//������
	l_int.reverse();
	cout<<"new:";
	for(l_intItem=l_int.begin();l_intItem!=l_int.end();l_intItem++)
		cout << *l_intItem<<"\t";
	cout<<endl;

	//ָ��
	l_int2.assign(l_int.begin(),l_int.end());
	for(l_intItem=l_int2.begin();l_intItem!=l_int2.end();l_intItem++)
		cout << *l_intItem<<"\t";
	cout<<endl;
	//ɾ��
	l_int.remove(5);
	cout<<"after remove:";
	for(l_intItem=l_int.begin();l_intItem!=l_int.end();l_intItem++)
		cout << *l_intItem<<"\t";
	cout<<endl;

	//����
	l_int2.sort();
	for(l_intItem=l_int2.begin();l_intItem!=l_int2.end();l_intItem++)
		cout << *l_intItem<<"\t";
	cout<<endl;
	//ȥ��
	l_int2.unique();
	for(l_intItem=l_int2.begin();l_intItem!=l_int2.end();l_intItem++)
		cout << *l_intItem<<"\t";
	cout<<endl;
}
