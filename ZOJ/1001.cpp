//A + B Problem
#include<iostream>
using namespace std;
class solution {
public:
	static int aplusb(int a, int b);
};
int solution::aplusb(int a, int b) {
	if (b == 0) return a;//进位为0
	int no_carry = a ^ b;//进位为0
	int carry = a & b << 1;//所有进位
	return aplusb(no_carry, carry);//进位加没有进位的结果还会产生进位,直到进位为0才得到真正的结果
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