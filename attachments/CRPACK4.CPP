#include<fstream.h>
#include<conio.h>

void main()
{
	ofstream fout;
	fout.open("P4.txt");
	fout<<"MUSIC SPECIAL"<<'\n';
	fout<<"9XM"<<'\n';
	fout<<"Vh1"<<'\n';
	fout<<"MX Music"<<'\n';
	fout<<"MTV"<<'\n';
	fout<<"Saavn"<<'\n';
	fout.close();
	cout<<"DONE";
	getch();
}