#include <iostream>

#include<string>

#include "Contacts.h"

using namespace std;

int main()

{

//Create a link list pointer.

ContactNode *contactList = nullptr;

//Define the variables.

string name;

string addressof;

string sales;

//Prompt the user to enter the data.

for(int i=0;i<3;i++)

{

cout<<"\nClient"<<i+1<<endl;

cout<<"Enter name: " ;

getline(cin,name);

cout<<"Enter sales: " ;

getline(cin,sales);

cout<<"Client address: " ;

getline(cin,addressof);



cout << "\nYou entered: " << name << ", "<<addressof<< ", "<<sales ;

cout << "\nPress Enter " <<endl;

//Create a linklist pointer

ContactNode *t;

//Create new node and add data.

t = new ContactNode(name, addressof, sales);

if(contactList==nullptr)

{

contactList = t;

}

//Insert the node in link list.

else

{

contactList->InsertAfter(t);

}

cin.ignore();

}

//Display the message.

cout<<endl<<endl<<"Contact List :"<<endl<<endl;

//Call the function to display the link list data.

contactList->PrintContactNode();

return 0;

}
