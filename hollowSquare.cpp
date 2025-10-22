#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the size of square: ";
    cin >> N;

    cout << "\nHollow Square Pattern:\n\n";

    for (int i = 0; i < N; i++) {           // outer loop → rows
        for (int j = 0; j < N; j++) {       
            
            if (i == 0 || i == N-1 || j == 0 || j == N-1){
            
            
                cout<< "3 ";
            }
            
            
              else if(i == 1|| i==N-2 || j == 1 ||j == N-2){
                    cout<<"2 ";
                }

                else if(i == 2 || i== N-3 || j== 2 || j== N-3 ){
                    cout<<"1 ";

                }
                  else if(i ==3 || i==N-4 || j== 3 || j== N-4){
                    cout<<"0 ";
                  }  
                
            else
                cout << "  ";               // spaces for hollow part
        }
        cout << endl;
    }
}
