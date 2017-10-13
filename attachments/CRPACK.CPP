#include<fstream.h>
#include<conio.h>

void main()
{
	ofstream fout;
	fout.open("P1.txt");
	fout<<"Z SPECIAL"<<'\n';
	fout<<"Z Cinema"<<'\n';
	fout<<"Z Show"<<'\n';
	fout<<"Z World"<<'\n';
	fout<<"Z Studio"<<'\n';
	fout<<"Z Regional"<<'\n';
	fout.close();
	cout<<"DONE";
	getch();
}