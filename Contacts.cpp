#include <iostream>

#include "Contacts.h"

using namespace std;

//Define the default constructor.

ContactNode::ContactNode()

{

nextNodePtr=nullptr;

}

//Define the parametrized constructor.

ContactNode::ContactNode(string name, string addressof, string sales)

{

contactName=name;

contactaddressof=addressof;

contactsales=sales;

nextNodePtr=nullptr;

}

//Define the function to insert the node.

void ContactNode::InsertAfter(ContactNode *nextNode)

{

ContactNode *t;

if(nextNodePtr==nullptr)

nextNodePtr=nextNode;

else

{

t=nextNodePtr;

while(t->GetNext()!=nullptr)

{

t=t->GetNext();

}

t->InsertAfter(nextNode);

}

}

//Define the function returning name.

string ContactNode::GetName()

{

return contactName;

}

//Define the function returning Client address.

string ContactNode::Getaddressof()

{

return contactaddressof;

}

//Define the function returning nextNode.

ContactNode* ContactNode::GetNext()

{

return nextNodePtr;

}

//Define the function returning name.

string ContactNode::Getsales()


{

return contactsales;

}

//Define the function to print the link list data.

void ContactNode::PrintContactNode()

{

//Print the record of the first node.

cout<<"Contact Name: "<<GetName()<<endl;

cout<<"Contact Sales: "<<Getsales()<<endl;

cout<<"Client address: "<<Getaddressof()<<endl<<endl;

ContactNode *t = GetNext();

//Print the record of the successive nodes.

while(t!=nullptr)

{

cout<<"Contact Name: "<<t->GetName()<<endl;

cout<<"Sales: "<<t->Getsales()<<endl;

cout<<"Client address: "<<t->Getaddressof()<<endl<<endl;

t=t->GetNext();

}

}
