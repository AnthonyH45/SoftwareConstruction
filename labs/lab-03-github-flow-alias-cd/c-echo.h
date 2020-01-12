#include <iostream>

std::string echo(int length, char** chars) {
    std::string ret = "";
<<<<<<< HEAD
    for(int i = 1; i < length; i++) {
        ret += chars[i];
        if(i < length - 1) {
            ret += " ";
        }
    }
    // ret += "\n";
     return ret;
}
=======
    for (int i = 1; i < length; ++i) {
        ret += chars[i];
        if (i < length - 1) {
            ret += " ";
        }
    }
    //ret += "\n";
    return ret;
}

/*
int main(int argv, char** argc) {
    for (int i = 1; i < argv; ++i) {
        std::cout << argc[i];

        if (i < argv - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}
*/
>>>>>>> master
