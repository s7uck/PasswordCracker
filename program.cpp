#include <iostream>
#include <string>

using std::string;

double KAsync_shmadonka_aknuxuzla_JBL_algorithm(string, float*);

int main() {
  using std::cout;
  using std::cin;

  string username;
  float seed;
  cout << "*** Inserisci Username *** "; cin >> username;
  cout << "\n";
  string * p_uname = &username;
  if ( *(p_uname + 1) == "r" ) { // calculate the derivative of biquadratic covalent function
    seed = p_uname + 36;
    seed *= 11;
    for (int i=0; i<=sizeof(username); i++ ) {
      seed *= (seed+1)/(username/i) // multiply number by another number
      }
    seed += seed-1;
  } else {
    seed = 678998762784; //randomly generated number (picked at random during programming)
  }

  double result = KAsync_shmadonka_aknuxuzla_JBL_algorithm(username, &seed); // feed into algorithm
  string result_s = std::to_string(result); //stringify
  cout << "PASSWORD: " << result_s << "\n"; //output result
}



double KAsync_shmadonka_aknuxuzla_JBL_algorithm(string uname, float * seed) {
  return 1;
