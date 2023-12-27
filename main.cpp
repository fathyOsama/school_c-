#include <iostream>
#include <vector>
#include<string>
using namespace std;

struct student{
 bool isScholler;
 string name;
 string duildingchar;
 float arr[4];
};
struct teacher
{
     string name;
     int age;
     string subjects[3];
};
void  studentfun(vector<student> &stdVec);
void  teacherfun( vector<teacher> &ftdvec);
void prientStudent(vector<student> &stdVec);
void printTeacher( vector<teacher> &ftdvec);


void prientStudent( vector<student> &stdVec)
{
  vector<student>::iterator iter;
            for(iter=stdVec.begin(); iter !=stdVec.end();++iter)
    {
        student studena;
        studena = *iter;

      cout <<"isScholler (student): " << "(" << studena.isScholler<< ")" << endl;
      cout <<"name (student): "<<"("<< studena.name<<")"<< endl;
      cout <<"duildingchar (student): " <<"("<< studena.duildingchar<<")"<< endl;

      for(int j=0; j<4; j++)
      {
        cout<<"year (student)" << j+1 << " :" <<"("<< studena.arr[j]<<")"<< endl;
      }
      cout << endl;
    }
}
void studentfun(vector<student> &stdVec)
{
        int st_size;
    cout << " sizeof (student): ";
    cin>>st_size;
   // student stdArr[st_size];



        for (int i=0;i<st_size;i++)
    {
        student tempStudent;
        cout<<"enter the is Scoller with vector"<<endl;
        cout << "isScholler (student) " << i+1 << " : ";
        cin>>tempStudent.isScholler;
        cout << endl;
        cout << "name (student) " << i+1 << " : ";
        cin>>tempStudent.name;
        cout << endl;
        cout << "duildingchar (student) "<<i+1 << " : ";
        cin>>tempStudent.duildingchar;
        cout << endl;
         for(int j=0; j<4; j++)
      {
          cout <<"year (student) " << j+1 << " : ";
          cin >> tempStudent.arr[j];
          cout << endl;
      }
        stdVec.push_back(tempStudent);



//        cin >> stdArr[i].isScholler;
//
//        cin >> stdArr[i]. name;
//
//        cin >> stdArr[i].duildingchar;


    }
    cout << "print:(student)enter number::(1)" <<endl;
    cout << "no print:(student)enter number::(2)"<<endl;
    int print2;
    cin>>print2;
    if(print2==1)
    {
    prientStudent(stdVec);
    }
    else if(print2==2)
    {
        cout << "sorry no print (student) " << endl;
    }

}
void printTeacher( vector<teacher> &ftdvec)
{

    vector<teacher>::iterator iter2;


    for(iter2=ftdvec.begin();iter2 != ftdvec.end();++iter2)
    {
    teacher teachea;
    teachea= *iter2;
    cout <<"name (teacher): "<<"("<<teachea.name<<")"<< endl;
    cout <<"age (teacher): "<<"("<<teachea.age<<")"<< endl;

    for(int j=0; j<3; j++)
    {
      cout<< "subjects (teacher)"<<j+1<<" :"<<"("<<teachea.subjects[j]<<")"<< endl;
    }
     cout << endl;
    }

}
void teacherfun(vector<teacher> &ftdvec)
{
          int t_size;
    cout << " sizeof (teacher): ";
    cin >> t_size;
    //teacher ftdArr[t_size];
    for(int i=0;i< t_size;i++)
    {
        teacher tempteacher;
         cout << "name (teacher) " << i+1 << " : ";
        // cin >>  tempteacher.name ;
        cin.ignore();
       getline(cin, tempteacher.name);

         cout << endl;
         cout << "age (teacher)" << i+1 << " : ";
         cin >> tempteacher.age;
         cout << endl;

        for(int f=0;f<3;f++)
        {
            cout << "subjects (teacher)" << f+1 << " : ";
            cin >> tempteacher.subjects[f];
            cout << endl;
        }
          ftdvec.push_back(tempteacher);
    }
    cout << "print:(teacher) enter number::(1)" <<endl;
    cout << "no print:(teacher) enter number::(2)"<<endl;
    int print;
    cin >>print;
    if(print==1)
    {
      printTeacher( ftdvec);
    }
    else if(print==2)
    {
        cout << " sorry no print (teacher)" << endl;
    }


}
void init(vector<student> &stdVec,vector<teacher> &ftdvec)
{
     string userName[]={"fathey","osama","shehab","ismel"};
    cout << "enter the userName : " << endl;
    string userName1;
    cin >> userName1;
    int password[]={123,234,456,678};
    cout << "enter the password : " << endl;
    int passwordl;
    cin >> passwordl;
    bool isUser = false;
   for(int i=0;i<4;i++)
    {

    if(userName[i] == userName1 &&  password[i] ==passwordl){
            isUser = true;
            break;
    }
    }
  if(isUser){
        while(true){
               cout << "=============================\n";
               cout << "Add (student) press (1)" <<endl;
               cout << "Add(teacher) press (2)" << endl;
               cout << "print(students) press number (3)" <<endl;
               cout << "print(teachers) press  number (4)" <<endl;
               cout << "if want to exit press number (5)" << endl;


    int choose;
    cin >> choose;
    if(choose==1)
    {
    studentfun(stdVec);
    }
    else if(choose==2)
    {
    teacherfun(ftdvec);
    }
    else if(choose==3)
    {
    prientStudent(stdVec);
    }
    else if(choose==4)
    {
    printTeacher(ftdvec);
    }
    else
    {
        break;

    }
        }

  }
}
int main()
{
vector<student>stdVec;
vector<teacher>ftdvec;
   init(stdVec,ftdvec);
  return 0;
}
