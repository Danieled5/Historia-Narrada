// Historia Narrada.cpp :
// Eduardo Daniel Perez Roman

#include <iostream>
using namespace std;

int Gen;
int des1;
int des2;
int des3;
int des4;

int main()
{
    cout << "Hola Bienvenido a mi Mundo\n";
    cout << "Eres un estudiante de secundaria y estas por vivir la aventura de tu vida\n";
    cout << "Aun No te conosco soy el Dios del Progama (RANDY)\n";
	cout << "Eres Hombre o eres mujer?\n";
	cout << "1 - HOMBRE / 2 - MUJER\n";
	cin >> Gen;


	switch (Gen)
	{
	case 1:
		cout << "Bien Continuemos\n";
		cout << "Empiezas en tu casa decides Jugar a tu videojuego Favorito?\n";
		cout << "1-Si / 2-NO\n";
		cin >> des1;
		if (des1 == 2)
		{
			cout << "Olvidas esas cosas de jugar videojuegos y Continuas con tu vida aburrida\n";
			cout << "NO ES UN FINAL NI Bueno NI Malo\n";
			cout << "MEHHH\n";
		}
		if (des1 == 1)
		{
			cout << "Te acercas a la television con la intencion de encenderla cuando de repente\n";
			cout << "La television comienza a absorverte y te lleva a un mundo fantasioso\n";
			cout << "Al mas puro estilo Warcraft\n";
			cout << "Enseguida puedes divisar un hongo de color azul inteso\n";
			cout << "Que prefieres hacer?\n";
			cout << "1- Comertelo 2-Patearlo\n";
			cin >> des2;

			

			if (des2 == 1)
			{
				cout << "Te Envenenas\n";
				cout << "Comienzas a Oir Borroso y mueres lentamente mientras vez tus posibilidades\n";
				cout << "De escapar de ese mundo lentamente\n";
				cout << "GAMEOVER\n";
			}
			if (des2 == 2)
			{
				cout << "Tus ojos Comienzan a brillar te salen alas y decides pelear\n";
				cout << "Contra el dios del codigo (RANDY) de un puñetazo lo derrotas y de esta manera escapas del mundo\n";
				cout << "Vives de nuevo tu aburrida vida de estudiante y logras un final feliz\n";
				cout << "YOU WON\n";
			}



		}
		break;

	case 2:
		cout << "Estas en tu cuarto maquillandote y haciendo cosas de mujer en tu cuarto\n";
		cout << "Ibas a ir hoy a la escuela pero una duda viene a tu mente que haras?\n";
		cout << "Abrir la caja de joyas de tu madre o ir a la escuela?\n";
		cout << "1- Abrir la caja / 2- Ir a la escuela\n";
		cin >> des3;
		if (des3 == 1)
		{
			cout << "No puedes aguantar la curiosidad de ver las joyas de tu madre cuando derrepente\n";
			cout << "Algo te comienza a jalar dentro de la caja hasta que llegas a un reino cubierto de brillo\n";
			cout << "Ves un anillo Quieres Recogerlo?\n";
			cout << "1- SI / 2- NO\n";
			cin >> des4;
			if (des4 == 1)
			{
				cout << "Te pones el anillo y comienzas a flotar sientes grandes poderes que te permiten salir de ese mundo\n";
				cout << "YOU WON\n";
			}

			if (des4 == 2)
			{
				cout << "Dejas el anillo tirado cuando derrepente ves una criatura que parece como un leon hecho de diamantes\n";
				cout << "Este se va sobre ti y mueres\n";
				cout << "GAMEOVER\n";
			}

		}
		if (des3 == 2)
		{
			cout << "Terminas decidiendo no tocar las cosas de tu madre y comienzas tu dia como cualquier otro\n";
			cout << "FINAL MEHHH\n";
		}

		break;

	default:
		cout << "Lo siento en mi mundo no aceptamos gente no binaria\n";
		break;
	}
}


