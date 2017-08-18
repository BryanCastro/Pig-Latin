#include <iostream>
#include <string>

int main() {

	std::string word;
	char option;

	std::cout << "=============================" << std::endl;
	std::cout << "=     Pig Latin Converter   =" << std::endl;
	std::cout << "=============================" << std::endl;

	std::cout << "Enter Word: ";
	std::cin >> word;
	std::cout << std::endl;
	char temp = word[0];	//stores first letter of word into char temp
	int size = word.length(); //stores size of word into int size

	for (int i = 1; i < size; i++) { //moves every character in the word one position forward except the last character in the word
		char temp2 = word[i]; //starts at 2nd letter of word
		word[i - 1] = temp2; //replaces letter before with letter stored in temp2
	}
	word[size - 1] = temp; //sets the last letter in the word to what the first letter was
	word = word + 'a'; //appends an 'a' to the end of the word finalizing the pig latin conversion

	std::cout << "Pig Latin: " << word << std::endl; //prints out the initial word in pig latin
	std::cout << std::endl;
	std::cout<<"Try again?(Y/N): "; //ask user if they want to enter a new word
	std::cin >> option;

	if (option == 'y' || option=='Y') {
		system("CLS"); //clears screen
		main(); //returs main
	}
	else if (option == 'n' || option == 'N') {
		exit(1); //exits application
	}
	else {
		std::cout << std::endl;
		std::cout << "Invalid option chosen, program will now terminate...."<<std::endl;
		std::cin.fail(); //checks for failure in input
		std::cin.clear(); //clears input
		std::cin.ignore(1000, '\n'); //ignores up to 1000 invalid characters input by user
		exit(1); //exits application
	}
	return 0;
}