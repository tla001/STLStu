/*
 * st_map.cpp
 *
 *  Created on: Jul 19, 2016
 *      Author: tla001
 */
#include "st_map.h"

void InitMap()
{
	typedef pair<int,int> IntPair;
	/*
	 * map
	 */
	map<int,int>::iterator mIter;
	map<int,int>::reverse_iterator rmIter;
	map<int,int> m_int;
	map<int,int> m_int1;
	map<int,int> m_int2;

	m_int.insert(IntPair(1,10));
	m_int.insert(IntPair(2,29));
	//key重复，value不同时，记录最先出现的
	m_int.insert(IntPair(3,38));
	m_int.insert(IntPair(3,34));
	m_int.insert(IntPair(4,35));
	m_int.insert(IntPair(4,35));

	cout<<"map raw:";
	for(mIter=m_int.begin();mIter!=m_int.end();mIter++)
		cout<<mIter->first<<":"<<mIter->second<<"\t";
	cout<<endl;

	cout<<"map reverse:";
	for(rmIter=m_int.rbegin();rmIter!=m_int.rend();rmIter++)
		cout<<rmIter->first<<":"<<rmIter->second<<"\t";
	cout<<endl;

	if(m_int1.empty())
		cout<<"present size is "<<m_int1.size()<<endl;

	//copy(m_int,m_int2);
	m_int2=m_int;
	for(mIter=m_int2.begin();mIter!=m_int2.end();mIter++)
		cout<<mIter->first<<":"<<mIter->second<<"\t";
	cout<<endl;

	m_int2.insert(m_int2.begin()++,IntPair(7,12));
	m_int2.erase(++m_int2.begin(),--m_int2.end());
	for(mIter=m_int2.begin();mIter!=m_int2.end();mIter++)
		cout<<mIter->first<<":"<<mIter->second<<"\t";
	cout<<endl;

	m_int1.swap(m_int2);
	cout<<"m_int1 size is "<<m_int1.size()<<endl;
	cout<<"m_int2 size is "<<m_int2.size()<<endl;

	map<int,int>::value_compare comp=m_int1.value_comp();
	if(m_int1.begin()->first,(++m_int1.begin())->first)
		cout<<"yes"<<endl;

	/*
	 * multimap
	 */
	multimap<int,int>::iterator mlIter;
	multimap<int,int> ml_int;

	ml_int.insert(IntPair(1,10));
	ml_int.insert(IntPair(2,29));
	ml_int.insert(IntPair(3,38));
	ml_int.insert(IntPair(3,34));
	ml_int.insert(IntPair(4,35));
	ml_int.insert(IntPair(4,35));

	cout<<"multimap raw:";
	for(mlIter=ml_int.begin();mlIter!=ml_int.end();mlIter++)
		cout<<mlIter->first<<":"<<mlIter->second<<"\t";
	cout<<endl;
}
