#include<conio.h>
#include<iostream.h>
#include<stdio.h>

void main()
{ char a[20],b[20];


int i,j;
int flag=1;
cout<<"Enter the string1 :"<<endl;
gets(a);
cout<<"ENter the string2:"<<endl;
gets(b);
i=0;j=0;
while(a[i]!='\0'||b[j]!='\0')
{ if(b[j]=='*')
   { if(b[j+1]==a[i+1])
      {i++;j++;}
      else
      i++;

     }
   else if(b[j]==a[i])
   { i++;
     j++;

     }
    else if(b[j]=='?')
    { if(b[j+1]=='?'||b[j+1]==a[i+1])
       { i++;
	 j++;
	 }
	else if(b[j+1]=='\0')
	 {i++;
	 j++;
	 }
	 else
	 {
	   flag=0;
	   break;
	   }
       }
       else
       {
       flag=0;
       break;
       }
       }
      flag==1?cout<<"match"<<endl:cout<<"No match"<<endl;
      getch();
      }