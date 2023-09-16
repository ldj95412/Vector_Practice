#include <iostream>
#include <vector> //vector 와 관련된 예약어 사용 시 필요.
#include <algorithm> //sort 예약어 사용 시 필요.

using namespace std;

void SizeAndCapacity()
{
	vector<int> v;
	for (int i = 0; i < 20; i++) {
		v.push_back(i + 1);
		cout << " 용량 :" << v.capacity();
		cout << " 크기 :" << v.size();
		cout << " 데이터: " << v[i] << endl;
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
		cout << "예외 발생 처리 " << endl;
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

	//이터레이터 요약코드
	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << endl;

	//for-each 문으로 표현
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
	vector<int>::iterator it = v.begin();	//맨앞
	//v.insert(it, 90);	//맨앞에 90삽입
	v.insert(it + 4, 90);	//4번째 원소에 90삽입

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
	vector<int> v1;			//아무것도 없는 비어있는 vector
	//int array[];
	vector<int> v2(5);		//5개의 int형을 저장하는 vector(전부 0으로 초기화)
	//int array[5] = {0};
	vector<int> v3(5, 1);	//5개의 int형을 저장하는 vector(전부 1로 초기화)
	//int array[5] = {1,1,1,1,1};
	vector<int> v4 = { 1,2,3,4,5 };	//배열과 같은 초기화
	vector<int> v5(v4);		//v4의 벡터 요소를 복사해서 초기화


	//SizeAndCapacity(); //벡터의 size,capacity설명
	//DataRead1();
	//DataRead2();
	//DataWrite();
	//PushAndPopBack();
	//lterator();
	//Reserve();
	//Insert();
	//VectorSort();

	//vector로 만드는 이중배열 요소 등 ... 추가하기

}
