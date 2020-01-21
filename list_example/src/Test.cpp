#include "BST.hpp"


using namespace std;

void EkraniTemizle() {
    system("CLS");
}


int main() {

	BST *tree = new BST();

	string x; string m = "";
	cout << "Lutfen bir sayi giriniz: ";
	int select = 0;
	cin >> x;
	int length = x.length();
	srand(time(0));

	

	for (int i = 0; i < length; ++i) {
		m = x[i];

		for (int i = 0; i < atoi(m.c_str()); ++i)
		{
			int k = rand() % 100 + 1;
			tree->Add(k);
		}

		// tree->listLength = 0;
		
		// cout<< i << " .inci agac : ";
		// tree->PrintEveryTree(); 
		// cout<<'\n';

		cout<<"Yukseklik:"<<tree->Height()<<endl;
	}

	cout<<"Inorder :";
	tree->Inorder();
	cout<<endl<<"Preorder :";
	tree->Preorder();
	cout<<endl<<"Postorder :";
	tree->Postorder();
	cout<<endl<<"Level Order :";
	tree->Levelorder();
	cout<<endl<<endl;
	
	while(select!=5)
    {
       	cout<<"1 - Agaclardan Maksimum Degeri Cikar: "<<endl;
        cout<<"2 - Agaclardan Minimum Degeri Cikar: "<<endl;
        cout<<"3 - Tum Agaclari Level Order Yaz"<<endl;
        cout<<"4 - Cikis "<<endl;
        cout << "Lutfen seciminizi yapiniz:\n";
        cin >> select;

            switch(select)
            {
                case 1:
                    EkraniTemizle();
                    
                    break;
                case 2:
                    EkraniTemizle();
					
                    break;
                case 3:
                    EkraniTemizle();
					cout<<endl<<"Level Order :";
                    tree->Levelorder();
					cout<<'\n'; cout<<'\n';
                    break;
                case 4:
				    
                    EkraniTemizle();
					delete tree;
                    exit(0);
                    break;
                default:
                    EkraniTemizle();
                    cout << "Yanlis bir secim yaptiniz!";
                    break;
            }
        }


	system("PAUSE");
	return 0;

}

