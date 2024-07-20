#include <iostream>

int main()
{
    int N, A[1];
    int answer = 0;

    std::cin >> N;

    std::cout << A << std::endl;

    for (int i = 1; i <= N; i++) {
        std::cin >> A[i];
        answer += A[i];
    }
    std::cout << answer << std::endl;
    return 0;
}