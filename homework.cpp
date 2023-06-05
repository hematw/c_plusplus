#include <iostream>
using namespace std;


void getScore(int& score);
void printGrade(int score);


int main(){
	int courseScore;
	cout << "This program computes the course grade." << endl; 
	getScore(courseScore); 
	printGrade(courseScore);
	
	 return 0; }
	 
	 
void getScore(int& score){ 
 
	cout << "Enter course score: "; 
	cin >> score;
	cout << endl << "Course score is " << score << endl; } 


void printGrade(int cScore){  
	cout << "Your grade for the course is "; 

switch (cScore/10){
	case 10: case 9:
		cout << "A." << endl;
		break;
	case 8:
		cout << "B." << endl;
		break;
	case 7:
		cout << "C." << endl; 
		break;
	case 6:
		cout << "D." << endl; 
		break;
	default:
		cout << "F." << endl;
	}}
