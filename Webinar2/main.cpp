#include <iostream>
#include <string>

static int get_age() {  
	int age = 0; // Initialize the variable to avoid uninitialized memory usage  
	std::cout << "Enter pupil age: ";  
	bool valid_input = false;  
	while (!valid_input) {  
		std::cin >> age; // Read input from the user  
		if (age < 5 || age > 18) {  
			std::cout << "Age must be between 5 and 18. Please enter a valid age: ";  
		} else {  
			valid_input = true; // Valid input received  
		}  
	}  
	return age;  
}


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
	   std::string username = "User" + std::to_string(student_counter);
	   std::cout << "Pupil " << student_counter << " username: " << username << std::endl;
	   ++student_counter;
   }
   return 0;
}
