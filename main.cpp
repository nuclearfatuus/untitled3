#include <iostream>

class material {
public:
    std::string name;
    float density;

    std::string getName() const {
        return name;
    }

    float getDensity() const {
        return density;
    }
};

    class material2: public material {
    public:
        std::string state;

        std::string getState() const {
            return state;
        }

        material2(std::string _name, float _density, std::string _state){
            name = _name;
            density = _density;
            state = _state;
            std::cout<<name<<'|'<<density<<'|'<<state<<std::endl;
        }


    };

    int main(){
        material2("iron", 7.82, "solid");



return 0;
}