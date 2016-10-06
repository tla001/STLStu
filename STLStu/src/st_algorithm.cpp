/*
 * st_algorithm.cpp
 *
 *  Created on: Jul 19, 2016
 *      Author: tla001
 */
#include "st_algorithm.h"

void TadjacentFind()
{
	const int ARRAY_SIZE=8;
	int IntArray[ARRAY_SIZE]={1,2,3,4,4,5,6,7};
	int *location;
	location=adjacent_find(IntArray,IntArray+ARRAY_SIZE);
	if(location!=IntArray+ARRAY_SIZE){
		cout<<"find adjacent elements: "<<*location<<" @ "<<location-IntArray<<endl;
	}
}

void Tcount()
{
	vector<string> names;
	vector<string>::iterator iter;
	names.push_back("tao");
	names.push_back("wang");
	names.push_back("tao");
	names.push_back("zhang");

	string value("tao");

	int result=count(names.begin(),names.end(),value);
	cout<<"the name $ "<<value<<" $ you have found, num= "<<result<<endl;

}
void Tfind()
{
	vector<string> names;
	vector<string>::iterator iter;
	names.push_back("tao");
	names.push_back("wang");
	names.push_back("tao");
	names.push_back("zhang");

	list<string>Lname;
	Lname.push_back("tao");
	Lname.push_back("li");
	string value("tao");
	iter=find(names.begin(),names.end(),value);
	if(iter==names.end()){
		cout<<"no one"<<endl;
	}
	else
		cout<<"find it"<<endl;
	//在第一个容器中匹配第二个容器元素最后出现的位置
	iter=find_end(names.begin(),names.end(),Lname.begin(),Lname.end());
	if(iter==names.end()){
		cout<<"no one"<<endl;
	}
	else
		cout<<"find it"<<endl;
	iter=find_first_of(names.begin(),names.end(),Lname.begin(),Lname.end());
	if(iter==names.end()){
		cout<<"no one"<<endl;
	}
	else
		cout<<"find it"<<endl;
	iter=search(names.begin(),names.end(),Lname.begin(),Lname.end());
	if(iter==names.end()){
		cout<<"no one"<<endl;
	}
	else
		cout<<"find it"<<endl;
}
