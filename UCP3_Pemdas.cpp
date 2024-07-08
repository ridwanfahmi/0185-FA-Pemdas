#include <iostream>
using namespace std;

class MasukUniversitas {
private:
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;
	// isi daftar variable yang dibutuhkan di bawah ini
public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;
		// isi nilai default variable yang dibutuhkan di bawah ini
	}
	virtual void namaJalurMasuk() { 
		
		return; 
	}
	// isi disini dengan fungsi virtual yang dibutuhkan

	virtual void hitungTotalBiaya() {
		
		return;
	}

	virtual void tampilkanTotalBiaya() {

		return;
	}

	virtual void input() {

		return;
	}
	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}

	void setUangSemesterPertama(int nilai) {
		this->uangSemesterPertama = nilai;
	}
	float getUangSemesterPertama() {
		return uangSemesterPertama;
	}

	void setUangBangunan(int nilai) {
		this->uangBangunan = nilai;
	}
	float getUangBangunan() {
		return uangBangunan;
	}

	void setTotalBiaya(int nilai) {
		this->totalBiaya = nilai;
	}
	float getTotalBiaya() {
		return totalBiaya;
	}
	// isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas {
	void input() {
		//cout << "Masukkan uang pendaftaran: " << endl;
		//cin >> uangPendaftaran;
		//cout << "Masukkan uang semester pertama: " << endl;
		//cin >> uangSemesterPertama;
		//cout << "Masukkan uang bangunan: " << endl;
		//cin >> uangBangunan;
		
		
	}


	


		
	
};
class SNBP : public MasukUniversitas {
	void input() {
		cout << "Masukkan uang pendaftaran: " << endl;
		int uangP;
		cin >> uangP;
		setUangPendaftaran(uangP);
	}
};
int main() {
	int Choice;
	MasukUniversitas* mu;
	
	while(true)
	{
		cout << "\nPilih Jalur Masuk: " << endl;
		cout << "1. SNBT" << endl;
		cout << "2. SNBP" << endl;
		cout << "3. Keluar" << endl;
		cout << "Pilih: " << endl;
		cin >> Choice;

		



	}

	// isi disini untuk fungsi main
}