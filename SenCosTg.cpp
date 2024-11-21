#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double angulos[89][3] ={
    		{0.017 , 0.9998 , 0.017}, // 1°
			{0.035 , 0.999 , 0.035}, //2°
			{0.052 , 0.999 , 0.052}, //3°
			{0.070 , 0.998 , 0.070}, //4°
			{0.087 , 0.996 , 0.087}, //5°
			{0.105 , 0.995 , 0.105}, //6°
			{0.122 , 0.993 , 0.123}, //7°
			{0.139 , 0.990 , 0.141}, //8°
			{0.156 , 0.988 , 0.158}, //9°
			{0.174 , 0.985 , 0.176}, //10°
			{0.191 , 0.982 , 0.194}, //11°
			{0.208 , 0.978 , 0.213},//12°
			{0.225 , 0.974 , 0.231},//13°
			{0.242 , 0.970 , 0.249},//14°
			{0.259 , 0.966 , 0.268},//15°
			{0.276 , 0.961 , 0.287},//16°
			{0.292 , 0.956 , 0.306},//17°
			{0.309 , 0.951 , 0.325},//18°
			{0.326 , 0.946 , 0.344},//19°
			{0.342 , 0.940 , 0.364},//20°
			{0.358 , 0.934 , 0.384},//21°
			{0.375 , 0.927 , 0.404},//22°
			{0.391 , 0.921 , 0.424},//23°
			{0.407 , 0.914 , 0.445},//24°
			{0.423 , 0.906 , 0.466},//25°
			{0.438 , 0.899 , 0.488},//26°
			{0.454 , 0.891 , 0.510},//27°
			{0.469 , 0.883 , 0.532},//28°
			{0.485 , 0.875 , 0.554},//29°
			{0.500 , 0.866 , 0.577},//30°
			{0.515 , 0.857 , 0.601},//31°
			{0.530 , 0.848 , 0.625},//32°
			{0.545 , 0.839 , 0.649},//33°
			{0.559 , 0.829 , 0.675},//34°
			{0.574 , 0.819 , 0.700},//35°
			{0.588 , 0.809 , 0.727},//36°
			{0.602 , 0.799 , 0.754},//37°
			{0.616 , 0.788 , 0.781},//38°
			{0.629 , 0.777 , 0.810},//39°
			{0.643 , 0.766 , 0.839},//40°
			{0.656 , 0.755 , 0.869},//41°
			{0.669 , 0.743 , 0.900},//42°
			{0.682 , 0.731 , 0.933},//43°
			{0.695 , 0.719 , 0.966},//44°
			{0.707 , 0.707 , 1.000},//45°
			{0.719 , 0.695 , 1.036},//46°
			{0.731 , 0.682 , 1.072},//47°
			{0.743 , 0.669 , 1.111},//48°
			{0.755 , 0.656 , 1.150},//49°
			{0.766 , 0.643 , 1.192},//50°
			{0.777 , 0.629 , 1.235},//51°
			{0.788 , 0.616 , 1.280},//52°
			{0.799 , 0.602 , 1.327},//53°
			{0.809 , 0.588 , 1.376},//54°
			{0.819 , 0.574 , 1.428},//55°
			{0.829 , 0.559 , 1.483},//56°
			{0.839 , 0.545 , 1.540},//57°
			{0.848 , 0.530 , 1.600},//58°
			{0.857 , 0.515 , 1.664},//59°
			{0.866 , 0.500 , 1.732},//60°
			{0.875 , 0.485 , 1.804},//61°
			{0.883 , 0.469 , 1.881},//62°
			{0.891 , 0.454 , 1.963},//63°
			{0.899 , 0.438 , 2.050},//64°
			{0.906 , 0.423 , 2.145},//65°
			{0.914 , 0.407 , 2.246},//66°
			{0.921 , 0.391 , 2.356},//67°
			{0.927 , 0.375 , 2.475},//68°
			{0.934 , 0.358 , 2.605},//69°
			{0.940 , 0.342 , 2.747},//70°
			{0.946 , 0.326 , 2.904},//71°
			{0.951 , 0.309 , 3.078},//72°
			{0.956 , 0.292 , 3.271},//73°
			{0.961 , 0.276 , 3.487},//74°
			{0.966 , 0.259 , 3.732},//75°
			{0.970 , 0.242 , 4.011},//76°
			{0.974 , 0.225 , 4.331},//77°
			{0.978 , 0.208 , 4.705},//78°
			{0.982 , 0.191 , 5.145},//79°
			{0.985 , 0.174 , 5.671},//80°
			{0.988 , 0.156 , 6.314},//81°
			{0.990 , 0.139 , 7.115},//82°
			{0.993 , 0.122 , 8.144},//83°
			{0.995 , 0.105 , 9.514},//84°
			{0.996 , 0.087 , 11.430},//85°
			{0.998 , 0.070 , 14.301},//86°
			{0.999 , 0.052 , 19.081},//87°
			{0.999 , 0.035 , 28.636},//88°
			{0.9998 , 0.017 , 57.290},//89°
    };
    int icognita, dados, angulo, escolha, escolha2;
    double valor1, valor2;
    do{
    cout <<"Qual é a sua icógnita? \n1. Hipotenusa. \n2. Cateto Oposto. \n3. Cateto Adjacente.\n";
    cin >> icognita;
    cin.ignore();
    switch(icognita){
    case 1:
    	cout << "Qual é o cateto? \n1. Adjacente \n2. Oposto\n";
    	cin >> escolha;
    	cin.ignore();
    	switch(escolha){
    	case 1:
    		dados = 1;
    		cout <<"Qual é o valor do cateto adjacente?\n";
    		cin >> valor1;
    		cin.ignore();
    		cout <<"Qual é o valor do ângulo?\n";
    		    		cin >> angulo;
    		    		cin.ignore();
    		    		if(angulo < 90 && angulo > 0){
    		    		cout <<"A fórmula que terá que usar é Cos = Cateto Adjacente / Hipotenusa \nO Cos de " <<angulo<<"° é " << angulos[angulo - 1][dados]<<"\n";
    		    		valor2 = valor1 / angulos[angulo - 1][dados];
    		    		cout <<"O resultado é de "<< valor2 <<" \nDeseja tentar novamente?\nSe sim, precione 1.\n.";
    		    		    				    			cin >> escolha2;
    		    		    				    			cin.ignore();
    		    		}else{
    		    		    				    				cout <<"Erro. Deseja tentar novamente? \nSe sim, precione 1.\n";
    		    		    				    				cin >> escolha2;
    		    		    				    				cin.ignore();
    		    		}
        break;
    	case 2:
    		dados = 0;
    		cout <<"Qual é o valor do cateto oposto?\n";
    		cin >> valor1;
    		cin.ignore();
    		cout <<"Qual é o valor do ângulo?\n";
    		cin >> angulo;
    		cin.ignore();
    		if(angulo < 90 && angulo > 0){
    		cout <<"A fórmula que terá que usar é Sen = Cateto Oposto / Hipotenusa \nO Sen de "<<angulo<<"° é " << angulos[angulo - 1][dados]<<"\n";
    		valor2 = valor1 / angulos[angulo - 1][dados];
    		cout <<"O resultado é de "<< valor2 <<" \nDeseja tentar novamente?\nSe sim, precione 1.\n";
    		    				    			cin >> escolha2;
    		    				    			cin.ignore();
    		}else{
    		    				    				cout <<"Erro. Deseja tentar novamente? \nSe sim, precione 1.\n";
    		    				    				cin >> escolha2;
    		    				    				cin.ignore();
    		}
    		    				    			break;
    	default:
    		cout << "Erro. Tente novamente\n Se sim, precione 1.\n";
    		cin >> escolha2;
    		cin.ignore();
    		break;
    	}
    	break;
    	case 2:
    		cout <<"Qual destes você tem dados? \n1. Hipotenusa \n2. Cateto Adjacente\n";
    		cin >> escolha;
    		cin.ignore();
    		switch(escolha){
    		case 1:
    			dados = 0;
    			cout <<"Qual é o valor da Hipotenusa?\n";
    			cin >> valor1;
    			cin.ignore();
    			cout << "Qual é o valor do ângulo?\n";
    			cin >> angulo;
    			cin.ignore();
    			if(angulo < 90 && angulo > 0){
    			cout <<"Neste caso, terá que usar a fórmula Sen = Cateto Oposto / Hipotenusa \nO Sen de "<< angulo <<"° é " <<angulos[angulo - 1][dados]<<"\n";
    			valor2 = angulos[angulo - 1][dados] * valor1;
    			cout <<"O resultado é de "<< valor2 <<" \nDeseja tentar novamente?\nSe sim, precione 1.\n";
    			    				    			cin >> escolha2;
    			    				    			cin.ignore();
    			}else{
    			    				    				cout <<"Erro. Deseja tentar novamente? \nSe sim, precione 1.\n";
    			    				    				cin >> escolha2;
    			    				    				cin.ignore();
    			}
    			break;
    		case 2:
    			dados = 2;
    			    cout <<"Qual é o valor da Cateto Adjacente?\n";
    				cin >> valor1;
    				cin.ignore();
    	   			cout << "Qual é o valor do ângulo?\n";
    	  			cin >> angulo;
    	  			cin.ignore();
    	  			if(angulo < 90 && angulo > 0){
    	   			cout <<"Neste caso, terá que usar a fórmula Tg = Cateto Oposto / Cateto Adjacente \nO Tg de "<< angulo <<"° é " <<angulos[angulo - 1][dados]<<"\n";
    			   	valor2 = angulos[angulo - 1][dados] * valor1;
    			   	cout <<"O resultado é de "<< valor2 <<" \nDeseja tentar novamente?\nSe sim, precione 1.\n";
    			   	    				    			cin >> escolha2;
    			   	    				    			cin.ignore();
    	  			}else{
    	  			    				    				cout <<"Erro. Deseja tentar novamente? \nSe sim, precione 1.\n";
    	  			    				    				cin >> escolha2;
    	  			    				    				cin.ignore();
    	  			}
    			break;
    		default:
    			cout <<"Erro. Tente novamente\n 1 para sim.\n";
    			cin >> escolha2;
    			cin.ignore();
    		}
    		break;
    		case 3:
    			cout << "Qual desses você tem os dados? \n1. Hipotenusa \n2. Cateto Oposto\n";
    			cin >> escolha;
    			cin.ignore();
    			switch(escolha){
    			case 1:

    				dados = 1;
    				    			cout <<"Qual é o valor da Hipotenusa?\n";
    				    			cin >> valor1;
    				    			cin.ignore();
    				    			cout << "Qual é o valor do ângulo?\n";
    				    			cin >> angulo;
    				    			cin.ignore();
    				    			if(angulo < 90 && angulo > 0){
    				    			cout <<"Neste caso, terá que usar a fórmula Cos = Cateto Adjacente / Hipotenusa \nO Cos de "<< angulo <<"° é " <<angulos[angulo - 1][dados]<<"\n";
    				    			valor2 = angulos[angulo - 1][dados] * valor1;
    				    			cout <<"O resultado é de "<< valor2 <<" \nDeseja tentar novamente?\nSe sim, precione 1.\n";
    				    			cin >> escolha2;
    				    			cin.ignore();
    				    			}else{
    				    				cout <<"Erro. Deseja tentar novamente? \nSe sim, precione 1.\n";
    				    				cin >> escolha2;
    				    				cin.ignore();
    				    			}
    				    			break;
    			case 2:
    				dados = 2;
    				    			cout <<"Qual é o valor da Cateto Oposto?\n";
    				    			cin >> valor1;
    				    			cin.ignore();
    				    			cout << "Qual é o valor do ângulo?\n";
    				    			cin >> angulo;
    				    			cin.ignore();
    				    			if(angulo < 90 && angulo > 0){
    				    			cout <<"Neste caso, terá que usar a fórmula Tg = Cateto Oposto / Cateto Adjacente \nO Tg de "<< angulo <<"° é " <<angulos[angulo - 1][dados]<<"\n";
    				    			valor2 = valor1 / angulos[angulo - 1][dados];
    				    			cout <<"O resultado é de "<< valor2 <<" \nDeseja tentar novamente? \nSe sim, precione 1.\n";
    				    			cin >> escolha2;
    				    			cin.ignore();
    				    			} else {
    				    				cout <<"Erro. Deseja tentar novamente?\nSe sim, precione 1.\n";
    				    				    				    			cin >> escolha2;
    				    				    				    			cin.ignore();
    				    			}
    				break;
    			default:
    				cout <<"Erro. Tente novamente.\nSe sim, precione 1.\n";
    				cin >> escolha2;
    				cin.ignore();
    			}
    			break;
    }
    }while(escolha2 == 1);
    cout << "Obrigado e até a próxima!!";
	return 0;
}
