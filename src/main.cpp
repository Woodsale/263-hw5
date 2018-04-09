#include "cel.h"
#include "sorts.h"
#include <iostream>
#include <vector>
#include <string>

int main(int argc, char** argv){
	int i,r;
	if(argv == NULL){
		std::cout << "\nEnter Something next time!\n"<< std::endl;
		return 0;
	}
	std::vector <Cel> aList(std::stoi(argv[1]));
	for(i = 0;i<argc;i++){
		r = rand() % (argc + 1);
		Cel a(r,0);
		aList[i] = a;
	}//assign numbers to cle, cel to vector

	int c = std::stoi(argv[2]);
	switch(c){
		case 1:
			mergeSort(aList);
			break;
		case 2:
			quicksort(aList);
			break;
		case 3:
			bubble_sort(aList);
			break;
		case 4:
			insertion_sort(aList);
			break;
		case 5:
			selection_sort(aList);
			break;
		case 6:
			shell_sort(aList);
			break;
		default:
			return 0;
	}
	
	return 0;
}
