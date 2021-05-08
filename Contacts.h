#ifndef Contact_H

#define Contact_H

#include<string>

using namespace std;

//Define the class.

class ContactNode

{

public:

//Define the constructor.

ContactNode();

ContactNode(string name, string addressof, string sales);

//Define the function to insert the records.

void InsertAfter(ContactNode*);

//Define the Get.

string GetName();

string Getaddressof();

string Getsales ();

ContactNode* GetNext();

//Define the function to print the link list data.

void PrintContactNode();

//Define the data members.

private:

string contactName;

string contactaddressof;

string contactsales;

ContactNode* nextNodePtr;

};

#endif
