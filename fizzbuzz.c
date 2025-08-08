#include<stdio.h>

//main function FizzBuzz % 3 and % 5 are used in a foprloop 
int main() {
  //loop starting at 1 going to 100 
  for (int i = 1; i < 101; i++) {
    // if the division of 3 and 5 remains 0 print FizzBuzz
    if (i % 3 == 0 && i % 5 == 0) {
      printf("FizziBubbile\n");
    } else if (i % 3 == 0) { //if the division of 3 remain 0 print Fizz
      printf("Fizzi\n");
    } else if (i % 5 == 0) { //if the division of 5 remains 0 print Buzz
      printf("Bubbile\n");
    } else { //otherwise print the number
      printf("%d\n", i);
    }
}
}