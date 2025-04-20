#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;


int main(){
    std::vector<int> test_vector;

    for(int i=0; i<5; i++){
        test_vector.push_back(i*2);
    }
    cout<<"the size of the test vector is"<<test_vector.size()<<endl;

    cout<<"printing your vector: ";
    for(int i=0;i<5;i++){
        cout<<test_vector[i]<<", ";
    }
    cout<<endl;

    cout<<"printing your vector again: ";
    for(int num:test_vector){
        cout<<num<<", ";
    }
    cout<<endl;
}
