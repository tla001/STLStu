/*
 * st_vector.cpp
 *
 *  Created on: Jul 17, 2016
 *      Author: tla001
 */

#include "st_vector.h"
//#include "Include.h"
void printIt(const string &str)
{
	cout<<str<<"\t";
}
int MatchFirstChar(const string & str)
{
	string s("t");
	return s==str.substr(0,1);
}
void initVector()
{
	//����push_back����ʼ��
	vector<string> v_str;
	v_str.push_back("tao");
	v_str.push_back("wang");
	v_str.push_back("zhang");
	v_str.push_back("tian");
	for(int i=0;i<v_str.size();i++)
		cout<<v_str[i]<<"\t";
	cout<<"\n\n";

	//����Ԫ��
	v_str.insert(v_str.end(),"he");
	//for_each�÷�
	for_each(v_str.begin(),v_str.end(),printIt);

	//count_if�����������Ƕ���ֻ����������ʱ����ͳ�ƣ�
	int num1=count_if(v_str.begin(),v_str.end(),MatchFirstChar);
	cout<<"num1="<<num1<<endl;

	//�������
	vector<string>::iterator v_strItem;
	v_strItem=find(v_str.begin(),v_str.end(),"ta");
	if(v_strItem==v_str.end()){
		cout<<"can't find"<<endl;
	}
	else{
		cout<<"find:"<<*v_strItem<<endl;
	}

	//ָ��������С
	//vector ��reserve������vector��capacity����������sizeû�иı䣡
	//��resize�ı���vector��capacityͬʱҲ����������size
	vector<int> v_int;
	v_int.reserve(4);
	cout<<"size="<<v_int.size()<<" capacity="<<v_int.capacity()<<endl;
	v_int.resize(5);
	cout<<"size="<<v_int.size()<<" capacity="<<v_int.capacity()<<endl;
	cout<<"please input several int nums:"<<endl;
	for(int i=0;i<v_int.size();i++)
		cin>>v_int[i];
	cout<<"you have input :"<<endl;
	for(int i=0;i<v_int.size();i++)
		cout<<v_int[i]<<"\t";
	cout<<"\n\n";
	//����������
	vector<int>::iterator v_intItem;
	for(v_intItem=v_int.begin();v_intItem!=v_int.end();v_intItem++)
		cout<<*v_intItem<<"\t";
	cout<<"\n\n";
	//ͳ�Ƹ���
	int num=count(v_int.begin(),v_int.end(),1);
	cout<<"num="<<num<<endl;


}
