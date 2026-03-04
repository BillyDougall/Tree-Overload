#include <iostream>
#include <string>
using namespace std;


struct Fire {
	enum Burn {
		
	};

	Fire() {

	}

	Fire(int Damage) {
		FireDamage = Damage;
	}

	int FireDamage = 0;
};

/*struct Water {
	enum Splash {
		
	};

	int WaterFill() {
		int BucketQuantity = 0;

		BucketQuantity = BucketQuantity + 20;

		return BucketQuantity;
	}
	
};	*/		

//struct Magic {
//	enum Cast {
//	
//	};
//
//	int Mana;
//	int Strength;
//	string Spell;
//
//};

struct Tree {
	enum TreeStats { // hello
	
	};

	Tree() {
		TreeName = "The Tree";
		TreeHealth = 1000;
	}
	string TreeName = "";
	int TreeHealth;
	int TreeDamage;

	void dbug() {
		cout << "Tree Health is " << TreeHealth << endl;
	}
};

Tree operator + (const Tree& leftVar, const Fire& rightVar) {
	Tree* T = new Tree();
	T->TreeHealth = leftVar.TreeHealth;
	T->TreeHealth -= rightVar.FireDamage;
	return *T;
}

int main() {

	Tree* ATree = new Tree();
	Fire* AFire = new Fire(250);

	*ATree = *ATree + *AFire;
	ATree->dbug();
}