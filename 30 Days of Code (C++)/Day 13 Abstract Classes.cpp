
class MyBook : public Book{
    
    private: int price; 
    
    public:
        MyBook(string title, string author, int p) : Book(title,author){
            price = p;
        }
    
    public : void display(){
        cout << "Title: " << title << "\nAuthor: " << author << "\nPrice: " << price;
    }
};
