#include <iostream>
using namespace std;

struct node {
    int data; //ini utk nyimpan nilai
    node* next; //sdgkn ini utk pointer ke node berikutnya
};

node* head = NULL;

//fungsi untuk masukin angka ke stack dari atas
void push(int value) {
    node* newnode = new node; //alokasi memori untuk node baru
    newnode->data = value;    //masukin nilai ke node baru
    newnode->next = head;     //sambungin node baru ke node paling atas (head)
    head = newnode;           //update head ke node baru
    cout << value << " dimasukkan ke stack.\n";
}

//fungsi untuk ngeluarin angka stxak dari paling atas
void pop() {
    if (head == NULL) { //cek apakah stack kosong atau tidak
        cout << "Stack kosong! Tidak bisa pop.\n";
        return;
    }

    cout << head->data << " dikeluarkan dari stack.\n";
    node* temp = head; //simpan node paling atas di temp
    head = head->next; //geser head ke node berikutnya
    delete temp;       //hapus node yang lama
}

void display() {
    if (head == NULL) { //menampilkan stack yang kosong
        cout << "Stack kosong!\n";
        return;
    }

    node* current = head; //mulai dari head
    cout << "Stack saat ini: ";
    while (current != NULL) {
        cout << current->data << " -> "; //cetak nilai node biar rapi
        current = current->next;         //move ke node berikutnya
    }
    cout << "NULL\n";
}

int main() {
    system("cls");
    push(5);
    push(15);
    push(25);

    display();

    pop(); //menghapus elemen paling atas (25)

    display();

    return 0;
}
