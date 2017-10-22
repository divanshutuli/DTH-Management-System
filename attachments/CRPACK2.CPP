#include<fstream>
#include<iostream>
#include<conio.h>

 
 using namespace std;
int main()
{
	ofstream fout;
	fout.open("P2.txt");
	fout<<"STAR SPECIAL"<<'\n';
	fout<<"Star Sports"<<'\n';
	fout<<"Star Ex"<<'\n';
	fout<<"Star Movies"<<'\n';
	fout<<"Star Plus"<<'\n';
	fout<<"Star News"<<'\n';
	fout.close();
	cout<<"DONE";
	system("cls");
	getch();
	return 0;
}
