#include <iostream>
#include <string>

using namespace std;

string caesarCipher(int factor, string message) {
	// Initially, I'm gonna suppose that every word is in english.
	
	string cipheredMessage = message;
	
	for (int i = 0; i<message.size();i++) {
		cipheredMessage[i] += factor%26;
	}
	
	return cipheredMessage;
}

string caesarDecipher(int factor, string cipheredMessage) {
	// Initially, I'm gonna suppose that every word is in english.
	
	string message = cipheredMessage;
	
	for (int i = 0; i<message.size();i++) {
		message[i] -= factor%26;
	}
	
	return message;
}

string vigenereCipher(string key,string message) {
	
	
	
}

string vigenereDecipher(string key, string cipheredMessage) {
	
	
	
}