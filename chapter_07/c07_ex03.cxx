// Here is a structure declaration:
// struct box
// {
// char maker[40];
// float height;
// float width;
// float length;
// float volume;
// };
// a. Write a function that passes a box structure by value and that displays the
// value of each member.
// b. Write a function that passes the address of a box structure and that sets the
// volume member to the product of the other three dimensions.
// c. Write a simple program that uses these two functions.
#include <iostream>
#include <cstdlib>
struct Box
{
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};

void print_box(Box box);

void set_volume(Box *box);


int main() {
  Box box = {
    "Box Factor",
    10,
    20,
    12.5
  };
  try{
    set_volume(&box);
  } catch (std::range_error &e){
    std:: cout << e.what() << std::endl;
    return EXIT_FAILURE;
  }
  print_box(box);
  return EXIT_SUCCESS;
}


void print_box(Box box){
  std::cout << "Dimensions of the box '" << box.maker <<"' (h*w*l): ";
  std::cout << box.height << " * " << box.width << " * " << box.length << std::endl;
  std::cout << "Volume of the box: " << box.volume << std::endl;
}

void set_volume(Box *box){
  if (box){
    box->volume = box->height * box->width * box->length;
  } else{
    throw std::range_error("Not initialized box.");
  }
}
