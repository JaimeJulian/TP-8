#include <bits/stdc++.h>
#include <string>

using namespace std;

int sumarPuntajeLetras(string F){
	
	int cont=0;
	
	for(int i=0;i<F.size();i++){
		if(F[i]=='a'||F[i]=='e'){
		cont++;
		}
		else if(F[i]=='o'||F[i]=='s'){
		cont=cont+2;
		}
		else if(F[i]=='d'||F[i]=='i'||F[i]=='n'||F[i]=='r'){
		cont=cont+3;
		}
		else if(F[i]=='c'||F[i]=='l'||F[i]=='t'||F[i]=='u'){
		cont=cont+4;
		}
		else if(F[i]=='m'||F[i]=='p'){
		cont=cont+5;
		}
		else if(F[i]=='b'||F[i]=='f'||F[i]=='g'||F[i]=='h'||F[i]=='j'||F[i]=='q'||F[i]=='v'||F[i]=='x'||F[i]=='y'||F[i]=='z'){
		cont=cont+6;
		}
		else if(F[i]=='k'||F[i]=='w'){
		cont=cont+7;
		}
	}
	return cont;
}
int main( ){
	
	int cont;
	string F;
	
	cout<<"Ingresar la frase: "<<endl;
	
	getline(cin,F);

	cont=sumarPuntajeLetras	(F);
	cout<<cont<<endl;
	
	return 0;
}
