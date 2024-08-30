#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for max_element
using namespace std;

class GradeCard {
    string departmentName;
    string studentName;
    string rollNumber;
    int semester;
    vector<pair<string, int>> subjects; // pair of subject name and marks
    float CGPA;

public:
    
    GradeCard(string dept, string name, string roll, int sem, vector<pair<string, int>> subj) {
        departmentName = dept;
        studentName = name;
        rollNumber = roll;
        semester = sem;
        subjects = subj;
        CGPA = calculateCGPA();
    }

    
    float calculateCGPA() {
        int totalMarks = 0;
        for (const auto& subject : subjects) {
            totalMarks += subject.second;
        }
        
        return (totalMarks / (subjects.size() * 10.0f));
    }

    
    float getCGPA() const {
        return CGPA;
    }

    
    string getStudentName() const {
        return studentName;
    }

    
    string getRollNumber() const {
        return rollNumber;
    }
};

int main() {
    
    vector<GradeCard> gradeCards;

  
    for (int i = 1; i <= 60; i++) {
        string dept = "Computer Science";
        string name = "Student " + to_string(i);
        string roll = "CS" + to_string(1000 + i);
        int sem = 3;

        
        vector<pair<string, int>> subjects = {
            {"Math", rand() % 101},
            {"Physics", rand() % 101},
            {"Chemistry", rand() % 101},
            {"Biology", rand() % 101},
            {"Computer Science", rand() % 101}
        };

        GradeCard gc(dept, name, roll, sem, subjects);
        gradeCards.push_back(gc);
    }

  
    auto max_it = max_element(gradeCards.begin(), gradeCards.end(),
        [](const GradeCard& a, const GradeCard& b) {
            return a.getCGPA() < b.getCGPA();
        });

    
    if (max_it != gradeCards.end()) {
        cout << "Student with the highest CGPA:" << endl;
        cout << "Name: " << max_it->getStudentName() << endl;
        cout << "Roll Number: " << max_it->getRollNumber() << endl;
        cout << "CGPA: " << max_it->getCGPA() << endl;
    }

    return 0;
}
