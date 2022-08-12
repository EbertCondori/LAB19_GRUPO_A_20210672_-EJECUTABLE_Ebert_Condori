// problema 1

#include <iostream>
using namespace std;

class Bienvenida {
public:
	double operator()(double num_1[],double num_2[]) {
		double *a;
		
		for(int i=0;i<3;i++){
			a[i]=num_1[i]+num_2[i];
		}
		
		return *a;
	}
};

int main()
{
	double a[]={1,2,3};
	double b[]={6,7,8};
	
	Bienvenida obj;
	
	double saludo = obj(a,b);
	

	
	return 0;
}

//problema 2

#include <iostream>

using namespace std;

class Bienvenida {
public:
	string operator()(char inicio_,char final_,string cadena) {
		
		int inicio_1,final_1;
		string *cadena_1;
		
		for(int i=0;i<20;i++){
			if(cadena[i]==inicio_){
				inicio_1=i;
			}
		}
		
		for(int i;i<20;i++){
			if(cadena[i]==final_){
				final_1=i;
			}
		}
		
		for(int i=inicio_1;i<final_1;i++){
			cadena_1[i]=cadena[i];
			
			
		}
		return *cadena_1;
	}
};

int main() {
	Bienvenida obj;
	string saludo = obj('c','k',"abcdefghijklmn");
	
	system("pause");
	return 0;
}
