#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <stdio.h>



  int count[100];
  int size=0;
  int m,h,m1,h1;
  struct time t;

  struct car
  {
     char rto_reg[30];
     char model[30];
     int slot;
  };

  car obj[100];

  void faculty();
  void del();
  void student();
  void visitor();
  void view_slot();
  void check();

  void main()
  {
    clrscr();
    flushall();
    int input,i,c;
    for(i=0;i<=99;i++)
       count[i]=1000;

    while(!kbhit())
    { ref:
       check();
       gettime(&t);
       m1=t.ti_min,h1=t.ti_hour;
       textcolor(3);
       cout<<"TIME is   "<<h1<<":"<<m1<<endl<<endl<<endl<<endl;
       //clrscr();
       //delay(1000);
       i=0;
       for(i=0;i<100;i++)
	 {
	   c=count[i];
	    if(c==1000)
	    {
	      cout<<"Most optimized slot is   "<<i<<"  with distance "<<150+i+3<<"  metres towards AB5"<<endl<<endl;
	      break;
	    }
	 }
       cout<<"Press any key to enter details "<<endl<<endl;
       /*cout<<"\t\tEnter 0 for deleting record"<<endl;
       cout<<"\t\tEnter 1 for FACULTY"<<endl;
       cout<<"\t\tEnter 2 for STUDENT"<<endl;
       cout<<"\t\tEnter 3 for VISITOR"<<endl;
       cout<<"\t\tEnter 4 for viewing free slots"<<endl;
       cout<<"\t\tEnter 6 for viewing this menu"<<endl;
       cout<<"\n\n\t Enter 5 for exiting the program"<<endl<<endl;*/
       delay(1000);
       clrscr();
    }getch();
       cout<<"Press any key to enter details "<<endl<<endl;
       cout<<"\t\tEnter 0 for deleting record"<<endl;
       cout<<"\t\tEnter 1 for FACULTY"<<endl;
       cout<<"\t\tEnter 2 for STUDENT"<<endl;
       cout<<"\t\tEnter 3 for VISITOR"<<endl;
       cout<<"\t\tEnter 4 for viewing free slots"<<endl;
       //cout<<"\t\tEnter 6 for viewing this menu"<<endl;
       cout<<"\n\n\t Enter 5 for exiting the program"<<endl<<endl;
       cin>>input;


      // else if(input==6)
      //	  goto ref;



       switch(input)
	 {
	   case 0:
	      del();
	      goto ref;

	   case 1:
	      faculty();
	      goto ref;
	      //break;
	   case 2:
	      student();
	      //break;
	   case 3:
	      visitor();
	      goto ref;
	      //break;
	   case 4:
	      view_slot();
	      goto ref;
	      //break;
	   case 5:
	      goto cls;
	   case 6:
	      goto ref;
	 }


      cls:
      getch();
  }


     void faculty()
     {
      int a;
	   cout<<"\nEnter the slot number provided \n";
	   cin>>a;
	   obj[count[a]].slot=a;
	   cout<<"\nEnter the RTO registration number of the vehicle"<<endl;
	   cin>>obj[count[a]].rto_reg;
	   cout<<"\nEnter the model name of the car"<<endl;
	   cin>>obj[count[a]].model;
      }

    void student()
    {
      int a;
	   cout<<"\nEnter the slot number provided \n";
	   cin>>a;
	   obj[count[a]].slot=a;
	   cout<<"\nEnter the RTO registration number of the vehicle"<<endl;
	   cin>>obj[count[a]].rto_reg;
	   cout<<"\nEnter the model name of the car"<<endl;
	   cin>>obj[count[a]].model;
    }

    void view_slot()
    {
      for(int i=0;i<=99;i++)
	{
	  if(count[i]==1000)
	    cout<<"\nslot number "<<i<<" is free\n";
	}
    }

    void del()
    {
      int a;
      cout<<"\nenter the slot number of the record to be deleted\n";
      cin>>a;
      count[a]=1000;
      cout<<"Record deleted!!!";
    }

    void visitor()
      {
      int a;

	   cout<<"\nEnter the slot number provided \n";
	   cin>>a;
	   obj[count[a]].slot=a;
	   count[a]=a;
	   cout<<"\nEnter the RTO registration number of the vehicle"<<endl;
	   cin>>obj[count[a]].rto_reg;
	   cout<<"\nEnter the model name of the car"<<endl;
	   cin>>obj[count[a]].model;
	   flushall();
	   cout<<"\n set the time u want to be beeped\n";
	   cout<<"\n\nEnter hour\n";
	   cin>>h;
	   cout<<"\n\n Enter minute";
	   cin>>m;

     }
     void check()
     {
	 gettime(&t);
	 m1=t.ti_min,h1=t.ti_hour;
	 if((m==m1)&&(h==h1))
	     {

	       sound(1000);
	       cout<<"ALERT!!!!";
	       delay(5000);
	       nosound();
	     }
     }