#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<process.h>
#include<fstream>
#include<ctype.h>
#include<graphics.h>
#include<time.h>
#include<stdlib.h>
#include<dos.h>
using namespace std;

class volvo
	 {
	     public:
	     int  bscode;
	     long busnum;
	     long fare;
	     void view();
	};

       void volvo::view()
	    {
	      char req[30];

	      ifstream file;
	      switch(bscode)
	      {
	       case 1: file.open("bus1.txt",ios::in);
		       break;
	       case 2: file.open("bus2.txt",ios::in);
		       break;
	       case 3: file.open("bus3.txt",ios::in);
		       break;
	       case 4: file.open("bus4.txt",ios::in);
		       break;
	       case 5: file.open("bus5.txt",ios::in);
		       break;
	       case 6: file.open("bus6.txt",ios::in);
		       break;
	       case 7: file.open("bus7.txt",ios::in);
		       break;
	       case 8: file.open("bus8.txt",ios::in);
		       break;
	       case 9: file.open("bus9.txt",ios::in);
		       break;
	       case 10: file.open("bus10.txt",ios::in);
		       break;
		}

	      file.seekg(0);

	      while(!file.eof())
	      {

	      file.getline(req,30);
	      cout<<req<<" ";
	      }
	     file.close();

	    }



class flight
	 {
	     public:
	     int flcode;
	     long flightnum;
	     long eco;
	     long busy;
	     void view();
	};

       void flight::view()
	    {
	      char req[30];

	      ifstream file;
	      switch(flcode)
	      {
	       case 1: file.open("flight1.txt",ios::in);
		       break;
	       case 2: file.open("flight2.txt",ios::in);
		       break;
	       case 3: file.open("flight3.txt",ios::in);
		       break;
	       case 4: file.open("flight4.txt",ios::in);
		       break;
	       case 5: file.open("flight5.txt",ios::in);
		       break;
	       case 6: file.open("flight6.txt",ios::in);
		       break;
	       case 7: file.open("flight7.txt",ios::in);
		       break;
	       case 8: file.open("flight8.txt",ios::in);
		       break;
	       case 9: file.open("flight9.txt",ios::in);
		       break;
	       case 10: file.open("flight10.txt",ios::in);
		       break;
	       case 11: file.open("flight11.txt",ios::in);
		       break;
		  }

	      file.seekg(0);

	      while(!file.eof())
	      {

	      file.getline(req,30);
	      cout<<req<<" ";
	      }
	     file.close();

	    }



class rail
	 {
	     public:
	     int stcode;
	     long int trainnum;
	     int ac;
	     int nonac;
	     void view();
	};

       void rail::view()
	    {
	      char req[30];

	      ifstream file;
	      switch(stcode)
	      {
	       case 1: file.open("rail1.txt",ios::in);
		       break;
	       case 2: file.open("rail2.txt",ios::in);
		       break;
	       case 3: file.open("rail3.txt",ios::in);
		       break;
	       case 4: file.open("rail4.txt",ios::in);
		       break;
	       case 5: file.open("rail5.txt",ios::in);
		       break;
	       case 6: file.open("rail6.txt",ios::in);
		       break;
	       case 7: file.open("rail7.txt",ios::in);
		       break;
	       case 8: file.open("rail8.txt",ios::in);
		       break;
	       case 9: file.open("rail9.txt",ios::in);
		       break;
	       case 10: file.open("rail10.txt",ios::in);
		       break;
	       }
	      file.seekg(0);

	      while(!file.eof())
	      {

	      file.getline(req,30);
	      cout<<req<<" ";
	      }
	     file.close();

	    }




class holid
	 {
	     public:
	     long int budg;
	     int slno;
	     int night;
	     void view();
	};

       void holid::view()
	    {
	      char req[30];
	      ifstream file;
	      switch(slno)
	      {
	       case 1: file.open("holi1.txt",ios::in);
		       break;
	       case 2: file.open("holi2.txt",ios::in);
		       break;
	       case 3: file.open("holi3.txt",ios::in);
		       break;
	       case 4: file.open("holi4.txt",ios::in);
		       break;
	       case 5: file.open("holi5.txt",ios::in);
		       break;
	       case 6: file.open("holi6.txt",ios::in);
		       break;
	       case 7: file.open("holi7.txt",ios::in);
		       break;
	       case 8: file.open("holi8.txt",ios::in);
		       break;
	       case 9: file.open("holi9.txt",ios::in);
		       break;
	       case 10: file.open("holi10.txt",ios::in);
		       break;
	       }
	      file.seekg(0);

	      while(!file.eof())
	      {

	      file.getline(req,30);
	      cout<<req<<" ";
	      }
	     file.close();

	    }

void holiday();
void booking(float);
void process();
void railway();
void railway2(int);
void railway3(int);

void bus1();
void bus2(int);

void flight1();
void flight2(int);
void flight3(int);



void intro(int &ptr);
void agent();
void agent2(char *name);
void customer();
void customer2(char name[]);

void main()
{
 clrscr();
 int x,y;

 int gdriver=DETECT,gmode;
 initgraph(&gdriver, &gmode, "C:\\turboc3\\bgi");
 setbkcolor(3);
 setcolor(5);
 settextstyle(3,0,8);
 outtextxy(50,0,"TRAVEL AND ");
 outtextxy(150,100,"TOURISM ");

 settextstyle(1,0,2);

 outtextxy(170,400,"PRESS ENTER TO CONTINUE ");


 getch();
 closegraph();


 int choice;

 intro(choice);

 switch(choice)


 {

   case 1:  agent();
	    break;

   case 2: customer();
	   break;
   default: exit(0);

 }
 getch();

 }

 void intro(int &ptr)
 {
	cout<<"\n\n  WELCOME TO THE TRAVEL AGENCY  \n\n";



	cout<<"   1.Agent login \n\n";
	cout<<"   2.Customer login \n\n ";
	cout<<"  3.Exit "                ;



	cout<<"\n\n\n\n\n\n\n\n\n\n\n ENTER YOUR CHOICE ::";


  cin>>ptr;

 }

  void agent()
  {
   clrscr();
	     char name[30];
	     char pass[10];
	     char temp=0;
	     int k=0;
	     cout<<" USER NAME :: ";
	     gets(name);

	     cout<<"\n\n PASSWORD :: ";

	     while(temp!='\r')
	     {
	      temp=getch();
	      if(temp!='\r')
	       {
		cout<<"*";
		pass[k]=temp;
		k++;
	       }
	     }
	      pass[k]='\0';
	      k=0;

		if(!strcmp(name,"namaneuro") && !strcmp(pass,"123a" ) )
		{
			cout<<"\n\n\n\n\ SUCESSFULLY LOGGED IN ";
			cout<<"\n\n\n\n PRESS ENTER TO CONTINUE :: ";
			getch();
		       agent2(name);

		}


		else

		{
			char r;
			cout<<"\n\n Wrong password or username";
			cout<<"\n\n PRESS 'R' TO RE-ENTER USERNAME OR PASSWORD !!\n ";
			cout<<"\n\n PRESS 'B' TO RETURN TO THE MAIN MENU :: ";
			cin>>r;

			if (r=='r' || r=='R')
				{
				clrscr();
				agent();
				}

			else if (r=='b' || r=='B')
				{
				clrscr();
				main();
				}
			else
				{
				 exit(0);
				}
		 }


   }







  void agent2(char *name)
  {
      clrscr();
    int choice;

      cout<<"Hello  "<<name<<"\n\n\n";

   gotoxy(0,12);

   cout<<"1. VIEW HISTORY \n";
   cout<<"2. VIEW COUPONS \n";
   cout<<"3. BOOK TICKETS \n";
   cout<<"4. LOGOUT     \n\n\n\n";
   gotoxy(1,20);

   cout<<"ENTER YOUR CHOICE :: ";
   cin>>choice;

   switch(choice)
     {
       case 1: {
		 clrscr();
		 char readx[30];
		 static count=0;

		 ifstream file("cpp.txt", ios::in | ios::binary);

		 file.seekg(0);


		 while(!file.eof())

		 {
		 count++;
		 file.read ( (char *)&readx, sizeof(readx));

		 if(count%2!=0)
		 {
		 cout<<"\n"<<"NAME :: "<<readx;

		 }

		 else

		 cout<<"   MOBILE NUMBER :: "<<readx;


		 getch();

		 }

		 file.close();
		}
		cout<<"\n\n PRESS ENTER TO ENTER AGENT MENU ";
		getch();
		getch();
		agent2(name);
		break;

       case 3: {
		char string[30]="namaneuro";
		customer2(string);
		}
		break;

       case 4: clrscr();
	       gotoxy(20,12);
	       cout<<"YOU HAVE SUCCESSFULLY LOGGED OUT ";
	       getch();
	       main();
    }



  }

 void customer()
 {
  clrscr();
  char name[30];
  char num[30];

  gotoxy(20,10);
  cout<<"ENTER YOUR NAME :: ";
  gets(name);

  gotoxy(20,13);
  cout<<"ENTER YOUR MOBILE NUMBER :: ";
  gets(num);

  ofstream out("cpp.txt",ios::out | ios::binary | ios::app );

  out.write((char *)&name,sizeof(name));
  out.write((char *)&num,sizeof(num));

  out.close();
  gotoxy(20,20);
  cout<<"PRESS ENTER TO CONTINUE :: ";
  customer2(name);

}



	void customer2(char name[])

	{
	     clrscr();
	     cout<<"HELLO "<<name<< " !!!\n\n" ;

	     delay(1500);
	     int k=0;
	     int i;
	     for(i=0;i<25;i++)
	   {
	    gotoxy(i,2);
	    cout<<"PLAN YOUR TRAVEL !!!!";

	     delay(150);
	     clrscr();

	     if(i==24 && k<0)
		{
		i=-1;
		k++;
		}

	   }
	  gotoxy(i,2);
	  cout<<"PLAN YOUR TRAVEL  !!!!\n\n\n";

   int choice;

 cout<<"1. HOLIDAY PAKAGES \n\n";
 cout<<"2. BOOK RAILWAY TICKET \n\n";
 cout<<"3. BOOK FLIGHT TICKET \n\n";
 cout<<"4. BOOK BUS TICKET \n\n";
 cout<<"5. RETURN TO MAIN MENU \n\n";


 cout<<"ENTER :: ";
 cin>>choice;

 switch(choice)

 {

     case 1:  holiday();
	      break;
     case 2: railway();
	     break;
     case 3: flight1();
	     break;
     case 4: bus1();
	     break;
      case 5: main();
	      break;
     default: exit(0);
 }

getch();


  }










	void holiday()

 {

	 holid h1;

	ifstream file("holiday.txt",ios::in | ios::binary);

	   clrscr();
	   long int budget;
	   int night;
	   int num,num2;
	   int code;
	   long int numx,codeprice;

	   gotoxy(33,2);

	   cout<<"HOLIDAY PACKAGES \n\n";

	   cout<<"ENTER NUMBER OF NIGHTS :: " ;
	   cin>>night;

	   cout<<"\nENTER YOUR BUDGET :: ";
	   cin>> budget;

	   cout<<"\nENTER NUMBER OF ADULT:: ";
	   cin>>num;
	   cout<<"\nENTER NUMBER OF CHILDREN (AGE 10 OR BELOW):: ";
	   cin>>num2;



	 clrscr();

	 file.seekg(0);


	 while(!file.eof())


	 {

	   file.read((char *)&h1,sizeof(h1));

	   numx= (num*h1.budg) + (num2*h1.budg)/2;

	   if(h1.night<=night && numx<=budget )
	   {
	    h1.view();
	   cout<<"\n\n\n";
	   }

	 }
	file.close();
	 cout<<"\n\n ENTER THE CODE OF YOUR PACKAGE :: ";
	 cin>>code;

       ifstream file2("holiday.txt",ios::in | ios::binary);
	 file2.seekg(0);

	 while(!file2.eof())
	 {
	  file2.read((char *)&h1,sizeof(h1));

	  if(h1.slno==code)
	  {
	    numx= (num*h1.budg) + (num2*h1.budg)/2;
	    codeprice=numx;
	  }
	 }

     file2.close();

  booking(codeprice);
}




void booking(float n)


{
 clrscr();
  int choice;
  gotoxy(30,2);

  cout<<"PAYMENT GATEWAY \n\n" ;

  cout<<"YOUR TOTAL AMOUNT IS ::"<<n<<" INR ";

  cout<<"\n\nDO YOU WANT TO CONTINUE (1 = YES  0 = NO) :: ";
  cin>>choice;


  switch(choice)
  {
   case 0:  {
	    char string[40]="Sir";
	    customer2(string);
	    }
	    break;

   case 1: clrscr();
	   gotoxy(30,2);
	   char name[30];
	   char num[20],take='0';
	   char pin;

	   cout<<"PAYMENT GATEWAY \n\n";

	   cout<<"Please Enter Your Credit/Debit Card Details \n\n";

	   cout<<"ENTER NAME ON CARD :: ";
	   gets(name);

	   cout<<"\nENTER CARD NUMBER :: ";
	   gets(num);

	   cout<<"\nENTER YOUR PIN :: ";

	   while(take!='\r')
	   {
	    take=getch();
	    cout<<"*";
	   }
	   cout<<"\n\n PRESS ENTER TO PAY ";

	  process();
	   break;
     }
}
void process()
{
  clrscr();
   gotoxy(33,14);

   for(int i=0;i<100;i++)
   {
    gotoxy(33,14);
    cout<<"PROCESSING....";
    delay(100);
    clrscr();
    }

   clrscr();
  cout<<"\n\n\nCONGRATULATIONS YOU HAVE SUCESSFULLY MADE YOUR TRANSACTION !!!";
  getch();

  int ch;


  cout<<"\n\n\n 1. PLAN ANOTHER TOUR ";
  cout<<"\n\n 2. RETURN TO MAIN MENU ";
  cout<<"\n\n 3. EXIT ";

  cout<<"\n\n\n ENTER:: ";
  cin>>ch;
  if(ch==1)
  {
    char string[30]="";
    customer2(string);
   }
  else if(ch==2)
  {
   main();
   }
   else
   {
    exit(0);
   }
 }





 void railway()

{
   clrscr();


   int choice;


      gotoxy(24,2);

      cout<<"  WELCOME TO INDIAN RAILWAYS \n\n\n";

      cout<<"  LIST OF AVAILABLE STATIONS \n\n\n";

      cout<<" 1. NEW DELHI       2. JAIPUR      3. MUMBAI CENTRAL \n"
	  <<" 4. GUWAHATI        5. KANPUR      6. CHENNAI CENTRAL \n"
	  <<" 7. ALLAHABAD       8. BHOPAL      9. BANGALORE    \n"
	  <<"10. KOLKATA \n\n";


	  cout<<"\n\n\n ENTER THE DESTINATION STATION :: ";
	  cin>>choice;

	  railway2(choice);

 }


 void railway2(int choice)

 {
     clrscr();
     rail r1;


     int checkac;
     float fare;
     int num1 ,num2,num3;
     long int trainnum;



     ifstream file("railway.txt",ios::in | ios::binary);

     file.seekg(0);

     while(!file.eof())

     {
      file.read ((char *)&r1,sizeof(rail));

      int flag=1;
      if(r1.stcode==choice)
      {
       r1.view();
      flag=0;
      }

     if(flag==0)
     break;

     }

      cout<<"\n\n\n\n ENTER THE TRAIN NUMBER :: ";
      cin>>trainnum;

      cout<<"\n\n ENTER THE NUMBER OF ADULTS :: ";
      cin>>num1;

      cout<<"\n\n ENTER THE NUMBER OF CHILDREN (AGE 5 OR BELOW) ::";
      cin>>num2;

      cout<<"\n\n ENTER THE NUMBER OF SENIOR CITIZEN :: ";
      cin>> num3;

      cout<<"\n\n ENTER CLASS - AC (PRESS 1)    NON AC (PRESS 0) :: ";
      cin>>checkac;

      file.seekg(0);

      while(!file.eof())

      {
	file.read ( (char *)&r1,sizeof(rail));

	if (r1.trainnum==trainnum)
	{
	   if(checkac==1)
	   {
	    fare=(num1*r1.ac) + (num2*r1.ac)/2;
	    fare=fare + (6*num3*r1.ac)/10;
	   }


	   else

	   {
	    fare=num1*r1.nonac + (num2*r1.nonac)/2;
	    fare=fare + (6*num3*r1.nonac)/10;
	   }
	}
      }

      cout<<"\n\n TOTAL FARE :: "<<fare<<" INR";


    int  ch;

    cout<<"\n\n PRESS 1 TO CONTINUE OR PRESS 0 TO RETURN :: ";
    cin>>ch;

    if (ch==1)
    {
     railway3(num1+num2+num3);
     booking(fare);
    }

    else
    {
     main();
    }

 }

 void railway3(int num)
 {
  clrscr();

  char name[30];
  int age;
  long dob;


  for(int i=1;i<=num;i++)
  {
   cout<<"\n\n ENTER THE DETAIL OF PASSENGER "<<i<<"\n\n";

   cout<<" ENTER NAME:: ";
   gets(name);
   cout<<"\n ENTER DATE OF BIRTH (DDMMYYYY):: ";
   cin>>dob;

   cout<<"\n ENTER THE AGE :: ";
   cin>>age;

   if(age>=60)

  {
   cout<<"\n\n\NOTE:: THE PERSON SHOULD CARRY A PROOF OF AGE " ;
   getch();
   }
 }


}






 void flight1()

{
   clrscr();


   int choice;


      gotoxy(24,2);

      cout<<"  WELCOME TO INDIGO AIRWAYS \n\n\n";

      cout<<"  LIST OF AVAILABLE AIRPORTS \n\n\n";

      cout<<" 1. BENGALORE       2. NEW DELHI   3. CHENNAI \n"
	  <<" 4. HYDERABAD       5. INDORE      6. KOLKATA \n"
	  <<" 7. MUMBAI          8. PATNA       9. PUNE   \n"
	  <<"10. ABU DHABI      11. HONG KONG \n\n";


	  cout<<"\n\n\n ENTER THE DESTINATION AIRPORT :: ";
	  cin>>choice;

	  flight2(choice);

 }


 void flight2(int choice)

 {
     clrscr();
     flight f1;


     int checkcl;
     float fare;
     int num1 ,num2;
     long   flightnum;



 xx:
 clrscr();



     ifstream file("airways.txt",ios::in | ios::binary);

     file.seekg(0);

     while(!file.eof())

     {
      file.read ((char *)&f1,sizeof(flight));

      int flag=1;

      if(f1.flcode==choice)

      {
	 f1.view();
	 flag=0;
	 cout<<"\n\n";
      }

      if(flag==0)
      break;



      }



      cout<<"\n\n\n\n ENTER THE FLIGHT NUMBER :: ";
      cin>>flightnum;

      cout<<"\n\n ENTER THE NUMBER OF ADULTS :: ";
      cin>>num1;

      cout<<"\n\n ENTER THE NUMBER OF CHILDREN (AGE 5 OR BELOW) ::";
      cin>>num2;

      cout<<"\n\n ENTER CLASS - BUSINESS (PRESS 1) / ECONOMY (PRESS 0) :: ";
      cin>>checkcl;

      file.seekg(0);

      int flag=0;

      while(!file.eof())
     {

	file.read((char *)&f1,sizeof(flight));


	if (f1.flightnum==flightnum)
	{
	   if(checkcl==1)
	   {
	    fare=(num1+num2)*f1.busy;
	    flag=1;
	   }


	   else

	   {
	    fare=(num1 + num2)*f1.eco;
	   flag=1;
	   }
	}
   }



    if(flag==0)
   {
       cout<<"\n\n FLIGHT NOT FOUND !!!";
       delay(200);

       cout<<"DO YOU WANT TO ENTER AGAIN - PRESS 1 (YES) / 0 (NO)  ";

       int z;
       cin>>z;

	if(z==1)
	{
	 goto xx;
	}

	else
	{
	  char string[30]="";
	  customer2(string);
	}
   }


   file.close();


      cout<<"\n\n TOTAL FARE :: "<<fare<<" INR";


    int  ch;

    cout<<"\n\n PRESS 1 TO CONTINUE OR PRESS 0 TO RETURN :: ";
    cin>>ch;


    if (ch==1)
    {
     flight3(num1+num2);
     booking(fare);
    }

    else
    {
     char string[30]="";
	  customer2(string);
    }

 }

 void flight3(int num)
 {
  clrscr();

  char name[30];
  int age;
  long dob;


  for(int i=1;i<=num;i++)
  {
   cout<<"\n\n ENTER THE DETAIL OF PASSENGER "<<i<<"\n\n";

   cout<<" ENTER NAME:: ";
   gets(name);
   cout<<"\n ENTER DATE OF BIRTH (DDMMYYYY):: ";
   cin>>dob;

   cout<<"\n ENTER THE AGE :: ";
   cin>>age;

  }
}

void bus1()

{
   clrscr();


   int choice;


      gotoxy(14,2);

      cout<<"  WELCOME TO UTTAR PRADESH STATE TRANSPORT CORPORATION \n\n\n";

      cout<<"  LIST OF AVAILABLE BUS STOPS \n\n\n";

      cout<<" 1. JAIPUR          2. SITAPUR     3. JHANSI \n"
	  <<" 4. KANPUR          5. NEW DELHI   6. AGRA \n"
	  <<" 7. AZAMGARH        8. DEHRADUN    9. GORAKHPUR   \n"
	  <<"10. ALLAHBAD      \n\n";


	  cout<<"\n\n\n ENTER THE DESTINATION BUS STOP :: ";
	  cin>>choice;

	  bus2(choice);

 }


 void bus2(int choice)

 {
     clrscr();
     volvo v1;


     float fare;
     int num1 ,num2;
     long  busnum;



 xx:
 clrscr();



     ifstream file("volvo.txt",ios::in | ios::binary);

     file.seekg(0);

     while(!file.eof())

     {
      file.read ((char *)&v1,sizeof(volvo));

      int flag=1;

      if(v1.bscode==choice)

      {
	 cout<<"\n\n";
	 v1.view();
	 flag=0;
	 cout<<"\n\n";
      }

      if(flag==0)
      break;



      }



      cout<<"\n\n\n\n ENTER THE BUS NUMBER :: ";
      cin>>busnum;

      cout<<"\n\n ENTER THE NUMBER OF ADULTS :: ";
      cin>>num1;

      cout<<"\n\n ENTER THE NUMBER OF CHILDREN (AGE 5 OR BELOW) ::";
      cin>>num2;

      file.seekg(0);

      int flag=0;

      while(!file.eof())
     {

	file.read((char *)&v1,sizeof(volvo));


	if (v1.busnum==busnum)
	{

	    fare=(num1+num2)*v1.fare;
	    flag=1;

	}
   }



    if(flag==0)
   {
       cout<<"\n\n BUS NOT FOUND !!!";
       delay(1000);

       cout<<"\nDO YOU WANT TO ENTER AGAIN - PRESS 1 (YES) / 0 (NO)  ";

       int z;
       cin>>z;

	if(z==1)
	{
	 goto xx;
	}

	else
	{
	  main();
	}
   }


   file.close();


      cout<<"\n\n TOTAL FARE :: "<<fare<<" INR";


    int  ch;

    cout<<"\n\n\n PRESS 1 TO CONTINUE OR PRESS 0 TO RETURN :: ";
    cin>>ch;


    if (ch==1)
    {
     flight3(num1+num2);
     booking(fare);
    }

    else
    {
     main();
    }

 }
