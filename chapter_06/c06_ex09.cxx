// Do Programming Exercise 6 but modify it to get information from a file.The first
// item in the file should be the number of contributors, and the rest of the file should
// consist of pairs of lines, with the first line of each pair being a contributor’s name
// and the second line being a contribution.That is, the file should look like this:
// 4
// Sam Stone
// 2000
// Freida Flass
// 100500
// Tammy Tubbs
// 5000
// Rich Raptor
// 55000
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <memory>

struct Contributor {
  std::string fullname;
  double contribution;
};

void printout_contributors(std::unique_ptr<Contributor[]> &contributors, int contributors_count);
void read_contributors(std::string);

int main() {
  const std::string filename = "c06_ex09.txt";
  read_contributors(filename);
  return EXIT_SUCCESS;
}


void read_contributors(std::string filename) {
  using namespace std;
  string fileItem;
  int contributors_count = 0;
  ifstream inFile;

  inFile.open(filename);

  if (!inFile.is_open()){
    cout << "Could not open the file " << filename << endl;
    cout << "Program terminating." << endl;
    exit(EXIT_FAILURE);
  }

  inFile >> contributors_count;
  cout << contributors_count << endl;

  if (contributors_count <= 0 ){
    cout << "Wrong value of contributors count" << endl;
    exit(EXIT_FAILURE);
  }

  unique_ptr<Contributor[]> contributors(new Contributor[contributors_count]);
  if (!contributors)
  {
    exit(EXIT_FAILURE);
  }

  if (inFile.good()){
    for (int i=0; i< contributors_count; ++i){
      inFile.ignore();
      std::getline(inFile, contributors[i].fullname);
      std::cout << "Contrib: " << contributors[i].fullname << endl;
      if (!inFile.good()){
        cout << inFile.good() << endl;
        cout << "Missing file content." << endl;
        exit(EXIT_FAILURE);
      }
      inFile >> contributors[i].contribution;
      if (!inFile.good()){
        cout << inFile.good() << endl;
        cout << "Missing file content." << endl;
        exit(EXIT_FAILURE);
      }
      std::cout << contributors[i].fullname << ": " << contributors[i].contribution << '\n';
    }
    if (inFile.good()){
      string last_line;
      inFile.ignore();
      std::getline(inFile, last_line);
      if (!last_line.empty()){
        cout << "Too much data in file" << endl;
        exit(EXIT_FAILURE);
      }
    }
  }
  else {
    cout << "Wrong content of the file " << filename << endl;
    cout << "Program terminating." << endl;
    exit(EXIT_FAILURE);
  }

  cout << endl;
  if (inFile.eof()){
    cout << "End of file reached." << endl;
  }
  else if (inFile.fail()){
    cout << "Input terminated by data mismatch." << endl;
  }
  else {
    cout << "Input terminated for unknown reason." << endl;
  }
  inFile.close();
  cout << endl;
  printout_contributors(contributors, contributors_count);
}

void printout_contributors(std::unique_ptr<Contributor[]> &contributors, int contributors_count){
  std::cout << "Grand Patrons: " << std::endl;
  bool empty_list = true;
  for (int i=0; i < contributors_count; ++i){
    if (contributors[i].contribution >= 10000){
      std::cout << contributors[i].fullname << std::endl;
      empty_list = false;
    }
  }
  if (empty_list){
    std::cout << "None" << std::endl;
  }

  empty_list = true;
  std::cout << std::endl << "Remaining donors: " << std::endl;
  for (int i=0; i<contributors_count; ++i){
    if (contributors[i].contribution < 10000){
      std::cout << contributors[i].fullname << std::endl;
      empty_list = false;
    }
  }
  if (empty_list){
    std::cout << "None" << std::endl;
  }
}
