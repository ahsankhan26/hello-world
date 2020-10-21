#include<iostream>

int main() {
	
	char str[12];
	int strIndex = 0, index;
	
	index = 32;
	while(true){
		if(index == 72) {
			str[strIndex] = index;
			strIndex++;
			break;
		}
		index++;
	}
	
	index = 32;
	while(true){
		if(index == 101) {
			str[strIndex] = index;
			strIndex++;
			break;
		}
		index++;
	}
	
	index = 32;
	while(true){
		if(index == 108) {
			str[strIndex] = index;
			strIndex++;
			break;
		}
		index++;
	}
	
	index = 32;
	while(true){
		if(index == 108) {
			str[strIndex] = index;
			strIndex++;
			break;
		}
		index++;
	}
	
	index = 32;
	while(true){
		if(index == 111) {
			str[strIndex] = index;
			strIndex++;
			break;
		}
		index++;
	}
	
	index = 32;
	while(true){
		if(index == 32) {
			str[strIndex] = index;
			strIndex++;
			break;
		}
		index++;
	}
	
	index = 32;
	while(true){
		if(index == 87) {
			str[strIndex] = index;
			strIndex++;
			break;
		}
		index++;
	}
	
	index = 32;
	while(true){
		if(index == 111) {
			str[strIndex] = index;
			strIndex++;
			break;
		}
		index++;
	}
	
	index = 32;
	while(true){
		if(index == 114) {
			str[strIndex] = index;
			strIndex++;
			break;
		}
		index++;
	}
	
	index = 32;
	while(true){
		if(index == 108) {
			str[strIndex] = index;
			strIndex++;
			break;
		}
		index++;
	}
	
	index = 32;
	while(true){
		if(index == 100) {
			str[strIndex] = index;
			strIndex++;
			break;
		}
		index++;
	}
	
	index = 32;
	while(true){
		if(index == 33) {
			str[strIndex] = index;
			strIndex++;
			break;
		}
		index++;
	}
	
	for(int i=0; i<12; i++){
		std::cout << str[i];
	}
	
	return 0;
}
