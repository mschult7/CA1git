#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <stdlib.h>
#include "VoterDB.h"
using namespace std;

class Voter {
   public:
     int main(int argc, char *argv[]);
   private:

};

int main(int argc, char *argv[])
{
   string lastname="";
   string firstname="";
   int age=0;
   int stnum=0;
   string street="";
   string town="";
   string zip="";
   float amtdonated=0;
   cout << ">: ";
   string command;
   getline (cin, command);
   while(command != "Quit"){
	if(command=="New"){
		VoterDB::cmd_new(*lastname,*firstname,*age,*stnum,*street,*town,*zip,*amtdonated);
	} else if(command=="Update"){
		VoterDB::cmd_update(lastname, firstname, age, stnum,street,town,zip);
	} else if(command=="View"){
		VoterDB::cmd_view(lastname,firstname,age,stnum,street,town,zip,amtdonated);
	} else if(command=="Donate"){

	} else if(command=="Report"){

	}
   }


}
