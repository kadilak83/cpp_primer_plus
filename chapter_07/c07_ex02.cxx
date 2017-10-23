// Write a program that asks the user to enter up to 10 golf scores, which are to be
// stored in an array.You should provide a means for the user to terminate input prior
// to entering 10 scores.The program should display all the scores on one line and
// report the average score. Handle input, display, and the average calculation with
// three separate array-processing functions.
#include <iostream>
#include <cstdlib>
#include <array>
#include <cctype>
#include <algorithm>
#include <numeric>


int fill_input_scores(int scoresArr[], int maxScoresCount);
void print_score(int score);
void display_scores(int scoresArr[], int scoresCount);
double avg_score(int scoresArr[], int scoresCount);

int main()
{
  const int maxScoreCount = 10;
  int scores[maxScoreCount] = {0};
  int currentScoreCount = 0;
  try {
    currentScoreCount = fill_input_scores(scores, maxScoreCount);
    display_scores(scores, currentScoreCount);

  } catch (std::range_error &e){
    std:: cout << e.what() << std::endl;
    return EXIT_FAILURE;
  }

  try{
    std::cout << "Average score: " << avg_score(scores, currentScoreCount) << std::endl;
    std::cout << "Goodbye." << std::endl;
  } catch (std::length_error &e){
    std:: cout << e.what() << std::endl;
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}

int fill_input_scores(int scoresArr[], int maxScoreCount){
  char choice = 'y';
  int currentCount = 0;
  do {
    std::cout << "Give a score: ";
    if(!(std::cin >> scoresArr[currentCount])){
        throw std::range_error("Wrong value of score, only numbers");
      }
    ++currentCount;
    if (currentCount < maxScoreCount){
      std::cout << "Do you want to add another score (y): ";
      std::cin.ignore();
      if (!(std::cin.get(choice))){
          throw std::range_error("Wrong value of 'choice'.");
        }
      }
  } while(currentCount < maxScoreCount && choice == 'y');
  return currentCount;
}

void print_score(int score){
  std::cout << score << ", ";
}

void display_scores(int scoresArr[], int scoresCount){
  std::cout << "Scores: ";
  std::for_each (scoresArr, scoresArr + scoresCount, print_score);
  std::cout << std::endl;
}

double avg_score(int scoresArr[], int scoresCount){
  double avg = 0;
  double total = std::accumulate(scoresArr, scoresArr + scoresCount, 0);
  if (scoresCount){
    avg = total / scoresCount;
  } else {
    throw std::length_error("Empty score list");
  }
  return avg;
}
