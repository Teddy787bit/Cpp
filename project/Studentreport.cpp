/**
-const -> Declaring a member function with the const keyword specifies that the function is a "read-only" function
that doesn't modify the object for which it's called
-Binary Files:-
     When data is stored in a file in the binary format, reading, and writing
     data is faster because no time is lost in converting the data from one format to
     another format. Such files are called binary files. This following program
     explains how to create binary files and also how to read, write, search, delete
     and modify data from binary files.
     Binary file has .bat extension. we open binary file in ios::binary|ios::app mode
     -ios::binary :-
          ios - The ios class is responsible for providing all input and output facilities to all other stream classes.
          binary - Operations are performed in binary mode rather than text.
     -ios::app :-
          ios - The ios class is responsible for providing all input and output facilities to all other stream classes.
          app - is a short form of append. All output operations happen at the end of the file, appending to its existing contents.
-reinterpret_cast -> it is a type of casting operator used in C++.
     It is used to convert a pointer of some data type into a pointer of another data type, even if the data types before and after conversion are different.
-cin.get() -> cin.get() reads a string with the whitespace.
-setprecision() -> function is used to control the number of digits of an output stream display of a floating- point value.

(**)Student report management system 
     Functionality:-
     1-Store student details in a binary file
     2-Save  student marks for subjects 
     3-Calculate student grade
     4-Search student details using roll number 
**/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// the class that stores data
class student
{
     int rollno;
     char name[50];
     int eng_marks, math_marks, sci_marks, lang2_marks, cs_marks;
     double average;
     char grade;

public:
     void getdata();          //To get student data
     void showdata() const;   //Show student data
     void calculate();        //Calculate marks of students
     int retrollno() const;   //Search using rollnumber 
}; // class ends here

void student::calculate()
{
     average = (eng_marks + math_marks + sci_marks + lang2_marks + cs_marks) / 5.0;
     if (average >= 90)
          grade = 'A';
     else if (average >= 75)
          grade = 'B';
     else if (average >= 50)
          grade = 'C';
     else
          grade = 'F';
}

void student::getdata()
{
     cout << "\nEnter student's roll number: ";
     cin >> rollno;
     cout << "\n\nEnter student name: ";
     cin.ignore();
     cin.getline(name, 50);
     cout << "\nAll marks should be out of 100";
     cout << "\nEnter marks in English: ";
     cin >> eng_marks;
     cout << "\nEnter marks in Math:  ";
     cin >> math_marks;
     cout << "\nEnter marks in Science:  ";
     cin >> sci_marks;
     cout << "\nEnter marks in 2nd language:  ";
     cin >> lang2_marks;
     cout << "\nEnter marks in Computer science:  ";
     cin >> cs_marks;
     calculate();
}
void student::showdata() const
{
     cout << "\nRoll number of student : " << rollno;
     cout << "\nName of student : " << name;
     cout << "\nEnglish : " << eng_marks;
     cout << "\nMaths : " << math_marks;
     cout << "\nScience : " << sci_marks;
     cout << "\nLanguage2 : " << lang2_marks;
     cout << "\nComputer Science :" << cs_marks;
     cout << "\nAverage Marks :" << average;
     cout << "\nGrade of student is :" << grade;
}
int student::retrollno() const
{
     return rollno;
}
// function declaration 
//Function for manipulating student data
void create_student();     //Store data in file 
void display_sp(int);     // display particular record from file 
void display_all();       // display all records from file
void delete_student(int); // delete particular record from file 
void change_student(int); // edit particular record 
void Clear() //Clearing perivous screen 
{
     system("clear"); //<- Uncomment this if you are using linux
                      // system("cls");  //<- Uncomment this if you are using windows
}
// MAIN
int main()
{
     char ch;
     cout << setprecision(2);
     do
     {
          char ch;
          int num;
          Clear();
          cout << "\n\n\n\tMENU";
          cout << "\n\n\t1.Create student record";
          cout << "\n\n\t2. Search student record";
          cout << "\n\n\t3. Display all students records ";
          cout << "\n\n\t4.Delete student record";
          cout << "\n\n\t5.Modify student record";
          cout << "\n\n\t6.Exit";
          cout << "\n\n\nWhat is your Choice (1/2/3/4/5/6) ";
          cin >> ch;
          Clear();
          switch (ch)
          {
          case '1':
               create_student();
               break;
          case '2':
               cout << "\n\n\tEnter The roll number ";
               cin >> num;
               display_sp(num);
               break;
          case '3':
               display_all();
               break;
          case '4':
               cout << "\n\n\tEnter The roll number: ";
               cin >> num;
               delete_student(num);
               break;
          case '5':
               cout << "\n\n\tEnter The roll number ";
               cin >> num;
               change_student(num);
               break;
          case '6':
               cout << "Exiting, Thank you!";
               exit(0);
          }
     } while (ch != '6');
     return 0;
}
// write student details to file
void create_student()
{
     student stud;
     ofstream oFile;
     oFile.open("student.dat", ios::binary | ios::app);
     stud.getdata();
     oFile.write(reinterpret_cast<char *>(&stud), sizeof(student));
     oFile.close();
     cout << "\n\nStudent record Has Been Created ";
     cin.ignore();
     cin.get();
}
// read file records
void display_all()
{
     student stud;
     ifstream inFile;
     inFile.open("student.dat", ios::binary);
     if (!inFile)
     {
          cout << "File could not be opened !! Press any Key to exit";
          cin.ignore();
          cin.get();
          return;
     }
     cout << "\n\n\n\t\tDISPLAYING ALL RECORDS\n\n";
     while (inFile.read(reinterpret_cast<char *>(&stud), sizeof(student)))
     {
          stud.showdata();
          cout << "\n\n====================================\n";
     }
     inFile.close();
     cin.ignore();
     cin.get();
}
// read specific record based on roll number
void display_sp(int n)
{
     student stud;
     ifstream iFile;
     iFile.open("student.dat", ios::binary);
     if (!iFile)
     {
          cout << "File could not be opened... Press any Key to exit";
          cin.ignore();
          cin.get();
          return;
     }
     bool flag = false;
     while (iFile.read(reinterpret_cast<char *>(&stud), sizeof(student))) // reinterpret_cast<char *> will convert binary data to alphabtes
     {
          if (stud.retrollno() == n)
          {
               stud.showdata();
               flag = true;
          }
     }
     iFile.close();
     if (flag == false)
          cout << "\n\nrecord does not exist";
     cin.ignore();
     cin.get();
}
// modify record for specified roll number
void change_student(int n)
{
     bool found = false;
     student stud;
     fstream fl;
     fl.open("student.dat", ios::binary | ios::in | ios::out);
     if (!fl)
     {
          cout << "File could not be opened. Press any Key to exit...";
          cin.ignore();
          cin.get();
          return;
     }
     while (!fl.eof() && found == false)
     {
          fl.read(reinterpret_cast<char *>(&stud), sizeof(student));
          if (stud.retrollno() == n)
          {
               stud.showdata();
               cout << "\n Enter new student details:" << endl;
               stud.getdata();
               int pos = (-1) * static_cast<int>(sizeof(stud));
               fl.seekp(pos, ios::cur);
               fl.write(reinterpret_cast<char *>(&stud), sizeof(student));
               cout << "\n\n\t Record Updated";
               found = true;
          }
     }
     fl.close();
     if (found == false)
          cout << "\n\n Record Not Found ";
     cin.ignore();
     cin.get();
}
// delete record with particular roll number
void delete_student(int n)
{
     student stud;
     ifstream iFile;
     iFile.open("student.dat", ios::binary);
     if (!iFile)
     {
          cout << "File could not be opened... Press any Key to exit...";
          cin.ignore();
          cin.get();
          return;
     }
     ofstream oFile;
     oFile.open("Temp.dat", ios::out);
     iFile.seekg(0, ios::beg);
     while (iFile.read(reinterpret_cast<char *>(&stud), sizeof(student)))
     {
          if (stud.retrollno() != n)
          {
               oFile.write(reinterpret_cast<char *>(&stud), sizeof(student));
          }
     }
     oFile.close();
     iFile.close();
     remove("student.dat");
     rename("Temp.dat", "student.dat");
     cout << "\n\n\tRecord Deleted ..";
     cin.ignore();
     cin.get();
}