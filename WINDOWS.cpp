#include <iostream>
#include <dirent.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void list_dir(string dir)
{
	DIR * directorio;
	struct dirent * elemento;
	string elem;
	if (directorio = opendir(dir.c_str()))
	{
		while(elemento = readdir(directorio))
		{
			elem = elemento->d_name;
			cout<< elem<<endl;
		}
	}
	closedir(directorio);
}

void init(){
	cout<< "RUTA DEL DIRECTORIO: ";
	string dir;
	getline(cin,dir);
	list_dir(dir);
	init();
}
int main(int argc, char** argv)
 {
	
	init();
	system("PAUSE");	
	
	return 0;
}
