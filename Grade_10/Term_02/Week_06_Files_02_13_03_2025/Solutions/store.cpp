#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct Product
{
    string name;
    int amount;
    double price;
};

struct Query
{
    string name;
    int amount;
};


int main()
{
    ifstream in("inventory.txt");
    if(!in.is_open())
    {
        cout<<"Error!";
        return -1;
    }

    int amountProducts;
    in >> amountProducts;

    Product products[amountProducts];
    for(int i = 0; i < amountProducts; i++)
    {
        in >> products[i].name;
        in >> products[i].amount;
        in >> products[i].price;
    }

    int M;
    cin>>M;
    Query queries[M];
    for(int i = 0; i < M; i++)
    {
        cin>>queries[i].name;
        cin>>queries[i].amount;
    }
    double profit = 0;
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < amountProducts; j++)
        {
            if(queries[i].name == products[j].name)
            {
                if(queries[i].amount <= products[j].amount)
                {
                    profit += queries[i].amount * products[j].price;
                    products[j].amount -= queries[i].amount;
                }
                else
                {
                    cout<<"Not enough "<<queries[i].name<<endl;
                }
            }
        }
    }
    cout<<profit;
    in.close();

    ofstream out("inventory.txt");
    if(!out.is_open())
    {
        cout<<"Error!";
        return -1;
    }
    out << amountProducts << endl;
    for(int i = 0; i < amountProducts; i++)
    {
        out << products[i].name << " ";
        out << products[i].amount << " ";
        out << products[i].price << endl;
    }

    out.close();



//    for(int i = 0; i < amountProducts; i++)
//    {
//        cout<<products[i].name<<" ";
//        cout<<products[i].amount<<" ";
//        cout<<products[i].price<<endl;
//    }





    return 0;
}
