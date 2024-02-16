//TEMA = AKEDEMIK MAHASISWA
//PROGRAM PENGHITUNGAN IPK DAN SKS
#include <iostream>
#include <conio.h>
using namespace std;

void login() //membuat fungsi void login
{                    
  string nama;	//membuat 2 variabel string berupa nama dan nim
  string nim;
  cout <<"Masukkan Nama Mahasiswa\t: ";	//input output nama dengan menggunakan getline agar dapat menambahkan simbol berupa titik dan spasi
  getline(cin,nama);
  cout <<"Masukkan NIM Mahasiswa\t: ";	////input output nim dengan menggunakan getline agar dapat menambahkan simbol berupa titik dan spasi
  getline(cin,nim);
  cout<<"+==============================+\n";
}
void IPK()	//membuat fungsi void IPK
{
    string semester[8]={"Semester[1]","Semester[2]","Semester[3]","Semester[4]","Semester[5]","Semester[6]","Semester[7]","Semester[8]"};	
							//membuat variabel string berarraykan 8 dengan isian Semester[1],Semester[2],Semester[3],Semester[4],Semester[5],Semester[6],Semester[7],"Semester[8]
	float IPK=0,hasil,nilai;	//membuat variabel float berupa IPK=0,hasil dan nilai
    cout <<"+=============================+\n";
    cout<<"Penghitungan IPK mahasiswa\n";
    cout <<"Isikan data nilai Semester";
    cout <<"\nKeterangan Max 8 Semester";
   	cout <<"\n+==============================+\n";
  for(int i=0;i<8;i++){							//perulangan berupa for untuk integer i=0, i kurang dari 8, i akan terus bertambah
      cout<<i+1<<". "<<semester[i]<<"\t: ";		//input output nilai dengan output disertai array semester[8]
       cin>>nilai;
     IPK=IPK+nilai;								//rumus IPK = IPK akan terus ditambah dengan nilai
 }
     hasil=(IPK)/8;								//output hasil dengan rumus hasil= nilai total IPK dibagi 8
    cout <<"\nNilai Indeks Prestasi(IPK) = "<<hasil;
    cout <<"\n+==============================+\n";
}
void SKS()	//membuat fungsi void SKS
{
  int jumlah,bayar,a;		//membuat variabel integer jumlah, bayar, a
  string matkul [6]={"Matematika","Akutansi","Fotografi","Sejarah","Pemograman","Agama"};	//membuat variabel string matkul berarraykan 6["Matematika","Akutansi","Fotografi","Sejarah","Pemograman","Agama"]
  cout<<"+==============================+\n";
  cout<<"\nPenghitungan pembayaran SKS\n";
  cout<<"\nKeterangan Daftar Matakuliah : ";
  cout <<"\n\t[1].Matematika(2 SKS)";
  cout <<"\n\t[2].Akuntansi(2 SKS)";
  cout <<"\n\t[3].Fotografi(2 SKS)";
  cout <<"\n\t[4].Sejarah(2 SKS)";
  cout <<"\n\t[5].Pemograman(2 SKS)";
  cout <<"\n\t[6].Agama(2 SKS)";
  cout <<"\n+==============================+\n";
  cout<<"Jumlah Matakuliah yang dibayar : ";
  cin>>jumlah;										//input jumlah dan masuk ke percabangan if dengan pilihan jumlah=6, jumlah<6 dan else
  if(jumlah == 6){									//jika jumlah = 6 maka akan muncul output jumlah yang harus dibayarkan : 1200000
    cout<<"+==============================+\n";
    cout<<"jumlah yang harus dibayarkan : 1200000";
    cout <<"\n+==============================+\n";
  }
  else if(jumlah<6){								//jika jumlah kurang dari 6 maka akan masuk perulangan integer i =0, i kurang dari jumlah dan i akan terus bertambah
    cout<<"\n+==============================+\n";
    cout<<"Masukkan Matakuliah yang dipilih\n";    
    for(int i=0;i<jumlah;i++){
cout<<"Kode matkul ";					//input output variabel a dengan output array matkul
      cin>>a;
      cout<<matkul[a-1]<<endl;
  }
   bayar = 200000*jumlah;						//output bayar dengan rumus bayar = 200000 dikali dengan jumlah
    cout<<"\nJumlah yang harus dibayarkan : "<<bayar<<endl;
    cout <<"\n+==============================+\n";
  }else{										//jika input jumlah tidak kurang dari atau sama dengan 6 maka akan muncul output jumlah Matakuliah maksimal 6
    cout<<"jumlah Matakuliah maksimal 6";
    cout <<"\n+==============================+\n";
  }
}
int main()		//membuat fungsi main
{
  
    char pilih; 	//membuat variabel char pilih
    login();		//memanggil fungsi void login
  do{				//membuat perulangan do while dengan kondisi pilih=A,a,B,b
  	cout <<"\n+===========MENU===============+\n";
    cout<<"\nPilihan :\n";
    cout<<"\tA. Penghitungan IPK mahasiswa\n";
    cout<<"\tB. Penghitungan pembayaran SKS\n";
    cout<<"\tC. keluar program\n";
    cout<<"+==============================+\n";
    cout<<"Masukkan Pilihan\t: ";
    cin>>pilih;			//input varibel pilih
    switch(pilih){		//percabangan switch pilih dengan case A dan a akan memanggil fungsi void IPK, case B dan b akan memanggil void SKS
      case 'A':
        IPK();
        break;
    	case 'a':
        IPK();
        break;
      case 'B':
        SKS();
        break;
        case 'b':
        IPK();
        break;
    }
} while(pilih=='A'||'a' || pilih=='B'||'b');		//jika input pilih tidak sama dengan A,a,B,b maka akan mengakhiri program
  getch();
}
