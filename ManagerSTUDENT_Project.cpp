				///SCHOOL MANAGER PROJECT USING STRING BE USE TO STORE STUDENT AND LECTURER INFO DATA ////

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <conio.h>		
#include <windows.h>

using namespace std;

struct student
{
	string id;
	string fname;
	string lname;
	string registration;
	string classes;
}studentData;

struct teacher
{
	string id_name;
	string fst_name;
	string lat_name;
	string qualification;
	string exp;
	string pay;
	string sub;
	string lec;
	string addrs;
	string cel_no;
	string blog_grp;
}tech[50];

int main()
{
	int i = 0, j ;
	char choice;
	string find;
	string srch;
	
	

	
while(1)
{
	system("cls");
	cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n";
	
													cout << "\n\n\t\t\tSCHOOL MANAGERMENT SYSTEM\n\n";
														
	cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n";
 	
	cout << "\n\n\t\t\t MAIN SCREEN \n";
	cout << "\n\n\t\t Enter Your Choice:" <<endl;
	cout << "\n\n\t\t\t 1. STUDENT INFO DATA" <<endl;
	cout << "\n\n\t\t\t 2. LECTURER INFO DATA" <<endl;
	cout << "\n\n\t\t Press Any Key To Exit Program \n" <<endl;
	cout << "\tOPEN PROCESS: ";

	cin >> choice;
	
	system("cls");
	
	switch(choice)
	{
		case '1':
		{
			while(1)
			{
				system("cls");
				cout << "_________________________________|  * * *  |__________________________________ \n";
				cout <<"\n\t\t\t STUDENT INFORMATION DATA\n\n\n";
				cout <<"\t\t\t* Enter Your Choice: \n" <<endl;
				cout <<"\n\t\t 1. New Student \n" <<endl;
				cout <<"\n\t\t 2. Student Manager \n" <<endl;
				cout <<"\n\t\t 3. Jump to Main \n" <<endl;
				cout << "\tOPEN PROCESS '1' To: " ;
	
				cin >>choice;
				
				switch(choice)
				{
					case '1': 
					
					cout<<"\t\t * CREAT A NEW STUDENT DATA: \n" <<endl;
					
					{ ofstream f1("student.txt",ios::app);
					cout << "\n\t ->Please Fill the Information Below by Clearly\n\n";
		
					for(i = 0; choice != 'n'; i++)
					{
						if((choice == 'y') || (choice =='Y') || (choice == '1'))
						{
							cout << "\t Enter Student ID: ";
							cin  >> studentData.id; 
							cout << "\t Enter First Name: ";
							cin  >> studentData.fname ;
							cout << "\t Enter Last Name: ";
							cin  >> studentData.lname;
							cout << "\t Enter Registration number: ";
							cin  >> studentData.registration;
							cout << "\t Enter Class: ";	
							cin  >> studentData.classes;
							
							f1 << studentData.id <<endl << studentData.fname <<endl << studentData.lname <<endl 
							   << studentData.registration <<endl <<studentData.classes <<endl;
							   
							cout <<	"\n\n\n\t\t\t CONGRATGULATION REGISTER SUCCESSFULL!! Please Remmember Your ID. \n\n";   
							cout << "\n\n\t Thank You For Your Register Please Kindly to Press ->'Y'<- for Continue and ->'N'<- to SAVE and FINISH";
							cin >>choice;
						}
					}
					f1.close();
					}	
					continue;
					
					case '2':
							cout<<"\t\t* STUDENT MANAGER:";
						{ ifstream f2("student.txt");
							
							cout << "\n\n\t\t\t STUDENT INFO DATA ";
							cout << "\n\n\t ->Please Enter A Student ID to Continue Process\n";
							cout << "\n\n\t\tPLEASE ENTER STUDENT Id: ";
							cin >> find;
							cout << endl;
							
							int notFound = 0;
							for ( j = 0; (j<i) || (!f2.eof());j++)
							{
								getline(f2, studentData.id);
								
								if(studentData.id == find)
								{
									notFound = 1;
									cout << "\t ID: " <<studentData.id <<endl;
									getline( f2, studentData.lname ), getline( f2, studentData.fname );
									cout << "\t FUll Name: " << studentData.fname << studentData.lname <<endl;					
									getline(f2, studentData.registration);				
									cout << "\t Registration Number: " <<studentData.registration <<endl;
									getline(f2, studentData.classes);
									cout << "\t class: "<<studentData.classes <<endl <<endl;							
								}
							}
							if(notFound == 0){
								cout << "No Record Found" <<endl;
							}
								f2.close();
								cout << "Press Any Key Tow Time End to Proceed";
								getch();
								getch();
						}
						continue;				
												
					case '3':
					{
						break;
					}
				}
				break;	
			}
			continue;				
		}
		case '2':
		{
			while(1)
			{
				system("cls");
				cout << "_________________________________|  * * *  |__________________________________ \n";
				cout << "\n\t\t\t LECTURER INFORMATION DATA \n\n\n";
				cout << "\t\t\t* Enter Your Choice: \n" <<endl;
				cout << "\n\t\t 1. New Lecturer \n" <<endl;
			 	cout << "\n\t\t 2. Find Lecturer Data \n" <<endl;
				cout << "\n\t\t 3. Jump To Main\n" <<endl;
				cout << "\t OPEN PROCESS '2' TO: ";
				cin >> choice;
					
				switch (choice)
				{
					case '1':
					{	
						cout<<"\t\t *CREAT A NEW LECTURER DATA:\n";
					
						ofstream t1 ("teacher.txt",ios::app);
						cout << "\n\t ->Please Fill the Information Below by Clearly\n\n";
							
						for (i = 0; choice != 'n' && choice != 'N'; i++)
						{
							if ((choice =='y') || (choice == 'Y') || (choice == '1'));
							{
								cout << "\n\t Enter ID: ";
								cin >> tech[i].id_name; cin .clear();
								cout << "\t Enter First Name: ";
								cin  >> tech[i].fst_name;  cin .clear();
								cout << "\t Enter Last Name: ";
								cin  >> tech[i].lat_name; cin .clear();
								cout << "\t Enter Qualificaltion: ";
								cin  >> tech[i].qualification; cin .clear();
								cout << "\t Enter Experience: ";
								cin  >> tech[i].exp; cin .clear();
								cout << "\t Enter Subject Tech: ";
								cin  >> tech[i].sub; cin .clear();
								cout << "\t Enter Time Tech(per week): ";
								cin  >> tech[i].lec; cin .clear();
								cout << "\t Enter Salary: ";
								cin  >> tech[i].pay; cin .clear();
								cout << "\t Enter Address: ";
								cin >> tech[i].addrs; cin .clear();
								cout << "\t Enter Phone Number: ";
								cin  >> tech[i].cel_no; cin .clear();
								cout << "\t Enter Blog Group: ";
								cin  >> tech[i].blog_grp; cin .clear();
								
								t1 << tech[i].id_name<<endl
								   << tech[i].fst_name<<endl 	  <<tech[i].lat_name<<endl 
								   << tech[i].qualification<<endl <<tech[i].exp<<endl
														 		  <<tech[i].sub<<endl
								   << tech[i].lec<<endl 		  <<tech[i].pay<<endl 
								   << tech[i].cel_no<<endl 		  <<tech[i].blog_grp<<endl;	
								   
								cout <<	"\n\n\n\t\t\t CONGRATGULATION REGISTER SUCCESSFULL!! Please Remmember Your ID. \n\n";   
								cout << "\n\n\t\t Thank You For Your Register Please Kindly to Press ->'Y'<- for Continue and ->'N'<- to SAVE and FINISH";
								cin  >> choice;				
							}
						}
						system("cls");
							
						t1.close();
					}
					continue;
					
					case '2':
					{
						cout<<"\t\t * LECTURER INFO DATA: ";
						
						ifstream t2("teacher.txt");
						
						cout << "\n\t\t\t TECHER INFO LIST ";
						cout << "\n\n\t ->Please Enter A Lecturer ID to Continue Process\n";
						cout << "\n\t\t PEASE ENTER LECTURER ID : ";
						cin  >>find;
						
						
						cout << endl;
						int notFound = 0;
						for(j = 0; ((j<i) || (!t2.eof())); j++)
						{
							
							getline(t2,tech[j].id_name);
							
							if(tech[j].id_name == find)
							{
								notFound = 1;
								cout << "\t ID : " <<tech[j].id_name;
								getline(t2,tech[j].fst_name);
								getline(t2,tech[j].lat_name);
								cout << "\t Full Name :" <<tech[j].fst_name << tech[j].lat_name <<endl;
								getline(t2,tech[j].qualification);
								cout << "\t Qualification: " <<tech[j].qualification <<endl;
								getline(t2,tech[j].exp);
								cout << "\t Experience: " <<tech[j].exp <<endl;
								getline(t2,tech[j].sub);
								cout << "\t Subject: " <<tech[j].sub <<endl;
								getline(t2,tech[j].lec);
								cout << "\t Time Tech(per week: " <<tech[j].lec <<endl;
								getline(t2,tech[j].pay);
								cout << "\t Salary: " <<tech[j].pay <<endl;
								getline(t2,tech[j].addrs);
								cout << "\t Address: " <<tech[j].addrs <<endl;
								getline(t2,tech[j].cel_no);
								cout << "\t Phone : " <<tech[j].cel_no <<endl;
								getline(t2,tech[j].blog_grp);
								cout << "\t Group: " <<tech[j].blog_grp <<endl;
							}
						}
						t2.close();
						if(notFound == 0){
							cout << "No Record Save" <<endl;
						}
						
						cout << "Press any Key Two Time To End Proceed";
						getch();
						getch();
					}			
					continue;
					
					case '3':
					{
						break;	
					}				
				}
				
				break;	
			}
			
			continue;			
		}
		case '3':
		{
			break;
		}
	}
	
	break;
}


}






