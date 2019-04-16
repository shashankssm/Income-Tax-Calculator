#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<fstream>
#include<iomanip>
#include <cstdlib>


void date();
void welcome();
int login();
int invoice();
using namespace std;

void date()
{
 cout<<setw(25)<<setfill('*')<<"*"<<endl;
 cout<<"DATE  : ";system("date[/t]");
 cout<<setw(25)<<setfill('*')<<"*";
 cout<<endl<<"TIME  : ";system("time[/t]");
 cout<<setw(25)<<setfill('*')<<"*"<<endl;
}
void welcome()
{
   cout<<endl<<setw(101)<<setfill('|')<<"|"<<endl<<"|"<<setw(100)<<setfill(' ')<<"|";
   cout<<endl<<"|                      +++++++++++++++++++  WELCOME  TO  +++++++++++++++++++++     "<<setw(18)<<setfill(' ')<<"|";
   cout<<endl<<"|                              *****   INCOME TAX DEPARTMENT  ******"<<setw(33)<<setfill(' ')<<"|";
   cout<<endl<<"|                                 ````` Government Of INDIA ````` "<<setw(35)<<setfill(' ')<<"|"<<endl<<"|"<<setw(100)<<setfill(' ')<<"|";
   cout<<endl<<setw(101)<<setfill('|')<<"|"<<endl<<endl;
   
}

int login()
{
   system("COLOR E0");
   char user[10],pass[10];
   static int i;
   for(i=1;i<=3;i++)
   {
   cout<<endl<<setw(50)<<setfill('=')<<"="<<endl;
   cout<<"** LOGIN WINDOW **    "<<setw(80)<<setfill(' ')<<" "<<" FOR LOGIN DETAILS , CONTACT DEVELOPER : 7562936030 "<<endl;
   cout<<setw(50)<<setfill('=')<<"="<<endl; 
   cout<<endl<<setw(50)<<setfill('-')<<"-"<<endl;
   cout<<" ENTER USER_NAME  | (default username = 1) | ";
   cin>>user;
   cout<<setw(50)<<setfill('-')<<"-"<<endl;
   cout<<" ENTER PASSWORD   | (default password = 1) | ";
   cin>>pass;
   cout<<setw(50)<<setfill('-')<<"-"<<endl;
   system("cls");
   
   if(i==1||i==2)
   {
   if (strcmp(user,"1")==0 && strcmp(pass,"1")==0)
   {
   	
   	system("COLOR FC");
   	return 1;
   }
   else 
   {
   	cout<<" *****  INVALID USER_NAME OR PASSWORD  ***** "<<endl;
   	cout<<"            ***** TRY AGAIN *****  "<<endl;
   }
   }
   else
   {
   	system("COLOR 0C");
   	cout<<" ***** SORRY YOU HAVE EXCEED THE MAXIMUM LIMIT , PLEASE TRY AGAIN LATER ***** ";
   	exit(0);
   }
   }
}
class slab
{  
	    
	public:
		
		show_slab()
		
		{
		cout<<endl<<setw(101)<<setfill('|')<<"|"<<endl<<"|"<<setw(100)<<setfill(' ')<<"|";
		cout<<endl<<"|                              *****   INCOME TAX DEPARTMENT   *****"<<setw(33)<<setfill(' ')<<"|";
		cout<<endl<<"|                                 ````` Government Of INDIA ````` "<<setw(35)<<setfill(' ')<<"|"<<endl<<"|"<<setw(100)<<setfill(' ')<<"|";
		
		cout<<endl<<"|               ******** INCOME TAX SLABS & RATES : FINANCIAL YEAR 2018-2019 ******** "<<setw(15)<<setfill(' ')<<"|"<<endl;
		cout<<"|"<<setw(100)<<setfill(' ')<<"|";
		cout<<endl<<setw(101)<<setfill('|')<<"|"<<endl<<endl;
		
	    }
	    
    	show_slab_table()
    	
    	{
    	cout<<endl<<setw(101)<<setfill('-')<<"-"<<endl;
    	cout<<"|       INCOME SLAB        |   GENERAL CATEGORY   |     SENIOR CITIZENS     |  VERY SENIOR CITIZENS |"<<endl;
    	cout<<"|                          | (non-senior citizen) |  (60 & above years of   |   ( 80 years & above  |"<<endl;
    	cout<<"|                          |                      | age but below 80 years) |       of 80 years )   |";
    	cout<<endl<<setw(101)<<setfill('-')<<"-"<<endl; 
    	cout<<"|                          |::::::::::::::::::::::::::: INCOME TAX RATES :::::::::::::::::::::::::::|";
    	cout<<endl<<setw(101)<<setfill('-')<<"-"<<endl;  
    	cout<<"|    upto Rs. 2,50,000     |         Nil          |           Nil           |          Nil          |"<<endl;
    	cout<<"| Rs 2,50,001-Rs 3,00,000  |         10%          |           Nil           |          Nil          |"<<endl;	
    	cout<<"| Rs 3,00,001-Rs 5,00,000  |         10%          |           10%           |          Nil          |"<<endl;	
    	cout<<"| Rs 5,00,001-Rs 10,00,000 |         20%          |           20%           |          20%          |"<<endl;
		cout<<"|    Above Rs 10,00,000    |         30%          |           30%           |          30%          |";
		cout<<endl<<setw(101)<<setfill('-')<<"-"<<endl;cin.ignore();  
				
		}
	    
	    
}x1;

class details
{
	private :
		string name,contact,email,pan,occupation;
		char gender[5];
		int age,gst;
	public :
		get_details()
		{
		cout<<setw(100)<<setfill('*')<<"*"<<endl;
		cout<<"                               | PLEASE PROVIDE YOUR DETAILS BELOW |  "<<endl;
		cout<<setw(100)<<setfill('*')<<"*"<<endl;
		cout<<setw(50)<<setfill('=')<<"="<<endl;
		cout<<"| ENTER GST No.        | 0020_1144414_18_";
		cin>>gst;
		cout<<setw(50)<<setfill('=')<<"="<<endl;
		cout<<"| ENTER YOUR NAME      | ";
		cin.ignore(); 
	    getline(cin,name);
	    cout<<setw(50)<<setfill('=')<<"="<<endl;
		cout<<"| GENDER (M or F)      | ";
		cin>>gender;
	    cout<<setw(50)<<setfill('=')<<"="<<endl;
		cout<<"| ENTER YOUR AGE       | ";
		cin>>age;
	    cout<<setw(50)<<setfill('=')<<"="<<endl;
	    cout<<"| YOUR OCCUPATION      | ";
		cin.ignore();
		getline(cin,occupation);
	    cout<<setw(50)<<setfill('=')<<"="<<endl;
		cout<<"| CONTACT No.          | ";

	    getline(cin,contact);
	    cout<<setw(50)<<setfill('=')<<"="<<endl;
		cout<<"| EMAIL ID             | ";
	
	    getline(cin,email);
		cout<<setw(50)<<setfill('=')<<"="<<endl;
		cout<<"| ENTER YOUR PAN No.   | ";

	    getline(cin,pan);
	    cout<<setw(50)<<setfill('=')<<"="<<endl;
	    
		}
		
		show_details()
		{
		cout<<endl<<setw(100)<<setfill('*')<<"*"<<endl;
		if(strcmp(gender,"m")==0||strcmp(gender,"M")==0)
	    {
	    cout<<"| HELLO ! Mr. "<<name<<". HERE'S YOUR PERSONAL DETAILS    "<<endl;
	    cout<<setw(100)<<setfill('*')<<"*"<<endl<<endl;
	    
		}
	    if(strcmp(gender,"f")==0||strcmp(gender,"F")==0)
	    {
	    cout<<"| HELLO ! Mrs. "<<name<<". HERE'S YOUR PERSONAL DETAILS   "<<endl;
	    cout<<setw(100)<<setfill('*')<<"*"<<endl<<endl;
		}
		cout<<setw(50)<<setfill('=')<<"="<<endl;
		cout<<"| GST No.     | "<<gst<<endl;
		cout<<setw(50)<<setfill('=')<<"="<<endl;
		cout<<"| NAME        | "<<name<<endl;
		cout<<setw(50)<<setfill('=')<<"="<<endl;
		if(strcmp(gender,"m")==0||strcmp(gender,"M")==0)
		{
		cout<<"| GENDER      | "<<"MALE"<<endl;
	    }
		if(strcmp(gender,"f")==0||strcmp(gender,"F")==0)
		{
		cout<<"| GENDER      | "<<"FEMALE"<<endl;
	    }
		cout<<setw(50)<<setfill('=')<<"="<<endl;
		cout<<"| AGE         | "<<age<<endl;
		cout<<setw(50)<<setfill('=')<<"="<<endl;
		cout<<"| OCCUPATION  | "<<occupation<<endl;
		cout<<setw(50)<<setfill('=')<<"="<<endl;
		cout<<"| CONTACT No. | "<<contact<<endl;
		cout<<setw(50)<<setfill('=')<<"="<<endl;
		cout<<"| EMAIL ID    | "<<email<<endl;
		cout<<setw(50)<<setfill('=')<<"="<<endl;
		cout<<"| PAN No.     | "<<pan<<endl;
		cout<<setw(50)<<setfill('=')<<"="<<endl;
		return 1;	
		}
		friend class search;
		friend class income_tax;
		friend class storage;
		friend class storage1;
}x2;

invoice()
{ 
   cout<<endl<<setw(101)<<setfill('|')<<"|"<<endl<<"|"<<setw(100)<<setfill(' ')<<"|";
   cout<<endl<<setw(101)<<setfill('|')<<"|"<<endl<<"|"<<setw(100)<<setfill(' ')<<"|";
   cout<<endl<<setw(101)<<setfill('|')<<"|"<<endl<<"|"<<setw(100)<<setfill(' ')<<"|";
   cout<<endl<<"|                      +++++++++++++++++++    INVOICE    +++++++++++++++++++++     "<<setw(18)<<setfill(' ')<<"|";
   cout<<endl<<"|                              *****   INCOME TAX DEPARTMENT  ******"<<setw(33)<<setfill(' ')<<"|";
   cout<<endl<<"|                                 ````` Government Of INDIA ````` "<<setw(35)<<setfill(' ')<<"|"<<endl<<"|"<<setw(100)<<setfill(' ')<<"|";
   cout<<endl<<setw(101)<<setfill('|')<<"|"<<endl;
		
	
}
class tax
{
	protected :
		float sal1,sal2,sal3,sal4,ded1,ded2,ded3,ded4,totali,totald,gtotal;
	public:
		get()
		{
		cout<<setw(100)<<setfill('=')<<"="<<endl;
		cout<<"|                    ** INCOME DETAILS **                    |"<<endl;	
		cout<<setw(100)<<setfill('=')<<"="<<endl;
		cout<<"| ENTER YOUR SALARY INCOME                      | Rs ";
		cin>>sal1;
		cout<<setw(100)<<setfill('=')<<"="<<endl;
		cout<<"| ENTER YOUR BUSSINESS INCOME                   | Rs ";
		cin>>sal2;
		cout<<setw(100)<<setfill('=')<<"="<<endl;
		cout<<"| ENTER YOUR PENSION                            | Rs ";
		cin>>sal3;
		cout<<setw(100)<<setfill('=')<<"="<<endl;
		cout<<"| ENTER OTHER INCOME (bank intrest,property)    | Rs ";
		cin>>sal4;
		cout<<setw(100)<<setfill('=')<<"="<<endl;
	    cout<<"|                   ***** DEDUCTIONS *****                   |"<<endl;
		cout<<setw(100)<<setfill('=')<<"="<<endl;
		cout<<"| ENTER ENDUCATIONAL DEDUCTION AMOUNT           | Rs ";
		cin>>ded1;
		cout<<setw(100)<<setfill('=')<<"="<<endl;
		cout<<"| ENTER MEDICAL DEDUCTION AMOUNT                | Rs ";
		cin>>ded2;
		cout<<setw(100)<<setfill('=')<<"="<<endl;
		cout<<"| ENTER LIFE INSURANCE DEDUCTION AMOUNT         | Rs ";
		cin>>ded3;
		cout<<setw(100)<<setfill('=')<<"="<<endl;
		cout<<"| ENTER OTHER DEDUCTION(insurance,EMI,LOAN etc) | Rs ";
		cin>>ded4;
		cout<<setw(100)<<setfill('=')<<"="<<endl;
		system("cls");
		system("COLOR F6");
		}
		
		calculate()
		{
			
		totali = ( sal1 + sal2 + sal3 + sal4 );
		totald = ( ded1 + ded2 + ded3 + ded4 );
		gtotal = ( totali - totald );
		
		cout<<setw(100)<<setfill('=')<<"="<<endl;
		cout<<"| TOTAL INCOME AMOUNT   | Rs "<<totali<<"   || TOTAL DEDUCTION AMOUNT   | Rs "<<totald<<endl;
		cout<<"| TOTAL GROSS INCOME    | Rs "<<gtotal<<"   || TOTAL TAXABLE INCOME     | Rs "<<gtotal<<endl;
		cout<<setw(100)<<setfill('=')<<"="<<endl;
			
		}
	
};

class income_tax : public tax
{
	public:
		float tax1,tax2;
		
		find_tax(details x2)
		{
		if(gtotal<=250000&&(x2.age<150))
		{
			tax1=0;
			tax2=0;
		    cout<<"| TOTAL TAXABLE AMOUNT  | Rs "<<tax2<<endl;
		}
		if((gtotal>250000&&gtotal<=300000)&&(x2.age<60))
		{
			tax1 = ( gtotal - 250000 );
			tax2 = ( tax1 * 0.1 );
			cout<<"| TOTAL TAXABLE AMOUNT  | Rs "<<tax2<<endl;
		}
		if((gtotal>250000&&gtotal<=300000)&&(x2.age>=60))
		{
			tax1=0;
			tax2=0;
			cout<<"| TOTAL TAXABLE AMOUNT  | Rs "<<tax2<<endl;
		}
		if((gtotal>300000&&gtotal<=500000)&&(x2.age<60))
		{
			tax1 = ( gtotal - 250000 );
			tax2 = ( tax1 * 0.1 );
			cout<<"| TOTAL TAXABLE AMOUNT  | Rs "<<tax2<<endl;
		}
		if((gtotal>300000&&gtotal<=500000)&&(x2.age>=60&&x2.age<80))
		{
			tax1 = ( gtotal - 300001 );
			tax2 = ( tax1 * 0.1 );
			cout<<"| TOTAL TAXABLE AMOUNT  | Rs "<<tax2<<endl;
		}
		if((gtotal>300000&&gtotal<=500000)&&(x2.age>=80))
		{
			tax1=0;
			tax2=0;
			cout<<"| TOTAL TAXABLE AMOUNT  | Rs "<<tax2<<endl;
		}
		if((gtotal>500000&&gtotal<=1000000)&&(x2.age<60))
		{
			tax1 = ( gtotal - 500001 );
			tax2 = (( tax1 * 0.2 ) + 25000 );
			cout<<"| TOTAL TAXABLE AMOUNT  | Rs "<<tax2<<endl;
		}
		if((gtotal>500000&&gtotal<=1000000)&&(x2.age>=60&&x2.age<80))
		{
			tax1 = ( gtotal - 500001 );
			tax2 = (( tax1 * 0.2 ) + 20000 );
			cout<<"| TOTAL TAXABLE AMOUNT  | Rs "<<tax2<<endl;
		}
		if((gtotal>500000&&gtotal<=1000000)&&(x2.age>=80))
		{
			tax1 = ( gtotal - 500001 );
			tax2 = ( tax1 * 0.2 );
			cout<<"| TOTAL TAXABLE AMOUNT  | Rs "<<tax2<<endl;
		}
		if((gtotal>=1000000)&&(x2.age<60))
		{
			tax1 = ( gtotal - 1000001 );
			tax2 = (( tax1 * 0.3 ) + 125000 );
			cout<<"| TOTAL TAXABLE AMOUNT  | Rs "<<tax2<<endl;
		}
		if((gtotal>=1000000)&&(x2.age>=60&&x2.age<80))
		{
			tax1 = ( gtotal - 1000001 );
			tax2 = (( tax1 * 0.3 ) + 120000 );
			cout<<"| TOTAL TAXABLE AMOUNT  | Rs "<<tax2<<endl;
		}
		if((gtotal>=1000000)&&(x2.age>=80))
		{
			tax1 = ( gtotal - 1000001 );
			tax2 = (( tax1 * 0.3 ) + 100000 );
			cout<<"| TOTAL TAXABLE AMOUNT  | Rs "<<tax2<<endl;
		}
		
		}
		friend class storage;
		friend class storage1;
}x3;

class storage
{
	public :
		
		savefile(details x2,income_tax x3)
		{    
		    
			ofstream tax_file;
			tax_file.open("income_tax.txt",ios::app);
			
			tax_file<<x2.gst<<endl;
			tax_file<<endl<<setw(101)<<setfill('|')<<"|"<<endl<<"|"<<setw(100)<<setfill(' ')<<"|";
            tax_file<<endl<<setw(101)<<setfill('|')<<"|"<<endl<<"|"<<setw(100)<<setfill(' ')<<"|";
            tax_file<<endl<<setw(101)<<setfill('|')<<"|"<<endl<<"|"<<setw(100)<<setfill(' ')<<"|";
            tax_file<<endl<<"|                      +++++++++++++++++++    INVOICE    +++++++++++++++++++++     "<<setw(18)<<setfill(' ')<<"|";
            tax_file<<endl<<"|                              *****   INCOME TAX DEPARTMENT  ******"<<setw(33)<<setfill(' ')<<"|";
            tax_file<<endl<<"|                                 ````` Government Of INDIA ````` "<<setw(35)<<setfill(' ')<<"|"<<endl<<"|"<<setw(100)<<setfill(' ')<<"|";
            tax_file<<endl<<setw(101)<<setfill('|')<<"|"<<endl;
		    tax_file<<endl<<setw(101)<<setfill('-')<<"-"<<endl;
        	tax_file<<"|       INCOME SLAB        |   GENERAL CATEGORY   |     SENIOR CITIZENS     |  VERY SENIOR CITIZENS |"<<endl;
    	    tax_file<<"|                          | (non-senior citizen) |  (60 & above years of   |   ( 80 years & above  |"<<endl;
        	tax_file<<"|                          |                      | age but below 80 years) |       of 80 years )   |";
        	tax_file<<endl<<setw(101)<<setfill('-')<<"-"<<endl; 
        	tax_file<<"|                          |::::::::::::::::::::::::::: INCOME TAX RATES :::::::::::::::::::::::::::|";
        	tax_file<<endl<<setw(101)<<setfill('-')<<"-"<<endl;  
        	tax_file<<"|    upto Rs. 2,50,000     |         Nil          |           Nil           |          Nil          |"<<endl;
        	tax_file<<"| Rs 2,50,001-Rs 3,00,000  |         10%          |           Nil           |          Nil          |"<<endl;	
        	tax_file<<"| Rs 3,00,001-Rs 5,00,000  |         10%          |           10%           |          Nil          |"<<endl;	
        	tax_file<<"| Rs 5,00,001-Rs 10,00,000 |         20%          |           20%           |          20%          |"<<endl;
	        tax_file<<"|    Above Rs 10,00,000    |         30%          |           30%           |          30%          |";
	    	tax_file<<endl<<setw(101)<<setfill('-')<<"-"<<endl;cin.ignore();  
			tax_file<<"| GST No.                | 0020_1144414_18_"<<x2.gst<<endl;
			tax_file<<"| NAME                   | "<<x2.name<<endl;
			tax_file<<"| GENDER                 | "<<x2.gender<<endl;
			tax_file<<"| AGE                    | "<<x2.age<<endl;
			tax_file<<"| OCCUPATION             | "<<x2.occupation<<endl;
			tax_file<<"| CONTACT No.            | "<<x2.contact<<endl;
			tax_file<<"| EMAIL                  | "<<x2.email<<endl;
			tax_file<<"| PAN No.                | "<<x2.pan<<endl;
			tax_file<<"| TOTAL INCOME AMOUNT    | Rs "<<x3.totali<<endl;
			tax_file<<"| TOTAL DEDUCTION AMOUNT | Rs "<<x3.totald<<endl;
		    tax_file<<"| TOTAL GROSS INCOME     | Rs "<<x3.gtotal<<endl;
			tax_file<<"| TOTAL TAXABLE INCOME   | Rs "<<x3.gtotal<<endl;
			tax_file<<"| TOTAL TAXABLE AMOUNT   | Rs "<<x3.tax2<<endl;
			tax_file<<setw(100)<<setfill('=')<<"="<<endl;
            tax_file<<endl<<endl<<setw(101)<<setfill('|')<<"|"<<endl<<"|"<<setw(100)<<setfill(' ')<<"|";
            tax_file<<endl<<setw(101)<<setfill('|')<<"|"<<endl<<"|"<<setw(100)<<setfill(' ')<<"|";
            tax_file<<endl<<setw(101)<<setfill('|')<<"|"<<endl;
			tax_file<<endl<<endl<<endl<<endl;
			tax_file.close();
		}
}x4;

class storage1
{
	public :
		savefile1(details x2,income_tax x3)
		{   
		    ofstream tax_file;
			tax_file.open("income_tax1.txt",ios::app);
			
			tax_file<<x2.gst<<endl;
			tax_file<<"| GST No.                | 0020_1144414_18_"<<x2.gst<<endl;
			tax_file<<"| NAME                   | "<<x2.name<<endl;
			tax_file<<"| GENDER                 | "<<x2.gender<<endl;
			tax_file<<"| AGE                    | "<<x2.age<<endl;
			tax_file<<"| OCCUPATION             | "<<x2.occupation<<endl;
			tax_file<<"| CONTACT No.            | "<<x2.contact<<endl;
			tax_file<<"| EMAIL                  | "<<x2.email<<endl;
			tax_file<<"| PAN No.                | "<<x2.pan<<endl;
			tax_file<<"| TOTAL INCOME AMOUNT    | Rs "<<x3.totali<<endl;
			tax_file<<"| TOTAL DEDUCTION AMOUNT | Rs "<<x3.totald<<endl;
		    tax_file<<"| TOTAL GROSS INCOME     | Rs "<<x3.gtotal<<endl;
			tax_file<<"| TOTAL TAXABLE INCOME   | Rs "<<x3.gtotal<<endl;
			tax_file<<"| TOTAL TAXABLE AMOUNT   | Rs "<<x3.tax2<<endl;
			
			tax_file.close();
		}
}x6;

class search
{
	public :
		string data;
		int i,gst_no;
		
		search_data(details x2)
		{
			ifstream tax_file;
			tax_file.open("income_tax.txt", ios::in);
			cout<<endl<<endl<<endl<<endl<<endl<<endl;
			cout<<setw(50)<<setfill('=')<<"="<<endl;
			cout<<"ENTER YOUR UNIQUE SERIAL No.  | ";
			cin>>gst_no;
			cout<<setw(50)<<setfill('=')<<"="<<endl;
			system("cls");
				int j;
				
			if(gst_no)
			{	
			for(i=22;i<gst_no;i++)
			{
			//for(i=0;i<=50;i++)
		j=0;
			while(j!=50)
			{
				j++;
			getline(tax_file,data);
		//	cout<<data<<endl;
		    }	
				}	
				for(i=0;i<=50;i++)
			{
			getline(tax_file,data);
			cout<<data<<endl;
		    }	
		
		    }
			
			else
			{
			cout<<endl<<endl<<endl<<endl<<endl<<endl;
			cout<<ends<<setw(100)<<setfill('*')<<"*"<<endl;
			cout<<ends<<"| SORRY ! THE SEARCHED GST NO. : 0020_1144414_18_"<<gst_no<<" IS NOT PRESENT IN OUR RECORD  |"<<endl;
			cout<<ends<<setw(1000)<<setfill('*')<<"*"<<endl;
			cout<<endl<<endl<<endl;
			}
			tax_file.close();
		}
	    
		
}x5;

int main()
{
system("COLOR E0");
date();

int p,choice;

welcome();
A: 
login();
B:
welcome();
cout<<setw(101)<<setfill('=')<<"="<<endl;
cout<<"|  PRESS  | 1 |      TO VIEW INCOME TAX SLAB      |";cout<<"|  PRESS  | 2 |      TO CALCULATE INCOME TAX     |"<<endl;
cout<<"|  PRESS  | 3 |      TO SEARCH DETAILS            |";cout<<"|  PRESS  | 4 |      TO REQUEST FOR EDIT DETAILS |"<<endl;
cout<<"|  PRESS  | 5 |      TO LOGOUT                    |";cout<<"|  PRESS  | 6 |      TO EXIT                     |"<<endl;
cout<<setw(101)<<setfill('=')<<"="<<endl<<endl;
cout<<setw(50)<<setfill('*')<<"*"<<endl;
cout<<"| ENTER  YOUR  CHOICE  |  ";
cin>>choice;
cout<<setw(50)<<setfill('*')<<"*"<<endl;
system("cls");
switch(choice)
{

case 1:
	{
	system("COLOR 0F");
	x1.show_slab();
    x1.show_slab_table(); 
    goto B;
    break;
	}
case 2:
	{
	D :	
	char typ[5];
	system("COLOR A1");
	x2.get_details();
	x3.get();
	system("COLOR 70");
	invoice();
	x1.show_slab_table(); 
    x2.show_details();
    x3.calculate();
    x3.find_tax(x2);
    cout<<setw(100)<<setfill('=')<<"="<<endl;
    cout<<endl<<endl<<setw(101)<<setfill('|')<<"|"<<endl<<"|"<<setw(100)<<setfill(' ')<<"|";
    cout<<endl<<setw(101)<<setfill('|')<<"|"<<endl<<"|"<<setw(100)<<setfill(' ')<<"|";
    cout<<endl<<setw(101)<<setfill('|')<<"|"<<endl;
    x4.savefile(x2,x3);
    x6.savefile1(x2,x3);
    cout<<endl<<endl<<setw(17)<<setfill('=')<<"="<<endl;
    cout<<"| PRESS ANY KEY |"<<endl;
    cout<<setw(17)<<setfill('=')<<"="<<endl;
    cin>>typ;
    goto B;
    break;
	}
case 3:
	{   system("COLOR 37");
		x5.search_data(x2);
		goto B;
		break;
	}
case 4:
	{
	cout<<endl<<setw(101)<<setfill('|')<<"|"<<endl;
	cout<<"|                              ********  EDIT REQUEST WINDOW  ********                              |"<<endl;	
	cout<<setw(101)<<setfill('|')<<"|"<<endl;
	goto D;
	
	break;
	}
case 5:
	{
	cout<<setw(56)<<setfill('*')<<"*"<<endl;
	cout<<"| YOU ARE LOGGED OUT SUCCESSFULLY ,KINDLY LOGIN AGAIN |"<<endl;
	cout<<setw(56)<<setfill('*')<<"*"<<endl;
	goto A;
	break;

	}
case 6:
	{
	cout<<setw(50)<<setfill('*')<<"*"<<endl;
	cout<<"| THANKYOU ! ** EXIT SUCCESSFULLY **              |"<<endl;
	cout<<setw(50)<<setfill('*')<<"*"<<endl;
	exit(0);
	break;
	}
default :
	{
	cout<<setw(50)<<setfill('=')<<"="<<endl;
	cout<<"| wrong selection, TRY AGAIN ! |"<<endl;
	cout<<setw(50)<<setfill('=')<<"="<<endl<<endl;
	}
	goto B;
}

getch();
}

