#include "difference_of_squares.h"

namespace difference_of_squares {

	int square_of_sum(int num) {
		int total = 0;
		for (int i = 0; i <= num; i++) {
			total += i;
		}
		return pow(total, 2);
	}
	int sum_of_squares(int num) {
		int total = 0;
		for (int i = 0; i <= num; i++) {
			total += pow(i,2);
		}
		return total;
	}
	int difference(int num) {
		return square_of_sum(num) - sum_of_squares(num);
	}

}  // namespace difference_of_squares

int main() {


	std::cout << difference_of_squares::difference(10) << std::endl;
	return 0;
}