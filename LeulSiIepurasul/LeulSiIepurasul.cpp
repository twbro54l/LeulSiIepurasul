#include <iostream>

using namespace std;

int calculeaza(double vIepure, double vLeu, double tAparitie) {
	int rezultat = (vLeu > vIepure ? vIepure * tAparitie / (vLeu - vIepure) : -1);
	return rezultat;
}

int main()
{
	double v1, v2, t;
	cout << "Viteza iepurelui = ";
	cin >> v1;
	cout << "Viteza leului = ";
	cin >> v2;
	cout << "Timpul dupa care apare leul = ";
	cin >> t;
	int rezolvare = calculeaza(v1, v2, t);
	if (rezolvare == -1) {
		cout << "Nu il prinde";
		return  -1;
	}
	else
		cout << "Leul prinde iepruele in t=" << rezolvare << " secunde." << endl;
	return 0;
}

/*Un iepuras zglobiu iesi din padure si incepu sa alerge ep campie cu o viteza constanta de
v1 m/s. Dupa un timp t0, apare la marginea padurii un leu. Leul zari iepurasul si incepu
sa alerge dupa el cu o viteza constanta de v2 m/s. Scrieti un program care sa afiseze dupa
cate secunde prinde leul iepurele sau valoarea -1 daca leul nu prinde iepurele.
~~~~~~~~~~SOLUTIE~~~~~~~~~~
Evident, daca viteza leului este mai mica sau egala cu viteza iepurasului, leul nu va prinde
iepurele. In caz contrar, sa notam cu x distanta de la marginea padurii pana in punctul in
care leul prinde iepurele si cu t timpul dupa care prinde leul iepurele. Leul strabate
distanta x in t secunde (fiindca viteza leului este v2 m/s, deducem ca x=v2*t). Iepurele
strabate distanta x in t+t0 secunde (fiindca viteza iepurelui este v1 m/s, deducem ca
x=v1*(t+t0)). Din aceste doua ecuatii cu doua necunoscute putem afla t.
*/