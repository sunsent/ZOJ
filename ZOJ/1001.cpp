//A + B Problem
#include<iostream>
using namespace std;
class solution {
public:
	static int aplusb(int a, int b);
};
int solution::aplusb(int a, int b) {
	if (b == 0) return a;//��λΪ0
	int no_carry = a ^ b;//��λΪ0
	int carry = a & b << 1;//���н�λ
	return aplusb(no_carry, carry);//��λ��û�н�λ�Ľ�����������λ,ֱ����λΪ0�ŵõ������Ľ��
	return aplusb(no_carry, carry);
}
int main() {
	int a, b;
	cin >> a >> b;
	cout<<solution::aplusb(a, b);
	return 0;
}
//input
//The input will consist of a series of pairs of integers a and b, separated by a space, one pair of integers per line.
//Output
//For each pair of input integers a and b you should output the sum of a and b in one line, and with one line of output for each line in input.
//Sample Input
//1 5
//Sample Output
//6