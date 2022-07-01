#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <random>

struct run{
	int number1;
	int number2;
	int round;
	int score;
	int input;
	int result;
};
int random(int start, int end){
	        std::random_device dev;
		std::mt19937 rng(dev());
		std::uniform_int_distribution<std::mt19937::result_type> dist6(start,end);
		return dist6(rng);


}
int sum(int one, int two){
	int result = (one + two);
	return result;
}
int main(){
	run run1;
	std::cout << "Set lowest number: ";
	std::cin >> run1.number1;
        std::cout << "Set higest number: ";
        std::cin >> run1.number2;
	run1.score = 0;
	run1.round = 0;
	do{
	int one = random(run1.number1,run1.number2);
	int two = random(run1.number1,run1.number2);
	run1.result = sum(one,two);
	std::cout << one << " + " << two << std::endl;
	std::cin >> run1.input;
	if(run1.input == run1.result){
		run1.score = run1.score + 1;
		std::cout << "Score: " << run1.score << "\n";
		run1.round = run1.round +1;
	}else{
		std::cout << "Sorry you lost " << run1.input << " is not the right answer \n";
		std::cout << "The correct soluten would be " << run1.result << "\n";
		std::cout << "you lost at round " << run1.round << " with a score of " << run1.score << "\n";
		return 0;

	};
	}while(true);

	return 0;

}
