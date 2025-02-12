#include <iostream> 
#include <string> 
#include <cstdlib> 
using namespace std; 
int main() { 
 
    system("cls"); 
 
    int student_id; 
    string student_name; 
    char student_gender; 
    int student_age; 
    float score1, score2, score3, total_score, average; 
    string contact; 
 
    cout << "\t==========>> Input Student Information 
    <<==========\n\n"<<endl; 
    cout << "Enter Student Id : ";  
    cin >> student_id ;  
    cout << "Enter Student Name : ";  
    cin >> student_name ;  
    cout << "Enter Student Age : ";  
    cin >> student_age ; 
    cout << "Enter Student Contact : ";  
    cin >> contact ;  
    cout << "Enter Score 1 : ";  
    cin >> score1 ; 
    cout << "Enter Score 2 : ";  
    cin >> score2 ; 
    cout << "Enter Score 3 : ";  
    cin >> score3 ; 
 
    total_score = score1 + score2 +score3 ; 
    average = total_score/3 ; 
 
    system("cls"); 
    system("color A4"); 
 
    cout << "\t==========>> Output Student Information <<==========\n\n"<<endl; 
    cout << "Student ID : "<<student_id << endl;  
    cout << "Student Name : " << student_name << endl;  
    cout << "Student Age : " << student_age << endl ; 
    cout << "Student Contact : " << contact << endl ;     
    cout << "Total Score : " << total_score << endl; 
    cout << "Average Score : " << average << endl; 
 
    return 0 ; 
}