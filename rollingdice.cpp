#include <iostream>
#include <ctime>
using namespace std;


int roll(){
        return rand()%6;
}



void printHistogram(int counts[]){
        for(int i=0; i<31; i++){
                cout<<(i+6)<<":";
                for(int j=0; j<counts[i]; j++){
                        cout<<"X";
                }
                cout<<endl;
        }
}

int main(){
        
        srand(time(NULL));
        int n;    
        cout<<"How many rolls do you want? ";
        cin>>n;
        int counts[31];
        for(int i=0; i<31; i++) counts[i] = 0;
        for(int i=0; i<n; i++){
                
                int sum = roll() + roll() + roll() + roll() + roll() + roll();
        
                counts[sum-6]++;        
        }
        
       
        printHistogram(counts);
        
        return 0;
}