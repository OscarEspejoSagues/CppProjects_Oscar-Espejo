#include <vector>
#include <iostream>
#include <string>




std::vector<int> v1(5);
std::vector<int> v2(10, 0);
std::vector<int> v3({ 10,9,8,7,6,5,4,3,2,1 });
std::vector<std::string> v4({ "Gertrudiz", "Pancracia", "Anacleto", "Hipolito", "Eustaquio", "Fulgencia" });
std::vector<int> v5(v3);


std::vector<int> AddVector(std::vector<int> v1, std::vector<int> v2) {
	std::vector<int> vresult(v1);
	for (int i = 0; i != v1.size(); ++i) {
		vresult[i] += v2[i];
	}
	return vresult;
}

std::vector<int> ConcatVector(std::vector<int> v1, std::vector<int> v2) {
	std::vector<int> vresult(4);
	for (int i = 0; i != v1.size(); i++) {
		vresult[i] = v1[i];
		std::cout << vresult[i] << std::endl;
	}
	return v2;
}

std::vector<int> ShiftRight(std::vector<int> v1) {
	int aux;
	v1.insert(v1.begin(), 2);
	for (int i = 0; i != v1.size(); i++){
		aux = v1[i];
		std::cout << v1[i] << std::endl;
	}
	return v1;
}
/*std::vector<int>Rotateleft(std::vector<int> v1) {
	for (int i = 0; i != v1.size(); i++){
		std::cout << v1.rend[i] << std::endl;
	}
	return v1;
}*/

std::vector<int>SearchAdjacent(std::vector<int> v1) {
	int aux;
	for (int i = 0; i != v1.size(); i++){
		if (v1[i] == v1[i+1] && v1[i+1] == v1[i+2]){
			v1[i] = 3;
			v1[i + 1] = 4;
			v1[i + 2] = 5;
		}
		std::cout << v1[i] << std::endl;
	}
	return v1;
}

void main() {
	std::vector<int> v1({5, 10, 20, 40});
	SearchAdjacent(v1);
}