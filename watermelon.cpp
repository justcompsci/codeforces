#include <iostream>

int main(){



    int w;
    
    std::cin >> w;
    if(w<=100&&w>=1){
    

    if(w%2==0&&w>2){
    std::cout << "YES\n";
    }



    else{std::cout << "NO\n";}
}

    
    if(w>100||w<1){
    std::cout << "NO\n";
}


    return 0;
}
