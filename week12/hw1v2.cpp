#include <iostream>
#include <vector>

struct Student {
    std::string name;
    int age;
    // Add more fields as needed
};

int main() {
    std::vector<Student> students;

    while (true) {
        Student student;
        std::cout << "Enter student name: ";
        std::cin >> student.name;
        std::cout << "Enter student age: ";
        std::cin >> student.age;

        students.push_back(student);

        char choice;
        std::cout << "Do you want to add another student? (y/n): ";
        std::cin >> choice;

        if (choice != 'y') {
            break;
        }
    }

    // Output all student data
    for (const auto& student : students) {
        std::cout << "Name: " << student.name << ", Age: " << student.age << std::endl;
    }

    return 0;
}