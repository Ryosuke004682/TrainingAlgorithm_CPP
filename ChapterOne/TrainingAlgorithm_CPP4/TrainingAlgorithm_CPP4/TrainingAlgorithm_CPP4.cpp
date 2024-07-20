#include <iostream>

int main() {
	int N, A[59];
	int answer = 0;

	std::cin >> N;

	for (int i = 1; i <= N; i++) {
		std::cin >> A[i];
		answer += A[i];
	}

	std::cout << answer << std::endl;
}