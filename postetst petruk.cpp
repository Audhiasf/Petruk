#include <iostream>
using namespace std;

void findMax(){
    int n, list;
    cin>>n;
    
    for(int i = 0; i < n; i++){
        cin>>list;
    }
}

int main(){
	findMax();
}

#include <iostream>
#include <cmath>
using namespace std;

void tukar(int &a, int &b, int &c){
    if (a >= b){
        swap(a,b);
    }
    if (b >= c){
        swap(b,c);
    }
    if(a >= b){
        swap(a,b);
    }
}

#include <iostream>
#include <cmath>
using namespace std;

void hitungRerata(){
    int n;
    float nilai;
    double rata;
    float jumlah = 0;
    
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>nilai; 
        jumlah += nilai;
    }
    rata = jumlah/n;
    cout<<rata;
}
#include <iostream>
using namespace std;

void findMax(){
    int n, list;
    cin>>n;
    int max = 0;
    
    for(int i = 0; i < n; i++){
        cin>>list;
        
        if(list > max){
            max = list;
        }
    }
    cout<<max;
}
