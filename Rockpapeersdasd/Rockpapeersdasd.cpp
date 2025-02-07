
#include <iostream>
#include <string>
#include <cstdlib> 
using namespace std;

template<typename T>
T input(std::string message = "")
{
    if (!empty(message)) std::cout << message << " : ";
    T value;
    std::cin >> value;
    return value;
}

float main(){

    //This is yandere sim dev i know dont judge me
    string Operator = input<string>("Rock,paper,Scissors");

    int ai = rand() % 4;
    if (ai == 1) {
        std::cout << "Your Enemy set Rock" << endl;
      
    }
    if (ai == 2) {
        std::cout << "Your Enemy set Paper" << endl;

    }
    if (ai == 3) {
        std::cout << "Your Enemy set Scissors" << endl;

    }
    if (ai == 1 && Operator == "Rock") {
        std::cout << "tie" << endl;
    }
    if (ai == 2 && Operator == "Rock") {
        std::cout << "Ai Won" << endl;
    }
    if (ai == 3 && Operator == "Rock") {
        std::cout << "You Won" << endl;
    }
    if (ai == 1 && Operator == "Paper") {
        std::cout << "You won" << endl;
    }
    if (ai == 2 && Operator == "Paper") {
        std::cout << "tie" << endl;
    }
    if (ai == 3 && Operator == "Paper") {
        std::cout << "Ai won" << endl;
    }
    if (ai == 1 && Operator == "Scissors") {
        std::cout << "Ai won" << endl;
    }
    if (ai == 2 && Operator == "Scissors") {
        std::cout << "You won" << endl;
    }
    if (ai == 3 && Operator == "Scissors") {
        std::cout << "tie" << endl;
    }
   


    return 0;
}


