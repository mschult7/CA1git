#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <stdlib.h>
#include <string>
#include "VoterDB.h"
using namespace std;


 void cmd_new(string& lastname,string& firstname, int& age, int& stnum, string& streetname, string& town, string& zip, float& amtdonated){
   cout << "\nEnter First Name\n";
   cout << ">: ";
   cin>>firstname;
   cout << "\nEnter Last Name\n";
   cout << ">: ";
   cin>>lastname;
   cout << "\nEnter Age\n";
   cout << ">: ";
   cin>>age;
   cout << "\nEnter Street Number\n";
   cout << ">: ";
   cin>>stnum;
   cout << "\nEnter Street Name\n";
   cout << ">: ";
   cin>>streetname;
   cout << "\nEnter Town\n";
   cout << ">: ";
   cin>>town;
   cout << "\nEnter Zipcode\n";
   cout << ">: ";
   cin>>zip;
   amtdonated=0.0;

   return;
}

 void cmd_update(string& lastname,string& firstname, int& age, int& stnum, string& streetname, string& town, string& zip){
   string input="";
   int intin=0;
   cout << "\nEnter y or n\n";
   cout << "Change First Name? (" << firstname << ")\n";
   cout << ">: ";
   cin>>input;
  if((input)=="y"){
      cout << "\n>: ";
      cin>>firstname;
      input="";
   }
   cout << "\nChange Last Name? (" << lastname << ")\n";
   cout << ">: ";
   cin>>input;
   if((input)=="y"){
      cout << "\n>: ";
      cin>>lastname;
      input="";
   }
   cout << "\nChange Age? (" << age << ")\n";
   cout << ">: ";
   cin>>input
   if((input)=="y"){
	    cout << "\n>: ";
      cin>>age;
      input="";
   }
   cout << "\nChange Street Number? (" << stnum << ")\n";
   cout << ">: ";
   cin>>input;
  if((input)=="y"){
	    cout << "\n>: ";
      cin>>stnum;
      input="";
   }
   cout << "\nChange Street Name? (" << streetname << ")\n";
   cout << ">: ";
   cin>>input
   if((input)=="y"){
	    cout << "\n>: ";
      cin>>streetname;
      input="";
   }
   cout << "\nChange Town? (" << town << ")\n";
   cout << ">: ";
   cin>>input;
   if((input)=="y"){
	    cout << "\n>: ";
    cin>>town;
      input="";
   }
   cout << "\nChange Zipcode? (" << zip << ")\n";
   cout << ">: ";
   cin>>input;
   if((input)=="y"){
	    cout << "\n>: ";
      cin>>zip;
      input="";
   }

   return;
}

 void cmd_view(string& lastname,string& firstname, int& age, int& stnum, string& streetname, string& town, string& zip, float& amtdonated){
   cout << firstname << " " << lastname << ", " << age << "\n";
   cout << stnum << " " << streetname << "\n";
   cout << town << " " << zip << "\n";
   cout << "Amount Donated: $" << amtdonated;

   return;
}
