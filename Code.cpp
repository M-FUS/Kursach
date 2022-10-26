#include <iostream>
#include <ctime>
#include <cstdlib>
const int InitialCount=100;
int Count,Num,Player;
bool Correct;
int main (){
  srand(time(0));
  system ("cls");
  Player=1;
  Count=InitialCount;
  do{
  
    if (Player==1){
    do{
        std::cout<<"Ваш ход. На столе "<<Count<<" спичек.\n";
        std::cout<<"Сколько спичек Вы берете?\n";
        std::cin>>Num;
        if(Num>=1&&Num<=10&&Num<=Count)
            Correct=true;
        else
        {
            std::cout<<"Неверно! Повторите ввод!\n";
            Correct=false;
        } 
    }
    while (!Correct);
   }
    else
    {
    do{
      Num=rand()%10+1;
      if (Num>Count)
        Num=Count;
      std::cout<<"Мой ход. Я взял "<<Num<<" спичек\n";}
        while (!Correct);   
    }
    Count-=Num;
    if (Player==1) 
        Player=2;
    else 
        Player=1;
    }
  while (Count>0);
  if (Player==1)
    std::cout<<"Вы проиграли!";
  else std::cout<<"Вы победили!";
return 0;
}
