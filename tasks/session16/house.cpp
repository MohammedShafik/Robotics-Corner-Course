#include<iostream>

class Room;

class House
{
    private:
        Room* living;
        Room* kitchen;
    public:
        House() : living(new Room()) , kitchen(new Room()){}
        ~House(){
            delete kitchen;
        }
};

class Room{
    private:
        int size;
    public:
        Room() : size(0) {}
};

int main(){
    Room* r= new Room();
    delete r;
    return 0;
}