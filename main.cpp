#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	//seed srand with time 0
	srand(time(0));

	const int MIN_VALUE = 50, MAX_VALUE = 100;

	//Generate random scores for range
	int score1 = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
	int score2 = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;

	cout << "The current scores are " << score1 << " and " << score2 << endl;

	//assign scores in min and max
	int min = score1;
	int max = score2;

	//Swap if not in correct order
	if (min > max) {
		int tmp = max;
		max = min;
		min = tmp;
	}

	//Prompt user for score
	int user_score;
	cout << "Enter your score: ";
	cin >> user_score;

	//Compare user score to min and max
	if (user_score > max) {
		cout << "You got the highest score!";
	}
	else if (user_score > min) {
		cout << "You got the second highest score!";
	}
	else {
		cout << "You got the lowest score, you'll get em' next time!";
	}


	cout << endl;
	system("pause");
	return 0;
}
