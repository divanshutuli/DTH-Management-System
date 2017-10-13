#include<fstream.h>
#include<conio.h>

void main()
{
	ofstream fout;
	fout.open("P5.txt");
	fout<<"CHILDREN SPECIAL"<<'\n';
	fout<<"Cartoon Network"<<'\n';
	fout<<"Animax"<<'\n';
	fout<<"Toonami"<<'\n';
	fout<<"Nickelodeon"<<'\n';
	fout<<"Disney XD"<<'\n';
	fout.close();
	cout<<"DONE";
	getch();
}