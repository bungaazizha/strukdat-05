/*
Author		: Bunga Azizha N
NPM			: 140810180016
Deskripsi	: Program Pembalap menggunakan Double Lnked List
Tahun		: 2019
*/
//exercise-01

#include<iostream>
using namespace std;

struct Pembalap{
	int nomor;
	char nama;
	int waktu;
	Pembalap* next;
	Pembalap* prev;
};

void createNode(Pembalap* &p, int nomor, char nama);
void insertFirst(Pembalap* &head, Pembalap* node);
void insertBefore(Pembalap* &head, int nomorKey, Pembalap* node);
void deleteByKey(Pembalap* &head, int nomorKey, Pembalap* &deleteNode);
void search(Pembalap* &firstNode, int nomorKey, Pembalap* &pToUpdate);
void traversal(Pembalap* head);
void sortingByNomor(Pembalap* &head);
void update(Pembalap* firstNode, int nomorKey);

int main()
{
    Pembalap *head = NULL;
    Pembalap *pBaru = NULL;
    Pembalap *pToUpdate = NULL;
    char nama = 'a';

    for (int i = 0; i < 4; i++)
    {
        createNode(pBaru, i + 1, nama++);
        insertFirst(head, pBaru);
    }

    cout << "\n>>> List" << endl;
    traversal(head);

    int keyNomor = 2;

    cout << "\n>>> Insert Before nomor " << keyNomor << endl;
    createNode(pBaru, 99, 'z');
    insertBefore(head, keyNomor, pBaru);
    traversal(head);

    cout << "\n>>> SortingByNomor" << endl;
    sortingByNomor(head);
    traversal(head);

    keyNomor = 3;
    cout << "\n>>> Delete nomor " << keyNomor << endl;
    Pembalap *pHapus = NULL;
    deleteByKey(head, keyNomor, pHapus);
    traversal(head);

    keyNomor = 4;
    cout << "\n>>> Update nomor " << keyNomor << endl;
    update(head, keyNomor);

    cout << "\n>>> Updated list\n";
    traversal(head);

}


void createNode(Pembalap* &p, int nomor, char nama){
    p = new Pembalap;
    cout << "No  : "; cin>> p->nomor ;
    cout << "Nama  : "; cin>> p->nama ; cin.ignore();
    cout << "Waktu  : "; cin >> p->waktu;
    p->next = NULL;
    p->prev = NULL;
    cout<<endl;
}

void insertFirst(Pembalap* &head, Pembalap* node){
    if (head == NULL) {
        head = node;
    } else {
        node->next = head;
        head->prev = node;
        head = node;
    }
}

void insertBefore(Pembalap* &head, int nomorKey, Pembalap* node){
    Pembalap* pCari;
    if(pCari->prev == NULL){
        pCari->prev = node;
        node->next = pCari;
        head = node;
    }
    else{
        node->next = pCari;
        node->prev = pCari->prev;
        pCari->prev->next = node;
        pCari->prev = node;
    }
}

void deleteByKey(Pembalap* &head, int nomorKey, Pembalap* &deletedNode){
 Pembalap* pCari;
 Pembalap* pHapus;
      pCari = head;
      while(pCari != NULL){
        if(pCari->nomor == nomorKey){
          /*if(pCari->next == NULL){
            Pembalap last;
            last = head;
        while(last->next)
       }
      }*/ pHapus = pCari;     
  pCari->prev->next = pCari->next;
  pCari->next->prev = pCari->prev;
  pCari->next = NULL;
  pCari->prev = NULL;
     }
}
}

void Search(Pembalap* &firstNode, int nomorKey, Pembalap* &pToUpdate){
    pToUpdate=firstNode;
 while(pToUpdate->nomor!=nomorKey){
  pToUpdate=pToUpdate->next;
  }
}

void traversal(Pembalap* head){
    Pembalap* help;
 if (head==NULL){
  cout<<"LIST KOSONG"<<endl;
 }
 else {
  help=head;
  while(help!=NULL){
   cout<<"Nomor: "<<help->nomor<<endl;
   cout<<"Nama: "<<help->nama<<endl;
   cout<<"Waktu: "<<help->waktu<<endl;
   cout<<endl;
   help=help->next;
  }
 }
}

 void sortingByNomor(Pembalap* &head){
/*	    Pembalap pBantu;
    pBantu = head;
    while(pBantu!=NULL){
        if(pBantu->nomor > pBantu->next->nomor){

        }
      }
*/
}

 void update(Pembalap* firstNode, int nomorKey){
	/*
	int i=0;
	if(head == NULL){
		cout<<"List Tidak Dapat Di Update"<<endl;
	}
	
	current = head;
	while(current != NULL){
	i++;
	
	if(current->data == firstNode) {
	current->data = new;
	cout<<"Ditemukan posisi, digantikan oleh"<< firstNode <<nomorKey <<new;
	}
	
	if(current->next != NULL)
		current = current = next;
	else
		break;
	}
	cout<<"List tidak dapat di gantikan" <<firstNode;
	*/
}

