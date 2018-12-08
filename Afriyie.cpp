#include <iostream>
using namespace std;
 #include<conio.h>
 #include<stdio.h>

struct student
    {
       char name[25];
	   char residence[25];

       int ID;
       char level[20];
       int age;
	   long double tel;
	   int examscore;
	   char grade[4];
    };
int main()
{
	
      
	char v;
	int arr=0;
	do{

       student info[10];


	   cout<<" Press 1 Input Info. \n";
	   cout<<" Press 2 Delete Info. \n";
	   cout<<" Press 3 Edit Info. \n";
	   cout<<" Press 4 Search Info. \n";
	   cout<<" Press 5 Display Info. \n";
	   cout<<"\n \n Select Option:";

	   
		 int rolchek=0;

       int sw;
	   cin>>sw;
	   

	   switch (sw)
	   {

		   case 1:
			 
			   
           cout<<"\n Enter the Data of the student no "<<arr+1<<" is :\n";
         
		   cout<<"\t Enter Student ID = ";
		  int rol2;
		   int rol;
		   
		   
		   cin>>rol;
		   
		   
		   for(int z=0;z<=arr;z++)
		   {
			   
			  
			   rol2=rol;
		   if(rol2==info[z].ID)
		   {
			   rolchek=1;
			   }
		   }
		   if(rolchek!=1){
			   info[arr].ID=rol;
			   

		  cout<<"\t Enter the Name =  ";
		 cin>>info[arr].name;

		 cout<<"\t Enter the Residence =  ";
		 cin>>info[arr].residence;

		 cout<<"\t Enter the Telephone no =  ";
		 cin>>info[arr].tel;

         cout<<"\t Enter the Level = ";
		 cin>>info[arr].level;

		 cout<<"\t Enter the Exam Score =  ";
		 cin>>info[arr].examscore;

         cout<<"\t Enter the Grade = ";
		 cin>>info[arr].grade;

         cout<<"\t Enter the Age = ";
         cin>>info[arr].age;
		 arr=arr+1;
		   }
		   else
		   {
			   cout<<"This Record Already Enterd \n";
		   }
			   
			   
            break;

			case 2:
					   
           cout<<"\n Enter the Roll no of the student To Delete ::\n";
         
		   
		
		   cin>>rol;
		   
		   
		   for(int z=0;z<=arr;z++)
		   {
			   
			  
			   rol2=rol;
		   if(rol2==info[z].ID)
		   {
			   		   
			   
			   info[z].ID='d';
		  cout<<"\t Record Deleted";
			   }
		   }
       
            break;

			case 3:
				 cout<<"\n Enter the Roll no of the student To Update ::\n";
         
		   
		
		   cin>>rol;
		   
		   
		   for(int z=0;z<=arr;z++)
		   {
			   
			  
			   rol2=rol;
		   if(rol2==info[z].ID)
		   {
			   		cout<<"\t ID =  ";   
			   cout<<info[z].ID;
			   cout<<"\t Name =  ";
			   cout<<info[z].name;
			  cout<<"\t  residence =  ";
			   cout<<info[z].residence;
			    cout<<"\t  Telephone no =  ";
				cout<<info[z].tel;
				 cout<<"\t Level = ";
				 cout<<info[z].level;
			    cout<<"\t  Exam Score =  ";
			   cout<<info[z].examscore;
			      cout<<"\t Grade = ";
			   cout<<info[z].grade;
			  

cout<<"\n\t ReEnter Data  ";

			    cout<<"\n\t Enter the Name =  ";
		 cin>>info[z].name;

		 cout<<"\n\t Enter the Residence =  ";
		 cin>>info[z].residence;

		 cout<<"\n\t Enter the Telephone no =  ";
		 cin>>info[z].tel;

         cout<<"\n\t Enter the Level = ";
		 cin>>info[z].level;

		 cout<<"\n\t Enter the Exam Score =  ";
		 cin>>info[z].examscore;

         cout<<"\n\t Enter the Grade = ";
		 cin>>info[z].grade;

         cout<<"\n\t Enter the Age = ";
         cin>>info[z].age;
		  
			   }
		   }
       
            break;

			case 4:


				 cout<<"\n Enter the Roll no of the student To Search ::";
         
		   
		
		   cin>>rol;
		   
		   
		   for(int z=0;z<=arr;z++)
		   {
			   
			  
			   rol2=rol;
		   if(rol2==info[z].ID)
		   {
			   		   
			   
			 	cout<<"\n \t ID =  ";   
			   cout<<info[z].ID;
			   cout<<"\n \t Name =  ";
			   cout<<info[z].name;
			  cout<<"\n \t  Residence =  ";
			   cout<<info[z].residence;
			    cout<<"\n \t  Telephone no =  ";
				cout<<info[z].tel;
				 cout<<"\n \t Level = ";
				 cout<<info[z].level;
			    cout<<"\n \t  Exam Score =  ";
			   cout<<info[z].examscore;
			      cout<<"\n \t Grade = ";
			   cout<<info[z].grade;
		  
		   }}
       
            break;

			case 5:
				cout<<"\n____________________________________________________________________________\n";	
        for(int i=0;i<1;i++)
		   {
			   
			   cout<<"   ID    ||";
			   cout<<"      Name               ||";
			   cout<<" Residence               || ";
			     cout<<"  Tel. no ||";
				 cout<<"Level||";
				 cout<<"Exam Score||";
				 cout<<"Grade||";
			   for(int k=0;k<arr;k++)
		   {
			   if (info[k].ID!='d')
			   {

			   
			cout<<"\n";
			   cout<<" ";   
			   cout<<info[k].ID;
			   cout<<" ||";
			   cout<<info[k].name;
			  cout<<"||";
			   cout<<info[k].residence;
			    cout<<"   ||";
				cout<<info[k].tel;
				 cout<<"||";
				 cout<<info[k].level;
			    cout<<"  ||";
			   cout<<info[k].examscore;
			      cout<<"      ||  ";
			   cout<<info[k].grade;
			   
			   }
			  	
			  
			    
		  
			   }}
		 cout<<"\n____________________________________________________________________________";
		
            break;


	       default:
		    cout<<"\t Worng option Selected ";
		   break;
	   
	}

    

    
	   cout<<"\n \n \t Do You want to Continue Again [Y/N]";
	   cin>>v;

	}
	while(v=='y');
	

	
	 
       return 0;
       getch();

}


