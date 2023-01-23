#include <iostream>
#include <time.h>

void getRandom(int* mass, int size){
    srand(time(nullptr));
    for(int i = 0; i < size; i++){
        mass[i] = rand() % 100;
   }
}


void show(int* ar, int size){
    for(int i = 0; i < size; i++){
        std::cout << ar[i] << " ";

    }
    std::cout << std::endl;
}

int findNum(int* mass, unsigned int size, int A){
    unsigned int count = 0;
    for(int i = 0; i < size; i++){
        if(mass[i] == A){
            count++;
        }
        // if(*(mass+i) == A){}
    }
    return count;
}

void fillzero(int* mass, int size, int magicNum){
	for(int i = 0; i < size; i++){
		mass[i] = magicNum;
	}
	
}

void getStats(int* mass, int size, int* statAr, int sizeStat){
	for (int i = 0; i < size; i++){
		if(sizeStat < mass[i]){
			continue;
		}
		// если нет {} то выполняется тольько одна строчка после ифа
		statAr[mass[i]]++;
	
}

void printNumber(int* ar, int size){
	for(int i = 0; i < size; i++){
		std::cout << i << " - " << ar[i] << std::endl;
	}
	
}
 
void outputMax(int* ar, int ar){
	for(int j = 0; j < size; j++){
		int indmax = ar[0];
		for(int i = 0; i < size; i++){
			if(ar[i] > ar[indmax]){
				indmax = i;
			}
		}
		ar[indMax] = -1;
	std::cout << indmax << " - " << ar[indMax} << std::endl;
	}
} 
int main(){
    int mass[1000];
    getRandom(mass, 1000);
	
	int countNumber[100];
	fillzero(&countNumber[0], 100, 0);
	getStats(&mass[0], 1000, &countNumber[0], 100);
	printNumber(&countNumber[0], 100);
    
	}
    return 0;
}
