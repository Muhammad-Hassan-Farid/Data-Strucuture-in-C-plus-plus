#include<iostream>
using namespace std;

struct Student
{
    string Name;
    string Address;
    int id;
    double gpa;
    Student *next_student;

};

Student *start=NULL;
Student *last=NULL;

void inserdata( string name, string address, int Id, double Gpa)
{
    Student *newnode= new Student();
    if(start==NULL && last==NULL)
    {
    newnode->Name=name;
    newnode->Address=address;
    newnode->id=Id;
    newnode->gpa=Gpa;
    newnode->next_student=start;
    start=newnode;
    last=newnode;
    }
    else
    {
        Student *curr=new Student();
        curr->Name=name;
        curr->Address=address;
        curr->id=Id;
        curr->gpa=Gpa;
        last->next_student=curr;
        last=curr;

    }
    

}
void serach()
{
    Student *find=start;
    string searchName;
    cout<<"Enter the name: ";
    cin>>searchName;
    while(find!=NULL)
    {
        if(find->Name==searchName)
        {
            cout<<"\n Name: "<<find->Name;
            cout<<"\n Address :"<<find->Address;
            cout<<"\n ID: "<<find->id;
            cout<<"\n GPA: "<<find->gpa;
            break;
        }
        find=find->next_student;
    }

}
void delet()
{
    Student *curr=start;
    Student *prev;
    string deletename;
    cout<<"Enter the for Deletion: ";
    cin>>deletename;
    while(curr!=NULL)
    {
        if(curr->Name==deletename)
        {
            Student *temp=curr;
            prev->next_student=temp->next_student;
            delete temp;
            break;
        }
    prev=curr;
    curr=curr->next_student;
    }

    
}

void display()
{
    Student *curr=start;
    while(curr!=0)
    {
        cout<<"\n Name: "<<curr->Name;
        cout<<"\n Address: "<<curr->Address;
        cout<<"\n ID: "<<curr->id;
        cout<<"\n GPA: "<<curr->gpa;
        cout<<endl;
        curr=curr->next_student;
    }
}


int main()
{
    system("cls");
    int n;
    string name,address;
    int Id;
    double Gpa;
    int counter=1;
    cout<<"How many students data you want to enter: ";
    cin>>n;
    cout<<endl;
    while(counter<=n)
    {
        cout<<"Enter the data of "<<counter<<" student: ";
        cin>>name;
        cout<<"Enter the Address: ";
        cin>>address;
        cout<<"Enter the ID: ";
        cin>>Id;
        cout<<"Enter the gpa: ";
        cin>>Gpa;
        inserdata(name,address,Id,Gpa);
        cout<<endl;
        counter++;

    }
    display();
    cout<<endl;
    serach();
    cout<<endl;
    delet();
    cout<<endl;
    display();



}
