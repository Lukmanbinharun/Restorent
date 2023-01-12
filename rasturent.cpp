#include<bits/stdc++.h>
using namespace std;
class Restaurant{
    public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    private:
    int total_tax;
    public:
    Restaurant(){
        total_tax = 0;
    };
    void add_tex(int a){
        total_tax += a;
    };
    
    int get_tax(){
        return total_tax;
    };
    void imput(int c,string n,int p,int i){
        food_item_codes[i] = c;
        food_item_names[i] = n;
        food_item_prices[i] = p;
    };
};
class order{
    public:
    int table;
    int order_item;
    int price[12];
    int total;
    order(int t,int o){
        table = t;
        order_item = o;
    }

};
Restaurant *create(){
    Restaurant *a =  new Restaurant();
    return a;
};
void imput(Restaurant *a,int count){
    for (int i = 0; i < count; i++)
    {
        string n;
        int c,p;
        cout<<i+1<<" no. item code: ";
        cin>>c;
        cin.ignore();
        cout<<i+1<<" no. item name: ";
        getline(cin,n);
        cout<<i+1<<" no. item price: ";
        cin>>p;
        a->imput(c,n,p,i);
    }
    

};
void show(Restaurant *r, int count){
    cout<<"Item code-------Item name------Item price"<<endl;
    for (int i = 0; i < count; i++)
    {
        printf("%4d      %15s      %4d\n",r->food_item_codes[i],&r->food_item_names[i][0],r->food_item_prices[i]);
    }
    
};
void seclation(){
    int tabel,it;
    cout<<"give your tabel no. to order: ";
    cin>>tabel;
    cout<<"How many iteam do you want to order";
    cin>>it;

}

int main()
{
    int a,b,c;
    Restaurant *menu = create();
    cout<<"How maney item:  ";
    cin>>a;
    imput(menu,a);
    show(menu,a);
    int table, order;
    
    
    cout<<menu->get_tax();
    return 0;
}