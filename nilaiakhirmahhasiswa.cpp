#include <iostream>
using namespace std;


int main()
{
	char nama [20];
	string grade,pil;
	float absensi,tugas,uts,uas, nabsen,ntugas,nuts,nuas,na;
	do {
		cout<<"***** Program Mengitung Nilai Akhir Mahasiswa ***** \n";
		cout<<"Masukkan Nama Mahasiswa : ";cin>>nama;
		cout<<"Nilai Absensi : ";cin>>absensi;
		cout<<"Nilai Tugas : ";cin>>tugas;
		cout<<"Nilai UTS : ";cin>>uts;
		cout<<"Nilai UAS : ";cin>>uas;
		
		nabsen=absensi*0.2;
		ntugas=tugas*0.3;
		nuts=uts*0.2;
		nuas=uas*0.3;
		
		na=nabsen+ntugas+nuts+nuas;
		
		if(na>=80)
		{
			grade= "A";
		}
		else if (na>=70)
		{
			grade= "B";
		}
		else if (na>=59)
		{
			grade= "C";
		}
		else if (na>=50)
		{
			grade= "D";
		}
		else
		{
			grade= "E";
		}
		
		cout <<endl;
		cout<<"####################################\n";
		cout<<"Mahasiswa Yang Bernama "<<nama<<endl;
		cout<<"Dengan nilai presentase yang dihasilkan\n";
		cout<<"Nilai Murni Absensi x 20% : "<<nabsen<<endl;
		cout<<"Nilai Murni Tugas x 30% : "<<ntugas<<endl;
		cout<<"Nilai Murni UTS x 20% : "<<nuts<<endl;
		cout<<"Nilai Murni UAS x 30% : "<<nuas<<endl;
		cout<<"Memperoleh nilai akhir sebesar : "<<na<<endl;
		cout<<"Grade yang didapat : "<<grade<<endl;
		cout<<"####################################\n";
		cout<<"Apakah anda ingin memproses lagi ? [y/n] : ";cin>>pil;
	}while(pil=="y" || pil=="Y");
	cout<<"Terima kasih\n";
	return 0;
}
