#include <iostream>

class task {
    int a;
    char c;
    int *x;
    int y;

public:
    int get_a() {
        return a;
    };

    char get_c() {
        return c;
    };

    int set_a(int a){
        task::a = a;
    };

    char set_c(char c){
        task::c = c;
    };

    int* get_aa(){
        x = &a;
        return &a;
    };

    int set_aa(int& a){
        task::y = a;
    };


};

int main() {

    task a;
    a.get_a();
    a.set_a(25);
    a.get_aa();
    int x = 2;
    a.set_aa(x);

    task c;
    c.get_c();
    c.set_c(1);

return 0;
}