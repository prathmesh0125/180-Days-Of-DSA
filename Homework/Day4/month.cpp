#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number in 1 to 12"<<endl;
    cin>>num;
    if(num==1){
        cout<<"Jan"<<endl;
    }
    else if(num==2){
        cout<<"feb"<<endl;
    }
    else if(num==3){
        cout<<"mar"<<endl;
    }
    else if(num==4){
        cout<<"april"<<endl;
    }
    else if(num==5){
        cout<<"may"<<endl;
    }
    else if(num==6){
        cout<<"jun"<<endl;
    }
    else if(num==7){
        cout<<"july"<<endl;
    }
    else if(num==8){
        cout<<"aug"<<endl;
    }
    else if(num==9){
        cout<<"sep"<<endl;
    }
    else if(num==10){
        cout<<"oct"<<endl;
    }
    else if(num==11){
        cout<<"nov"<<endl;
    }
    else if(num==12){
        cout<<"dec"<<endl;
    }
    else{
        cout<<"Enter valid number for valid month"<<endl;
    }

}
