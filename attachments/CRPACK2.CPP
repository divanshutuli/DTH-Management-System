#include<fstream.h>
#include<conio.h>

void main()
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
	getch();
}