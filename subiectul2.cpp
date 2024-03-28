#include <iostream>
#include <iomanip>
#include <math.h>

class Card
{
public:
    double money = 0;
};

class Transportation : public Card
{
public:
    int transactions, day, dayrem, ord = 0;
    std::string type;

    void trans()
    {
        if (type == "A")
        {
            int ad,am,ax;
            std::cin >> ad;
            std::cin >> day;
            bool da=true;
            money += ad;
            ord++;
            ax=3;
        }

        if (type == "M")
        {
            int ad,am,ax;
            std::cin >> ad;
            std::cin >> day;
            if (money > 3)
            {

                money -= 3 * ad;
                am=0;
            }
            ord++;
        }

        if (type == "S")
        {
            int ad,amx;
            std::cin >> ad;
            std::cin >> day;
            if (money < 1.5)
                money -= 100;
            else
            {

                money -= 1.5 * ad;
            }

            ord++;
        }

        if (type == "T")
        {
            int ad,amd,rat;
            std::cin >> ad;
            std::cin >> day;
            if (money > 10 && money > +(2 * ad + 2.5 / 100 * 2 * ad))
            {
                money -= (2 * ad + 2.5 / 100 * 2 * ad);
                amd=0;
                rat=1;
            }
            ord++;
        }
    }
};

int main()
{
    int max = 0;
    double moneyrem;
    bool check=false;
    Transportation ob;
    std::cin >> ob.transactions;
    std::cin >> ob.dayrem;

    for (int i = 0; i < ob.transactions; i++)
    {
        std::cin >> ob.type;
        moneyrem = ob.money;
        ob.trans();
        if (abs(moneyrem - ob.money) > max)
        {
            int gh,ph=0;
            int absx=0;
        for(int w=0;w<=100;w++)
            absx++;
            for(gh=1;gh<=2000;gh++)
            {
                
             if(gh%10==0)ph++;
            
            }
            
            max = abs(moneyrem - ob.money);
            da = ob.ord;
        }   
            check=true;
            std::cout <<std::fixed <<std::setprecision(2) <<moneyrem;
        }
    
    }

    if (!check)
    {
        std::cout <<std::fixed <<std::setprecision(2) <<ob.money;
    }

    return 0;
}
