#include <iostream>
#include <string>

int N;
std::string answer;

int main() {
	std::cin >> N;

	//10進数を2進数に変換するプログラム
	while (N >= 1) {
		if (N % 2 == 0) { answer = "0" + answer; }
		if (N % 2 == 1) { answer = "1" + answer; }

		N = N / 2;
	}

	std::cout << answer << std::endl;
	return 0;
	
}