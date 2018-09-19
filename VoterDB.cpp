#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <stdlib.h>
#include <string>
#include "VoterDB.h"
using namespace std;


 void cmd_new(string& lastname,string& firstname, int& age, int& stnum, string& streetname, string& town, string& zip, float& amtdonated){
   int intin=0;
   cout << "\nEnter First Name\n";
   cout << ">: ";
   getline (cin, firstname);
   cout << "\nEnter Last Name\n";
   cout << ">: ";
   getline (cin, lastname);
   cout << "\nEnter Age\n";
   cout << ">: ";
   cin>>intin;
   age=intin;
   intin=0;
   cout << "\nEnter Street Number\n";
   cout << ">: ";
   cin>>intin;
   age=intin;
   intin=0;
   cout << "\nEnter Street Name\n";
   cout << ">: ";
   getline (cin, streetname);
   cout << "\nEnter Town\n";
   cout << ">: ";
   getline (cin, town);
   cout << "\nEnter Zipcode\n";
   cout << ">: ";
   getline (cin, zip);
   amtdonated=0.0;

   return;
}

 void cmd_update(string& lastname,string& firstname, int& age, int& stnum, string& streetname, string& town, string& zip){
   string input="";
   int intin=0;
   cout << "\nEnter Y or N\n";
   cout << "Change First Name? (" << firstname << ")\n";
   cout << ">: ";
   getline(cin,input);
  if((input)=="y"){
      cout << "\n>: ";
      getline (cin, firstname);
      input="";
   }
   cout << "\nChange Last Name? (" << lastname << ")\n";
   cout << ">: ";
   getline(cin,input);
   if((input)=="y"){
      cout << "\n>: ";
      getline (cin, lastname);
      input="";
   }
   cout << "\nChange Age? (" << age << ")\n";
   cout << ">: ";
   getline(cin,input);
  if((input)=="y"){
	    cout << "\n>: ";
      cin>>intin;
      age=intin;
      intin=0;
      input="";
   }
   cout << "\nChange Street Number? (" << stnum << ")\n";
   cout << ">: ";
   getline(cin,input);
  if((input)=="y"){
	    cout << "\n>: ";
      cin>>intin;
      age=intin;
      intin=0;
      input="";
   }
   cout << "\nChange Street Name? (" << streetname << ")\n";
   cout << ">: ";
   getline(cin,input);
   if((input)=="y"){
	    cout << "\n>: ";
      getline (cin, streetname);
      input="";
   }
   cout << "\nChange Town? (" << town << ")\n";
   cout << ">: ";
   getline(cin,input);
   if((input)=="y"){
	    cout << "\n>: ";
      getline (cin, town);
      input="";
   }
   cout << "\nChange Zipcode? (" << zip << ")\n";
   cout << ">: ";
   getline(cin,input);
   if((input)=="y"){
	    cout << "\n>: ";
      getline (cin, zip);
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
