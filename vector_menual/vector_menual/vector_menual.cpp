#include <iostream>
#include <vector> //vector �� ���õ� ����� ��� �� �ʿ�.
#include <algorithm> //sort ����� ��� �� �ʿ�.

using namespace std;

void SizeAndCapacity()
{
	vector<int> v;
	for (int i = 0; i < 20; i++) {
		v.push_back(i + 1);
		cout << " �뷮 :" << v.capacity();
		cout << " ũ�� :" << v.size();
		cout << " ������: " << v[i] << endl;
	}
}

void DataRead1()
{
	vector<int> v = { 1,5,3,6,8 };
	cout << "v[1]:" << v[1] << endl;
	cout << "v.at(1):" << v.at(1) << endl;
	cout << "v[3]:" << v[3] << endl;
	cout << "v.at(3):" << v.at(3) << endl;
}

void DataRead2()
{
	vector<int> v = { 1,5,3,6,8 };
	try {
		cout << v[10] << endl;
		//cout << v.at(10) << endl;
	}
	catch (out_of_range& e) {
		cout << "���� �߻� ó�� " << endl;
	}

}
void DataWrite()
{
	vector<int> v = { 5,3,1,6,7 };
	v[2] = 3;
}

void PushAndPopBack()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(13);
	v.push_back(15);
	v.push_back(20);

	int size = v.size();
	for (int i = 0; i < size; i++) {
		cout << "back():" << v.back() << endl;
		v.pop_back();
	}
}

void lterator()
{
	vector<int> v = { 0,9,21,1,0,29 };
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
		cout << *it << endl;

	//���ͷ����� ����ڵ�
	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << endl;

	//for-each ������ ǥ��
	for (int value : v) {
		std::cout << value << " ";
	}
}

void Reserve()
{
	vector<int> v = { 0,9,21,1,0,29,2022 };
	cout << "capacity:" << v.capacity() << endl;
	v.reserve(10);
	cout << "capacity:" << v.capacity() << endl;
	v.reserve(15);
	cout << "capacity:" << v.capacity() << endl;
}

void Insert()
{
	vector<int> v = { 0,9,21,1,0,29,2022 };
	vector<int>::iterator it = v.begin();	//�Ǿ�
	//v.insert(it, 90);	//�Ǿտ� 90����
	v.insert(it + 4, 90);	//4��° ���ҿ� 90����

	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << endl;
}

void VectorSort()
{
	vector<int> v = { 0,9,21,1,0,29,2022 };
	sort(v.begin(), v.end());
	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << endl;
}

int main()
{
	vector<int> v1;			//�ƹ��͵� ���� ����ִ� vector
	//int array[];
	vector<int> v2(5);		//5���� int���� �����ϴ� vector(���� 0���� �ʱ�ȭ)
	//int array[5] = {0};
	vector<int> v3(5, 1);	//5���� int���� �����ϴ� vector(���� 1�� �ʱ�ȭ)
	//int array[5] = {1,1,1,1,1};
	vector<int> v4 = { 1,2,3,4,5 };	//�迭�� ���� �ʱ�ȭ
	vector<int> v5(v4);		//v4�� ���� ��Ҹ� �����ؼ� �ʱ�ȭ


	//SizeAndCapacity(); //������ size,capacity����
	//DataRead1();
	//DataRead2();
	//DataWrite();
	//PushAndPopBack();
	//lterator();
	//Reserve();
	//Insert();
	//VectorSort();

	//vector�� ����� ���߹迭 ��� �� ... �߰��ϱ�

}
