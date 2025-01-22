#include <iostream>
using namespace std;
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int main(){
    bool run = true ;
    while (run)
    {
        cout<<"Rock = 1 Paper = 2  Scissor = 3 \nEnter number to   play"<<endl;

        int num_play ;
        cin >> num_play;
        std::srand(std::time(0));
        int randomNumber = (std::rand() % 3) + 1;
        if (num_play < 3 || num_play > 1 ){
            if (num_play == randomNumber ){
            cout << "again play computer chose: "<< randomNumber <<endl;
            continue;
            }
            if (num_play == 1 && randomNumber == 3  || num_play == 2 && randomNumber == 1  || num_play == 3 && randomNumber == 2){
                cout << "you win computer chose: " << randomNumber <<endl;
                run = false;
                break;
            }
            else{
                cout << "you lose computer chose: "<< randomNumber <<endl;
                break;
            
            }
        }   
    }
    return 0 ;
    
    

}