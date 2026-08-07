#include<iostream>
using namespace std;

 class Student
 {
 	char Name[100];
 	int PRN;
 	float Marks;
 	
 	public:
 		
 	void setData()
	{
		cout<<"Enter Student Details:\n";
		
		cout<<"\nEnter Student Name:";
		cin>>Name;
		
		cout<<"\nEnter Student PRN:";
		cin>>PRN;
		
		cout<<"\nEnter Student Marks:";
		cin>>Marks;
 }
   void displayData()
  {
  	cout<<"==========STUDENT DETAILS==========";
  	
  	cout<<"\nStudent Name:"<<Name<<endl;
  	
  	cout<<"\nStudent PRN:"<<PRN<<endl;
  	
  	cout<<"\nStudent Marks:"<<Marks<<endl;
  	
   } 	
 };
int main()
{ 
    
	int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student *ptr = new Student[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Student " << i + 1 << endl;
        (ptr + i)->setData();
    }

    cout << "\n<<<<<<<<<<STUDENT DETAILS>>>>>>>>>>\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        (ptr + i)->displayData();
    }	
}
