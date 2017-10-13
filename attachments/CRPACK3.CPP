#include<fstream.h>
#include<conio.h>

void main()
{
	ofstream fout;
	fout.open("P3.txt");
	fout<<"SONY SPECIAL"<<'\n';
	fout<<"Sony Pix"<<'\n';
	fout<<"Sony Six"<<'\n';
	fout<<"Sony Kix"<<'\n';
	fout<<"Sony Max"<<'\n';
	fout<<"SAB"<<'\n';
	fout.close();
	cout<<"DONE";
	getch();
}