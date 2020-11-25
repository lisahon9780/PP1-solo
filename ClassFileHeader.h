#ifndef CLASSFILEHEADER_H
#define CLASSFILEHEADER_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <numeric>
using namespace std;

class Reports{
  public:
    void ClassOfferings () const;
	void ClassRoster () const;	
	void GradesLetter1()const;
	void GradesLetter2()const;
    void GradesAvg1()const;
	void GradesAvg2()const;
    void HighestGrade()const;
    void ClassAverage1()const;
	void ClassAverage2()const;
    void ClassOverall1()const;
	void ClassOverall2()const;
    void printClass1()const;
	void printClass2()const;
	void headings();
  private:
	// Class Offerings
	string rubric, course_name, instructor, days;
	double course_number, section, time, seats, enrolled, openings;
	vector <double> CRN; // adds variables from course_number to vector.
	vector <string> Rubrics; // adds variables from rubric to vector.
	vector <double> Sections; // adds variables from section to vector.
	vector <string> Courses; // adds variables from course_name to vector.
    vector <string> Teachers; // adds variables from instructor to vector.
    vector <string> DaysofWeek; // adds variables from days to vector.
    vector <double> Times; // adds variables from time to vector.
	vector <double> SeatsAvailable; // adds variables from enrolled to vector.
    vector <double> StudentsEnrolled; // adds variables from enrolled to vector.
    vector <double> NumberofOpenings; // adds variables from openings to vector.
	// Class Roster	
	string first, last, mi, email, id, crn; // variables for getline when reading in file.
    vector <string> nameFirst; // adds variables from first to vector.
    vector <string> nameLast; // adds variables from last to vector.
    vector <string> middleInitial; // adds variables from mi to vector.
    vector <string> studentEmail; // adds variables from email to vector.
    vector <string> studentID; // adds variables from id to vector.
	vector <double> CRNEnrolled; // adds variables from enrolled course_number to vector.
	// variables for CIT1325
    string first, last;
	double g1, g2, g3, g4,gF; // variables for getline when reading in file.
    vector <string> nameFirst1; // adds variables from first to vector.
    vector <string> nameLast1; // adds variables from last to vector.
    vector <double> gradeOne1; // adds variables from g1 to vector.
    vector <double> gradeTwo1; // adds variables from g2 to vector.
    vector <double> gradeThree1; // adds variables from g3 to vector.
    vector <double> gradeFour1; // adds variables from g4 to vector.
    vector <double> gradeFinal1; // adds variables from gF to vector.
    vector <double> studentAverage1;
    int classSize1;
    double tempAvg1;
    char letter1;
	// variables for CIT1350
    vector <string> nameFirst2; // adds variables from first to vector.
    vector <string> nameLast2; // adds variables from last to vector.
    vector <double> gradeOne2; // adds variables from g1 to vector.
    vector <double> gradeTwo2; // adds variables from g2 to vector.
    vector <double> gradeThree2; // adds variables from g3 to vector.
    vector <double> gradeFour2;// adds variables from g4 to vector.
    vector <double> gradeFinal2;// adds variables from gF to vector.
    int classSize2;
    double tempAvg2;
    vector <double> studentAverage2;
    char letter2;
};
#endif






