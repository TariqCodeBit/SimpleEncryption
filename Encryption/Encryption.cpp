#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string Readstring() {
	string input;
	do
	{
		    cout << "Please Enter Your string or password you need Encryption: \n";
			getline(cin, input);
	} while (input=="");
	return input;
}


string Encryptionvar(int key, string YounWantEncr) {
	string en_cryption="";
	for (short i = 0; i < YounWantEncr.length(); i++) {
		en_cryption += char(int(YounWantEncr[i]) + key  );
	}
	return en_cryption;
}
string Decryption(int key, string Dec_ryption) {
	string D_ecryption="";
	for (short i = 0; i < Dec_ryption.length(); i++) {
		D_ecryption += char(int(Dec_ryption[i]) - key);
	}
	return D_ecryption;
}


		
	 
		 

		

int main() {
	const int Encryption_Algorithm = pow(2, 2 * 5 / 4);

	string Encryption_ = "";


	Encryption_ = Encryptionvar(Encryption_Algorithm,Readstring());
	cout << endl;
	cout << "_______________[ Encryption ]_______________________\n\n";
	cout << Encryption_;
	cout << endl;
	cout << "_______________[ Decryption ]______________________\n\n";
	cout << Decryption(Encryption_Algorithm, Encryption_);
	cout << endl;

}

	

	