// Write a program that opens a text file, reads it character-by-character to the end of
// the file, and reports the number of characters in the file.
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main() {
  using namespace std;
  const string filename = "c06_ex08.txt";
  char fileCh;
  int charCount = 0;
  ifstream inFile;

  inFile.open(filename);

  if (!inFile.is_open()){
    cout << "Could not open the file " << filename << endl;
    cout << "Program terminating." << endl;
    exit(EXIT_FAILURE);
  }

  while (inFile.get(fileCh) && inFile.good()){
    cout << fileCh;
    ++charCount;
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

  cout << "Number of characters in the file: " << charCount << endl;

  return EXIT_SUCCESS;
}
