{\rtf1\ansi\ansicpg1252\deff0\deflang16393\deflangfe16393{\fonttbl{\f0\fmodern\fprq1\fcharset0 Courier New;}{\f1\fswiss\fprq2\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\nowidctlpar\lang1033\f0\fs22\par
#include<iostream.h>\par
#include<string.h>\par
#include<iomanip.h>\par
#include<dos.h>\par
#include<conio.h>\par
#include<stdio.h>\par
#define max 20\par
struct employee\par
\{\par
 char name[20];\par
 long int code;\par
 char designation[20];\par
 int exp;\par
 int age;\par
\};\par
int num;\par
employee emp[max],tempemp[max],sortemp[max],sortemp1[max];\par
void main()\par
\{\par
 clrscr();\par
 void build();\par
 void list();\par
 void insert();\par
 void deletes();\par
 void edit();\par
 void search();\par
 void sort();\par
 char option;\par
 void menu();\par
 menu();\par
 while((option=cin.get())!='q')\par
 \{\par
  switch(option)\par
  \{\par
   case 'b':\par
\tab\tab      build();\par
\tab\tab      break;\par
   case 'l':\par
\tab\tab      list();\par
\tab\tab      break;\par
   case 'i':\par
\tab\tab      insert();\par
\tab\tab      break;\par
   case 'd':\par
\tab\tab      deletes();\par
\tab\tab      break;\par
   case 'e':\par
\tab\tab    edit();\par
\tab\tab     break;\par
   case 's':\par
\tab\tab     search();\par
\tab\tab     break;\par
   case 'n':\par
\tab\tab      sort();\par
\tab\tab      break;\par
  \}\par
   menu();\par
  \}\par
 \}\par
 void menu()\par
 \{\par
  clrscr();\par
  highvideo();\par
cout<<"        "<<endl;\par
cprintf("             *****WelCome To Employee Data Centre*****");\par
cout<<"         "<<endl;\par
normvideo();\par
cout<<endl;\par
cout<<"\tab         "<<endl;\par
cout<<"                 Press  b---->Built The Employee Table"<<endl;\par
cout<<"         "<<endl;\par
cout<<"                 Press  l---->List The Employee Table"<<endl;\par
cout<<"         "<<endl;\par
cout<<"                 Press  i---->Insert New Entry"<<endl;\par
cout<<"         "<<endl;\par
cout<<"                 Press  d---->Delete An Entry"<<endl;\par
cout<<"         "<<endl;\par
cout<<"                 Press  e---->Edit An Entry"<<endl;\par
cout<<"         "<<endl;\par
cout<<"                 Press  s---->Search Arecord"<<endl;\par
cout<<"         "<<endl;\par
cout<<"                 Press  n---->Sort The Table"<<endl;\par
cout<<" \tab "<<endl;\par
cout<<"                 Press  q---------->QUIT"<<endl;\par
cout<<" \tab "<<endl;\par
cout<<endl;\par
cout<<endl;\par
cout<<"       Option Please ----->";\par
\}\par
\par
void build()\par
\{\par
\par
 clrscr();\par
 highvideo();\par
 cprintf("                      Build The Table");\par
 cout<<endl;\par
 cout<<endl;\par
 normvideo();\par
 cout<<"            maximum number of entries  -----  >  20"<<endl;\par
 cout<<endl;\par
 cout<<"            how many do you want         ----->  ";\par
 cin>>              num;\par
 cout<<"                     Enter The Following Items"<<endl;\par
 cout<<endl;\par
 for(int i=0;i<=num-1;i++)\par
 \{\par
  cout<<"    Name                 ->\tab        ";\par
  cin>>emp[i].name;\par
  cout<<endl;\par
  cout<<"    Code                 ->\tab        ";\par
  cin>> emp[i].code;\par
  cout<<endl;\par
  cout<<"    Designation          ->            ";\par
  cin>>emp[i].designation;\par
  cout<<endl;\par
  cout<<"    Years of Experience  ->\tab        ";\par
  cin>>emp[i].exp;\par
  cout<<endl;\par
  cout<<"    Age                  -> \tab        ";\par
  cin>>emp[i].age;\par
  cout<<endl;\par
 \}\par
  cout<<"going to main menu";\par
  delay(500);\par
\}\par
\par
void  list()\par
\{\par
 clrscr();\par
 highvideo();\par
 cprintf("                    ********List The Table********");\par
 cout<<endl;\par
 cout<<endl;\par
 normvideo();\par
 cout<<"  Name\tab      Code       Designation         Years(EXP)       Age"<<endl;\par
 cout<<"  ---------------------------------------------------------------------"<<endl;\par
 for(int i=0;i<=num-1;i++)\par
 \{\par
  cout<<setw(13)<<emp[i].name;\par
  cout<<setw(6)<<emp[i].code;\par
  cout<<setw(15)<<emp[i].designation;\par
  cout<<setw(10)<<emp[i].exp;\par
  cout<<setw(15)<<emp[i].age;\par
  cout<<endl;\par
 \}\par
 cout<<endl;\par
  cout<<"going to main menu";\par
 getch();\par
  \}\par
  void insert()\par
  \{\par
  clrscr();\par
  int i=num;\par
  num+=1;\par
  highvideo();\par
  cprintf("                *********Insert New Record*********");\par
  cout<<endl;\par
  normvideo();\par
  cout<<"                       Enter The Following Items"<<endl;\par
  cout<<endl;\par
  cout<<"      Name\tab     ->     ";\par
  cin>>emp[i].name;\par
  cout<<endl;\par
  cout<<"      Code\tab           ->        ";\par
  cin>>emp[i].code;\par
  cout<<endl;\par
  cout<<"      Designation            ->\tab         ";\par
  cin>>emp[i].designation;\par
  cout<<endl;\par
  cout<<"      Years of Experience         ->\tab                  ";\par
  cin>>emp[i].exp;\par
  cout<<endl;\par
  cout<<"      Age\tab         ->               ";\par
  cin>>emp[i].age;\par
  cout<<endl;\par
  cout<<endl<<endl;\par
  cout<<"        going to main menu";\par
  delay(500);\par
\par
  \}\par
\par
\par
  void deletes()\par
  \{\par
   clrscr();\par
   highvideo();\par
   int code;\par
   int check;\par
   cprintf("           *********Delete An Entry*********");\par
   normvideo();\par
   cout<<endl;\par
   cout<<"Enter An JobCode To Delete That Entry->\tab ";\par
   cin>>code;\par
   int i;\par
   for(i=0;i<=num-1;i++)\par
   \{\par
    if(emp[i].code==code)\par
    \{\par
      check=i;\par
    \}\par
   \}\par
   for(i=0;i<=num-1;i++)\par
   \{\par
    if(i==check)\par
    \{\par
    continue;\par
    \}\par
    else\par
    \{\par
    if(i>check)\par
    \{\par
     tempemp[i-1]=emp[i];\par
    \}\par
    else\par
    \{\par
     tempemp[i]=emp[i];\par
    \}\par
     \}\par
   \}\par
  num--;\par
\par
  for(i=0;i<=num-1;i++)\par
  \{\par
   emp[i]=tempemp[i];\par
  \}\par
 \}\par
\par
void edit()\par
\{\par
 clrscr();\par
 int jobcode;\par
 highvideo();\par
 cprintf("              *********Edit An Entry*********           ");\par
 cout<<endl;\par
 cout<<endl;\par
 int i;\par
 void editmenu();\par
 void editname(int);\par
 void editcode(int);\par
 void editdes(int);\par
 void editexp(int);\par
 void editage(int);\par
 char option;\par
 normvideo();\par
 cout<<"    Enter An jobcode To Edit An Entry----\tab ";\par
 cin>>jobcode;\par
  editmenu();\par
 for(i=0;i<=num-1;i++)\par
   \{\par
    if(emp[i].code==jobcode)\par
    \{\par
\par
while((option=cin.get())!='q')\par
\{\par
      switch(option)\par
      \{\par
       case 'n':\par
\tab\tab\tab\tab    editname(i);\par
\tab\tab\tab\tab    break;\par
       case 'c':\par
\tab\tab\tab\tab    editcode(i);\par
\tab\tab\tab\tab    break;\par
       case 'd':\par
\tab\tab\tab\tab    editdes(i);\par
\tab\tab\tab\tab    break;\par
       case 'e':\par
\tab\tab\tab\tab    editexp(i);\par
\tab\tab\tab\tab    break;\par
       case 'a':\par
\tab\tab\tab\tab   editage(i);\par
\tab\tab\tab\tab   break;\par
     \}\par
   editmenu();\par
    \}\par
  \}\par
  \}\par
  \}\par
  void editmenu()\par
  \{\par
   clrscr();\par
   cout<<"                     What Do You Want To edit"<<endl;\par
   cout<<"\tab\tab  \tab    n--------->Name"<<endl;\par
   cout<<"\tab\tab  \tab    c--------->Code"<<endl;\par
   cout<<"\tab\tab  \tab    d--------->Designation"<<endl;\par
   cout<<"\tab\tab  \tab    e--------->Experience"<<endl;\par
   cout<<"\tab\tab  \tab    a--------->Age"<<endl;\par
   cout<<"              q----->QUIT"<<endl;\par
   cout<<"   Options Please ---->>>\tab ";\par
  \}\par
  void editname(int i)\par
  \{\par
     cout<<"Enter New Name----->\tab ";\par
     cin>>emp[i].name;\par
  \}\par
  void editcode(int i)\par
  \{\par
   cout<<"Enter New Job Code----->\tab ";\par
   cin>>emp[i].code;\par
  \}\par
  void editdes(int i)\par
  \{\par
   cout<<"enter new designation----->\tab ";\par
   cin>>emp[i].designation;\par
  \}\par
  void editexp(int i)\par
  \{\par
   cout<<"Enter new Years of Experience       ";\par
   cin>>emp[i].exp;\par
  \}\par
  void editage(int i)\par
  \{\par
   cout<<"Enter new Age                 ";\par
   cin>>emp[i].age;\par
  \}\par
\par
void search()\par
\{\par
 clrscr();\par
  highvideo();\par
  cprintf("     *******Welcome To Search Of Employee Database*******");\par
  normvideo();\par
  cout<<endl;\par
  cout<<endl;\par
  int jobcode;\par
  cout<<"You Can Search Only By Jobcode Of An Employee"<<endl;\par
  cout<<endl<<endl;\par
  cout<<"   Enter Code Of An Employee -->     ";\par
 cin>>jobcode;\par
 for(int i=0;i<=num-1;i++)\par
   \{\par
    if(emp[i].code==jobcode)\par
    \{\par
\par
    cout<<"      Name\tab Code\tab Designation    Years(EXP)    Age"<<endl;\par
 cout<<"        ------------------------------------------------"<<endl;\par
  cout<<setw(10)<<emp[i].name;\par
  cout<<setw(6)<<emp[i].code;\par
  cout<<setw(15)<<emp[i].designation;\par
  cout<<setw(10)<<emp[i].exp;\par
  cout<<setw(15)<<emp[i].age;\par
  cout<<endl;\par
 \}\par
\par
  \}\par
    cout<<"going to main menu";\par
 getch();\par
\par
\par
\}\par
\par
void sort()\par
\{\par
 clrscr();\par
 highvideo();\par
 cprintf("Sort The Databse By JobCode");\par
 normvideo();\par
 void sortmenu();\par
 void sortname();\par
 void sortcode();\par
 void sortdes();\par
 void sortexp();\par
 char option;\par
 void sortage();\par
\par
 cout<<endl;\par
 cout<<endl;\par
 sortmenu();\par
 while((option=cin.get())!='q')\par
 \{\par
  switch(option)\par
  \{\par
   case 'n':\par
\tab\tab\tab\tab  sortname();\par
\tab\tab\tab\tab  break;\par
   case 'c':\par
\tab\tab\tab\tab  sortcode();\par
\tab\tab\tab\tab  break;\par
   case 'd':\par
\tab\tab\tab\tab  sortdes();\par
\tab\tab\tab\tab  break;\par
   case 'e':\par
\tab\tab\tab\tab  sortexp();\par
\tab\tab\tab\tab  break;\par
   case 'a':\par
\tab\tab\tab\tab  sortage();\par
\tab\tab\tab\tab  break;\par
   \}\par
   sortmenu();\par
  \}\par
 \}\par
\par
\par
 void sortmenu()\par
 \{\par
    clrscr();\par
   cout<<"\tab\tab  \tab\tab  how Do You Want To sort"<<endl;\par
   cout<<"\tab\tab  \tab\tab  n--------->Name"<<endl;\par
   cout<<"\tab\tab  \tab\tab  c--------->Code"<<endl;\par
   cout<<"\tab\tab  \tab\tab  d--------->Designation"<<endl;\par
   cout<<"\tab\tab  \tab\tab  e--------->Experience"<<endl;\par
   cout<<"\tab\tab  \tab\tab  a--------->Age"<<endl;\par
   cout<<"                               q----->QUIT"<<endl;\par
   cout<<"   Options Please ---->>>\tab ";\par
  \}\par
\par
\par
\par
void sortname()\par
\{\par
 clrscr();\par
 int i,j;\par
 struct employee temp[max];\par
 for(i=0;i<=num-1;i++)\par
 \{\par
  sortemp1[i]=emp[i];\par
 \}\par
 for(i=0;i<=num-1;i++)\par
  \{\par
   for(j=0;j<=num-1;j++)\par
   \{\par
    if(strcmp(sortemp1[i].name,sortemp1[j].name)<=0)\par
    \{\par
     temp[i]=sortemp1[i];\par
     sortemp1[i]=sortemp1[j];\par
     sortemp1[j]=temp[i];\par
    \}\par
   \}\par
 \}\par
\par
 for( i=0;i<=num-1;i++)\par
   \{\par
\par
    cout<<"      Name     Code\tab   Designation\tab    Years(EXP)   Age"<<endl;\par
 cout<<"     ---------------------------------------------------------"<<endl;\par
 for( i=0;i<=num-1;i++)\par
 \{\par
  cout<<setw(13)<<sortemp1[i].name;\par
  cout<<setw(6)<<sortemp1[i].code;\par
  cout<<setw(15)<<sortemp1[i].designation;\par
  cout<<setw(10)<<sortemp1[i].exp;\par
  cout<<setw(15)<<sortemp1[i].age;\par
  cout<<endl;\par
 \}\par
  cout<<"Press Any Key To Go Back";\par
 getch();\par
\par
\} \}\par
\par
void sortcode()\par
\{\par
 clrscr();\par
 int i,j;\par
 struct employee temp[max];\par
 for(i=0;i<=num-1;i++)\par
 \{\par
  sortemp1[i]=emp[i];\par
 \}\par
 for(i=0;i<=num-1;i++)\par
  \{\par
   for(j=0;j<=num-1;j++)\par
   \{\par
    if(sortemp1[i].code<sortemp1[j].code)\par
    \{\par
     temp[i]=sortemp1[i];\par
     sortemp1[i]=sortemp1[j];\par
     sortemp1[j]=temp[i];\par
    \}\par
   \}\par
 \}\par
\par
 for( i=0;i<=num-1;i++)\par
   \{\par
\par
    cout<<"      Name     Code\tab  Designation\tab    Years(EXP)\tab    Age"<<endl;\par
 cout<<"     ---------------------------------------------------------- "<<endl;\par
 for( i=0;i<=num-1;i++)\par
 \{\par
  cout<<setw(13)<<sortemp1[i].name;\par
  cout<<setw(6)<<sortemp1[i].code;\par
  cout<<setw(15)<<sortemp1[i].designation;\par
  cout<<setw(10)<<sortemp1[i].exp;\par
  cout<<setw(15)<<sortemp1[i].age;\par
  cout<<endl;\par
 \}\par
  cout<<"Press Any Key To Go Back";\par
 getch();\par
\par
\} \}\par
\par
\par
void sortdes()\par
\{\par
 clrscr();\par
 int i,j;\par
 struct employee temp[max];\par
 for(i=0;i<=num-1;i++)\par
 \{\par
  sortemp1[i]=emp[i];\par
 \}\par
 for(i=0;i<=num-1;i++)\par
  \{\par
   for(j=0;j<=num-1;j++)\par
   \{\par
    if(strcmp(sortemp1[i].designation,sortemp1[j].designation)<=0)\par
    \{\par
     temp[i]=sortemp1[i];\par
     sortemp1[i]=sortemp1[j];\par
     sortemp1[j]=temp[i];\par
    \}\par
   \}\par
 \}\par
\par
 for( i=0;i<=num-1;i++)\par
   \{\par
\par
    cout<<"       Name     Code\tab   Designation\tab    Years(EXP)\tab    Age"<<endl;\par
 cout<<"     ----------------------------------------------------------"<<endl;\par
 for( i=0;i<=num-1;i++)\par
 \{\par
  cout<<setw(13)<<sortemp1[i].name;\par
  cout<<setw(6)<<sortemp1[i].code;\par
  cout<<setw(15)<<sortemp1[i].designation;\par
  cout<<setw(10)<<sortemp1[i].exp;\par
  cout<<setw(15)<<sortemp1[i].age;\par
  cout<<endl;\par
 \}\par
  cout<<"Press Any Key To Go Back";\par
 getch();\par
\par
\} \}\par
\par
void sortage()\par
\{\par
 clrscr();\par
 int i,j;\par
 struct employee temp[max];\par
 for(i=0;i<=num-1;i++)\par
 \{\par
  sortemp1[i]=emp[i];\par
 \}\par
 for(i=0;i<=num-1;i++)\par
  \{\par
   for(j=0;j<=num-1;j++)\par
   \{\par
    if(sortemp1[i].age<sortemp1[j].age)\par
    \{\par
     temp[i]=sortemp1[i];\par
     sortemp1[i]=sortemp1[j];\par
     sortemp1[j]=temp[i];\par
    \}\par
   \}\par
 \}\par
\par
 for( i=0;i<=num-1;i++)\par
   \{\par
\par
    cout<<"       Name     Code\tab     Designation\tab     Years(EXP)      Age"<<endl;\par
 cout<<"     ------------------------------------------------------------"<<endl;\par
 for( i=0;i<=num-1;i++)\par
 \{\par
  cout<<setw(13)<<sortemp1[i].name;\par
  cout<<setw(6)<<sortemp1[i].code;\par
  cout<<setw(15)<<sortemp1[i].designation;\par
  cout<<setw(10)<<sortemp1[i].exp;\par
  cout<<setw(15)<<sortemp1[i].age;\par
  cout<<endl;\par
 \}\par
  cout<<"Press Any Key To Go Back";\par
 getch();\par
\par
\} \}\par
\par
\par
void sortexp()\par
\{\par
 clrscr();\par
 int i,j;\par
 struct employee temp[max];\par
 for(i=0;i<=num-1;i++)\par
 \{\par
  sortemp1[i]=emp[i];\par
 \}\par
 for(i=0;i<=num-1;i++)\par
  \{\par
   for(j=0;j<=num-1;j++)\par
   \{\par
    if(sortemp1[i].exp<sortemp1[j].exp)\par
    \{\par
     temp[i]=sortemp1[i];\par
     sortemp1[i]=sortemp1[j];\par
     sortemp1[j]=temp[i];\par
    \}\par
   \}\par
 \}\par
\par
 for( i=0;i<=num-1;i++)\par
   \{\par
\par
    cout<<"       Name     Code\tab     Designation\tab     Years(EXP)     Age"<<endl;\par
 cout<<"     -----------------------------------------------------------"<<endl;\par
 for( i=0;i<=num-1;i++)\par
 \{\par
  cout<<setw(13)<<sortemp1[i].name;\par
  cout<<setw(6)<<sortemp1[i].code;\par
  cout<<setw(15)<<sortemp1[i].designation;\par
  cout<<setw(10)<<sortemp1[i].exp;\par
  cout<<setw(15)<<sortemp1[i].age;\par
  cout<<endl;\par
 \}\par
  cout<<"Press Any Key To Go Back";\par
 getch();\par
\par
\} \}\par
\pard\nowidctlpar\sa200\sl276\slmult1\lang9\f1\par
}
 