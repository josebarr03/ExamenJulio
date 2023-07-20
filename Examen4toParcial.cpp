//Critter
#include <iostream>
void punteros();

using namespace std;

class Critter
{
public:
    Critter(int hunger = 0, int boredom = 0, int thirst = 0);
    void Talk();
    void Estado();
    void Eat(int food = 4);
    void Play(int fun = 4);
    void Drink(int water = 4);

private:
    int m_Hunger;
    int m_Boredom;
    int m_Thirst;
    void PassTime(int time = 1);
};

Critter::Critter(int hunger, int boredom, int thirst) :
    m_Hunger(hunger),
    m_Boredom(boredom),
    m_Thirst(thirst)
{}

void Critter::PassTime(int time)
{
    m_Hunger += time;
    m_Boredom += time;
    m_Thirst += time;
}

void Critter::Talk()
{
    cout << "Hola" << endl << "Lista de necesidades" << endl << "Hambre: " << m_Hunger << endl << "Aburrimiento: " << m_Boredom << endl << "Sed: " << m_Thirst << endl;

    if (m_Hunger < 4 && m_Boredom < 4 && m_Thirst < 4)
    {
        cout << "Estoy contento" << endl;
    }
    else if ((m_Hunger > 3 && m_Hunger < 7) || (m_Boredom > 3 && m_Boredom < 7) || (m_Thirst > 3 && m_Thirst < 7))
    {
        cout << "Estoy raro" << endl;
    }
    else if ((m_Hunger > 6 && m_Hunger < 10) || (m_Boredom > 6 && m_Boredom < 10) || (m_Thirst > 6 && m_Thirst < 10))
    {
        cout << "Estoy mal, ayuda" << endl;
    }
    else if ((m_Hunger > 9) || (m_Boredom > 9) || (m_Thirst > 9))
    {
        cout << "Game over" << endl;
        exit(0);
    }

    if (m_Hunger >= 4 && m_Hunger < 7)
    {
        cout << "Tengo hambre" << endl;
    }
    else if (m_Hunger > 6 && m_Hunger < 10)
    {
        cout << "Tengo mucha hambre" << endl;
    }
    else if ((m_Hunger > 9) || (m_Boredom > 9) || (m_Thirst > 9))
    {
        cout << "Game over" << endl;
        exit(0);
    }

    if (m_Boredom >= 4 && m_Boredom < 7)
    {
        cout << "Estoy aburrido" << endl;
    }
    else if (m_Boredom > 6 && m_Boredom < 10)
    {
        cout << "Estoy muy aburrido" << endl;
    }
    else if ((m_Hunger > 9) || (m_Boredom > 9) || (m_Thirst > 9))
    {
        cout << "Game over" << endl;
        exit(0);
    }

    if (m_Hunger >= 4 && m_Thirst < 7)
    {
        cout << "Tengo sed" << endl;
    }
    else if (m_Thirst > 6 && m_Thirst < 10)
    {
        cout << "Tengo mucha sed" << endl;
    }
    else if ((m_Hunger > 9) || (m_Boredom > 9) || (m_Thirst > 9))
    {
        cout << "Game over" << endl;
        exit(0);
    }

    PassTime();
}

void Critter::Eat(int food)
{
    cout << "\nBrrupp. \n";
    m_Hunger -= food;
    if (m_Hunger < 0)
    {
        m_Hunger = 0;
    }
    cout << "Lista de necesidades" << endl << "Hambre: " << m_Hunger << endl << "Aburrimiento: " << m_Boredom << endl << "Sed: " << m_Thirst << endl;
    PassTime();
}

void Critter::Play(int fun)
{
    cout << "\nWheee!\n";
    m_Boredom -= fun;
    if (m_Boredom < 0)
    {
        m_Boredom = 0;
    }
    PassTime();
}

void Critter::Drink(int water)
{
    cout << "\nGlupp Glupp" << endl;
    m_Thirst -= water;
    if (m_Thirst < 0)
    {
        m_Thirst = 0;
    }
    PassTime();
}

int main()
{
    Critter crit;
    crit.Talk();
    int choice;
    do
    {
        cout << "\n Mascotas Virtuales\n\n";
        cout << "0 - Salir.\n";
        cout << "1 - Escucha a tu mascota.\n";
        cout << "2 - Alimentar.\n";
        cout << "3 - Jugar con tu mascota.\n";
        cout << "4 - Dar agua a tu mascota." << endl;
        cout << "Elige una opcion: ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Vuelve pronto!.\n";
            break;
        case 1:
            crit.Talk();
            break;
        case 2:
            crit.Eat();
            break;
        case 3:
            crit.Play();
            break;
        case 4:
            crit.Drink();
            break;
        default:
            cout << "\n Tu eleccion es invalida. \n";
        }
    } while (choice != 0);

    punteros();
}

void punteros()
{
    int Num;
    int Num1;
    int Num2;
    int Num3;
    int Num4;
    int Num5;
    int Num6;
    int Num7;
    cout << "Ingrese un número" << endl;
    cin >> Num;
    cin >> Num1;
    cin >> Num2;
    cin >> Num3;
    cin >> Num4;
    cin >> Num5;
    cin >> Num6;
    cin >> Num7;
    int* pNum = &Num;
    int* pNum1 = &Num1;
    int* pNum2 = &Num2;
    int* pNum3 = &Num3;
    int* pNum4 = &Num4;
    int* pNum5 = &Num5;
    int* pNum6 = &Num6;
    int* pNum7 = &Num7;
}