#include<bits/stdc++.h> 
using namespace std; 
 
class Product{ 
public: 
    int product_id; 
    string product_category,product_name; 
    void input_product() 
    { 
        ifstream in("productIN.txt"); 
        in>>product_id; 
        in.ignore(); 
        getline(in,product_category); 
        getline(in,product_name); 
        in.close(); 
    } 
    void print_product() 
    { 
        ofstream out("productOut.txt"); 
        out<<"Product_ID = "<<product_id<<endl; 
        out<<"Product_Category = "<<product_category<<endl; 
        out<<"Product_Name = "<<product_name<<endl; 
    } 
}; 
class soldProduct : public Product 
{ 
public: 
    int customer_id, price; 
    void input_sold_product() 
    { 
        ifstream in("customerIN.txt"); 
        in>>customer_id>>price; 
        in.close(); 
    } 
    void print_sold_product() 
    { 
        ofstream out("customerOut.txt"); 
        out<<"Product_ID = "<<product_id<<endl; 
        out<<"Product_Category = "<<product_category<<endl; 
        out<<"Product_Name = "<<product_name<<endl;
        out<<"Customer_ID = "<<customer_id<<endl; 
        out<<"Price = "<<price<<" $"; 
    } 
}; 
class boughtProduct : public Product 
{ 
public: 
    int buyer_id,price; 
    string buyer_name; 
 
    void input_bought_product() 
    { 
        ifstream in("buyerIN.txt"); 
        in>>buyer_id>>price; 
        in.ignore(); 
        getline(in,buyer_name); 
        in.close(); 
    } 
    void print_bought_product() 
    { 
        ofstream out("buyerOut.txt"); 
        out<<"Product_ID = "<<product_id<<endl; 
        out<<"Product_Category = "<<product_category<<endl; 
        out<<"Product_Name = "<<product_name<<endl;
        out<<"Buyer_ID = "<<buyer_id<<endl; 
        out<<"Buyer_Name = "<<buyer_name<<endl; 
        out<<"Price = "<<price<<" $"<<endl; 
    } 
};  
 
 
  
int main() 
{ 
    Product one; 
    soldProduct two;
    boughtProduct three; 

    one.input_product(); 
    one.print_product(); 
     
    two.input_product();
    two.input_sold_product(); 
    two.print_sold_product(); 
    
    three.input_product();
    three.input_bought_product(); 
    three.print_bought_product(); 
    return 0; 
}