#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <deque>

//��std�Ļ������ͣ�����˵deque���ṩ�ķ�������Ϥ

using namespace std;

typedef enum {VIP, NORMAL} Type;
typedef enum {FREE, OCCUPIED} State;

class Customer{
public:
	string arrive_time;
	string serve_time;
	string play_time;
	Type ctype;

	Customer() = default;
	Customer(string arrive, string play, bool type){
		arrive_time = arrive;
		play_time = play;
		if (type) ctype = VIP;
		else      ctype = NORMAL;
	}
};

class Table{
public:
	int count;
	Type ttype;
	State state;
	string finish_time;

	Table(){
		count = 0;
		ttype = NORMAL;
		state = FREE;
	}
};

int main(){
	int N;
}
