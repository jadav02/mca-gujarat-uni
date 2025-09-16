/*Write a program to create class Student with student’s rollno, name and
marks of three subjects (OOCP, AI and MF) and display the details of student
with total marks of all subjects along with the percentage in proper
format.(Output should be in descending order of percentage.*/

#include<iostream>
#include<string>
using namespace std;

class Student{
	
	private:
		int rollno;
    	string name;
    	float OOCP, AI, MF, Marks, per;
    	
    public:
    	void inputData(){
    		cout<< "enter roll no :";
			cin>> rollno;
			cout<< "enter name :";
			cin>> name;
			
			//validation for marks not greater then 100
			 OOCP = inputMarks("OOCP");
       		 AI   = inputMarks("AI");
           	 MF   = inputMarks("MF");
			
			calculateMarks();
		}
		
		// marks validation function
		static float inputMarks(string subject){
			float marks;
        	while (true) {
            	cout << "Enter marks for " << subject << " : ";
            	cin >> marks;
           		if (marks >= 0 && marks <= 100)
				{
            	    break;
            	}
				else 
				{
                	cout << "Invalid! Please enter between 0 and 100.\n";
            	}
       	 	}
        	return marks;
			
		}
		// make differnt function for calculate
		void calculateMarks() {
        	Marks = OOCP + AI + MF;
        	per = (Marks / 300) * 100;
    	}
		
		void displayData() {
        	cout << rollno << "\t" << name << "\t"
             << OOCP << "\t" << AI << "\t" << MF << "\t"
             << Marks << "\t" << per << "\n";
    	}
    	
    	float getPercentage() {
        	return per;
    	}
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[100]; 

   
    for (int i = 0; i < n; i++) {
        cout << "\n--- Student " << i + 1 << " ---\n";
        students[i].inputData();
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].getPercentage() < students[j + 1].getPercentage()) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    
    cout << "\n\nRollNo\tName\tOOCP\tAI\tMF\tTotal\tPercentage\n";
    cout << "-----------------------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        students[i].displayData();
    }

    return 0;
}

