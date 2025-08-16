#include <iostream>
#include <string>
#include <vector>

// Define a structure to hold student information
struct Student {
    std::string name;
    int studentID;
    std::string email;
    std::string phoneNumber;
};

int main() {
    // Create a vector to store Student objects
    std::vector<Student> students;

    // Add some student records
    Student student1 = {"Peter Parker", 1001, "Spiderfan@yahoo.com", "555-336-8275"};
    students.push_back(student1);

    Student student2 = {"Ben Reilly", 1002, "Superfan@gmail.com", "555-258-8641"};
    students.push_back(student2);

    // Display student information
    std::cout << "Student Database:" << std::endl;
    for (const auto& student : students) {
        std::cout << "Name: " << student.name << std::endl;
        std::cout << "ID: " << student.studentID << std::endl;
        std::cout << "Email: " << student.email << std::endl;
        std::cout << "Phone: " << student.phoneNumber << std::endl;
        std::cout << std::endl;
    }

    return 0;
}