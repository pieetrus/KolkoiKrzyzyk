#include<iostream>
#include"kolko_i_krzyzyk.hh"

using namespace std;

int main(){
  int ile;
  int rozmiar;
  char start;

  cout<<"Podaj rozmiar planszy, oraz ilosc znakow w rzedzie potrzebnych do zwyciestwa"<<endl;
  cout<<"Rozmiar planszy(n x n): ";
  cin>>rozmiar;
  cout<<endl<<cout<<"Ilosc znakow w rzedzie potrzebnych, do zwyciestwa: ";
  cin>>ile;

  cout<<"Pola na planszy numerowane sa od 1 do "<<rozmiar*rozmiar<<"."<<endl;

  KolkoIKrzyzyk gra (rozmiar, ile);
  cout<<"Rozpoczynamy gre? (T=TAK)";
  cin>>start;
  if((start=='T')||(start=='t'))
    gra.ObslugaGry();

}
