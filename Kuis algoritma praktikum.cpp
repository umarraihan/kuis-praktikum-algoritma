#include <iostream>
using namespace std ;
int main()
{

	int pilih, i, x, y, kuis, res, tug, pro, rata2, point1=0, point2=0, round, loop ;
	char na[15], nmx[15], nmy[15] ;
	string nim, jurusan, p1, p2 ;
	

	cout<<"Kuis Praktikum Algoritma dan Pemrograman"<<endl;
	
	cout<<" 1.Deret Unik"<<endl ;
	cout<<" 2.Nilai Akhir"<<endl ; 
	cout<<" 3.Gunting Batu Kertas (Bonus)" <<endl ;
	cout<<" 4.Keluar " <<endl ;
	cout<<"Pilih : " ; 
	cin>>pilih ;
	
	switch (pilih)
	{
		case 1 : 
		{
			cout <<"x = "; 
			cin>>x ;
			cout <<"y = "; 
			cin>>y ; 
			
			for (i=1 ; i <= y ; i ++)
			{
				if (i%x == 0)
				cout<<"|" ;
				else
				cout<<"-" ;
			}
		break;		
		}		
	}
		
	switch (pilih)	
		
		case 2: 
		{
			cout <<"Input Nilai Praktikum =========" <<endl ;
			cout <<"Nama	:  " ;
			cin.ignore () ;
			cin.getline(na, sizeof(na)) ; 
			cout <<"NIM	    :  " ;
			cin>>nim ;
			
			if (nim>="121000000" && nim<="121999999"){
				jurusan ="Teknik Kimia" ;
			}
			else if (nim>="12200000" && nim<="122999999"){
				 jurusan ="Teknik Industri";
			}
			else if (nim>="123000000" && nim<="123999999"){
				jurusan ="Informatika";
			}
			else if (nim>="123000000" && nim<="124999999"){
				jurusan ="Sistem Informasi";
			}
					
			cout<<"Kuis	     : " ;
			cin>>kuis ;
			cout<<"Responsi  : " ;
			cin>>res ;
			cout<<"Tugas 	 : " ; 
			cin>>tug ;
			cout<<"Project   : " ; 
			cin>>pro ;
			
			rata2 = (0.2*kuis)+(0.35*res)+(0.15*tug)+(0.3*pro) ;
		
			cout <<"Hasil Akhir ========="<<endl ;
			 
			cout<<"Nama		      : "<<na<<endl ;
			cout<<"NIM		      : "<<nim<<endl ;
			cout<<"Jurusan 	      : "<<jurusan<<endl ;
			cout<<"Rata-Rata 	  : "<<rata2<<endl ;
			cout<<"Nilai Huruf	  : " ;
		
			if (rata2>=80 && rata2<=100){
				cout<<"A"<<endl;
			}
			else if(rata2>=60){
				cout <<"B"<<endl;
			}
			else if (rata2>=40){
				cout <<"C"<<endl;
			}
			else if(rata2>=20){
				cout <<"D"<<endl;
			}
			else {
			cout <<"E"<<endl;
			}
			
			if (rata2>=60){
				cout <<"Selamat anda lulus praktikum" <<endl ;
			}
			else cout <<"Mohon maaf anda belum lulus praktikum" <<endl ;
		break;
		
		}
	switch (pilih)
		case 3 :
		{	
			cout<<"Masukan nama player 1 : " ;cin.ignore();
			cin.getline (nmx,sizeof(nmx));
			cout<<"Masukan nama player 2 : " ;cin.ignore();
			cin.getline (nmy,sizeof(nmy)) ;
			cout<<"Masukan jumlah ronde : ";
			cin>>round ;
			cout<<" "<<endl ;
	
			for (loop=1 ; loop<=round ; loop++)	{
	
				cout<<"ronde ke "<<loop<<endl ;
				cout<<"Masukan gunting/batu/kertas : "<<nmx ;
				cin>>p1 ;
				cout<<"Masukan gunting/batu/kertas : "<<nmy ;
				cin>>p2 ;
				cout<<" "<<endl ;
			
				if (p1 =="gunting" && p2=="gunting"){
				}
				else if(p1=="gunting"&&p2=="batu"){
					point1++ ;
				}
				else if (p1=="gunting"&&p2=="kertas"){
					point2++ ;
				}
				else if (p1=="batu"&&p2=="gunting"){
					point1++ ;
				}
				else if (p1=="batu"&&p2=="batu"){
				}
				else if (p1=="batu"&&p2=="kertas"){
					point2++ ;
				}
				else if(p1=="kertas"&&p2=="gunting"){
					point2++ ;
				}
				else if(p1=="kertas"&&p2=="batu"){
					point1++ ;
				}
				else if(p1=="kertas"&&p2=="kertas"){
				}
			
			}
				cout<<"_______Hasil Akhir______"<<endl ;
                cout<<nmx<<" menang "<<point1<<" kali "<<endl ;
                cout<<nmy<<" menang "<<point2<<" kali "<<endl ;
                
                if(point1 >= point2){ 
                	cout << "Jadi pemenangnya adalah " <<nmx<<endl ;
             	}
            	else if (point1 <= point2){
             		cout<<"pemenangnya adalah"<<nmy<<endl ;
			 	}
                else{
                	cout << "Jadi hasil akhirnya adalah seri." << endl;
				}
			break;
			
		}
	switch (pilih)
		case 4 :
		{	
		exit (0) ;	
		}
		
}
