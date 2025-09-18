#include <iostream>
using namespace std;

#define MAX 5
int stack[MAX]; 
int top = -1;

//push
void push(int value){
    if (top == MAX - 1){
        cout << "stack penuh!\n";
    } else {
        top++;
        stack[top] = value;
        cout << value << " ditambahkan dalam stack\n";
    }
}

//pop
void pop(){
    if (top == -1){
        cout << "stack kosong!\n";
    } else {
        cout << "\n" << stack[top] << " dihapus dari stack\n";
        top--;
    }
}

//menampilkan stack
void display(){
    if (top == -1){
        cout << "stack kosong!\n";
    } else {
        cout << "\n isi stack: ";
        for (int i = top; i >= 0; i--){
            cout << stack[i] << " ";
        }
    }
}

int main(){
    push(10);
    push(20); 
    push(30);   
    push(40); 
    push(50); 

    for (int i = 0; i < 5; i++) {
        display();
        pop();
    }
    display();
    return 0;
}