#include <iostream>
using namespace std;


int main(){
    float math, english, science;
    char grade;
    cout << "Enter the marks for math: "; 
    cin >> math;
    cout << "Enter the English for math: "; 
    cin >> english;
    cout << "Enter the Science for math: "; 
    cin >> science;

    if (math > 100 || english > 100 || science > 100)
    {
        cout << "Marks range is out of limit\n";
    }else if(math < 0 || english < 0 || science < 0){
        cout << "Marks range is under limit\n";
    }
    

    float avg = (math+english+science) / 3;
    
    if (avg >= 90 && avg <100)
    {
        grade = 'O';
    }
    else if(avg >= 80 && avg < 90){
        grade = 'A';
    }
    else if(avg >= 70 && avg < 80){
        grade = 'B';
    }
    else if(avg >= 60 && avg < 70){
        grade = 'C';
    }
    else if(avg >= 45 && avg < 60){
        grade = 'D';
    }
    else if(avg < 45){
        grade = 'F';
    }

    cout << "Grade of your student is: " << grade;
    
    return 0;
}