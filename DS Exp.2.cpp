#include<iostream>
#include<string>

using namespace std;

struct Employee
{
	int id;
	string name;
	float salary;
    Employee *next;
};

Employee *head = NULL;

void insertEmployee()
{
   Employee *newNode = new Employee;
   
   cout<<" Enter Employee Id :";
   cin>>newNode->id;
   
   cout<<" Enter Employee Name :";
   cin>>newNode->name;
   
   cout<<" Enter Employee Salary :";
   cin>>newNode->salary;
   
    newNode->next = NULL;

   if(head==NULL)	
   {
   	  head = newNode;
   }
   else
   {
   	  Employee *temp = head;
   	  while(temp->next !=NULL)
   	      temp = temp->next;
   	      
   	  temp->next = newNode;
   }
   
   cout << "\n Employee inserted successfully! ";
   
}

void deleteEmployee(int id)
{
	
    if (head == NULL)
    {
        cout << "List is empty!\n";
       
    }
    
    int id;
    cout << "Enter Employee ID to delete: ";
    cin >> id; 
    
    Employee *temp = head;
    Employee *prev = NULL;
}

int main()
{
	
}
