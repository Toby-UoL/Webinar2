#include <iostream>
#include <string>

int main() {
   std::cout << "Pupil Username Program" << std::endl;
   std::cout << "========================" << std::endl;
   int student_counter = 1;
   while (student_counter <= 20) {
	   std::string forename;
	   std::string surname;
	   int age;
	   std::cout << "Enter pupil " << student_counter << " firstname: ";
	   std::cin >> forename;
	   std::cout << "Enter pupil " << student_counter << " lastname: ";
	   std::cin >> surname;
	   std::cout << "Enter pupil " << student_counter << " age: ";
	   std::cin >> age;
	   std::string username = "User" + std::to_string(student_counter);
	   std::cout << "Pupil " << student_counter << " username: " << username << std::endl;
	   ++student_counter;
   }
   return 0;
}
