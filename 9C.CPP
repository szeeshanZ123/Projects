#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
clrscr();
char data[30];
ofstream fwrite("data.txt",ios::app);
fwrite<<"\n"<<endl;

fwrite<<"\n RollNo\t Name\t\t Percentage"<<endl;
fwrite<<"A101\t Sandesh Narker \t 77.5%"<<endl;
fwrite<<"A102\t sunil Sharma \t 56.4%"<<endl;
fwrite.close();
ifstream fread("data.txt");
while(fread)
{
fread.getline(data,30);
cout<<data<<endl;
}
fread.close();
getch();
}