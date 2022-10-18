#include <iostream>
#include <string.h>
using namespace std;
class Park
{   
    protected:
    int ticket;
    string value="Valid";
    public:
    int user_money;
    void cut_ticket( )
    {
        cout << "The price of the Park ticket is 5$."<<endl << "Give the money: ";
        cin >> user_money;
    }
    void gettic( )
    {
        ticket=user_money;
    }

};
class Park_items : public Park
{
    public:
    int think;
    void run_ticket( )
    {
        if (ticket==5)
        {
        cout << "1. Rolar coster ride is 5$." <<endl;
        cout << "2. Swiming in the pool is 5$." <<endl;
        cout << "3. Haunted house exploring is 5$." <<endl;
        cout << "choose the ones you want!" <<endl;
        cout << "Press \"5\" skip button to skip: "<< endl;
        int money=0;
        int i=0;
        while(i>=0)
        {
            if(think!=5)
            {
            cin >> think;
            if(think!=5)
            {
                money+=5;
            }
            i++;
            }
            else
            break;
        }
            if (money<5)
            {
                cout << endl << "You can only roam in the park!";
                cout <<endl << "--------------------------------" <<endl;
            }
            else
            {
                cout << endl << "Total costing is: " << money << "$ ->" << "Enjoy!"<<endl;
                cout <<endl << "--------------------------------" <<endl;
            }
        }
        // ---------
        else if (ticket>5)
        {
        cout << "Here is your change: " << (ticket-5)<<endl;

        cout << "1. Rolar coster ride is 5$." <<endl;
        cout << "2. Swiming in the pool is 5$." <<endl;
        cout << "3. Haunted house exploring is 5$." <<endl;
        cout << "choose the ones you want!" <<endl;
        cout << "Press \"5\" skip button to skip: "<< endl;
        int money=0;
        int i=0;
        while(i>=0)
        {
            if(think!=5)
            {
            cin >> think;
            if(think!=5)
            {
                money+=5;
            }
            i++;
            }
            else
            break;
        }
            if (money<5)
            {
                cout << endl << "You can only roam in the park!";
                cout <<endl << "--------------------------------" <<endl;
            }
            else
            {
                cout << endl << "Total costing is: " << money << "$ ->" << "Enjoy!"<<endl;
                cout <<endl << "--------------------------------" <<endl;
            }
        }
        // -----
        else
        {
            cout << "You cannot enter the park. ";
        }
        
    }
};
class Food
{
    private:
    char take;
    public:
    void display( )
    {
        cout << "Want to buy some food?" << endl << "Press \"y\" for yes."<< endl <<  "Press \"x\" for no ->" << endl;
    }
    void get_char( )
    {
        cin >> take;
    }
    void display_char( )
    {
        if(take=='y')
        {
            cout << "We have: " << endl;
            cout << "1) Hot wings : 7.99 $" <<endl;
            cout << "2) pasta: 6.99$" << endl;
            cout << "3) Pizza: 10.99$" <<endl;
            cout << "Press  '5'  to skip!"<<endl << "=> ";

            int k=0;
            float food_pay=0;
            while(k>=0)
            {
                int choose;
                cin >> choose;
                if(choose ==1 && choose !=5)
                {
                    cout << "You have chosen Hot wings for: 7.99 $." << endl <<endl<< "To skip buying press '5'"<<endl<< "or"<<endl << "continue and take item number: ";
                    food_pay+=7.99;
                }
                else if(choose ==2 && choose !=5)
                {
                    cout << "You have chosen pasta for: 6.99$." << endl <<endl<< "To skip buying press '5'"<<endl<< "or"<<endl << "continue and take item number: ";
                    food_pay+=6.99;
                }
                else if(choose ==3 && choose !=5)
                {
                    cout << "You have chosen Pizza for: 10.99$." << endl <<endl<< "To skip buying press '5'"<<endl<< "or"<<endl << "continue and take item number: ";
                    food_pay+=10.99;
                }
                else
                break;
                k++;
            }
            cout <<endl << "--------------------------------" <<endl;
            cout << "Total food bill: " << food_pay<<endl;
            cout << "Thank you. Come again if you want to buy more food.";
            cout <<endl << "--------------------------------" <<endl;
        }
        else
        {
            cout << "Thank you. Come again if you want to buy some food.";
        }
    }
};
int main()
{
    Park object;
    // ---------
    Park_items park;

    park.cut_ticket( );
    park.gettic( );
    park.run_ticket( );
    // -------
    Food food_object;
    food_object.display( );
    food_object.get_char( );
    food_object.display_char( );
}