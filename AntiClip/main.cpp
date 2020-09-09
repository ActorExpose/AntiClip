#include "anticlip.h"

#define delay 5 
#define hidden false

int main() {

	if (hidden == true) {
		ShowWindow(GetConsoleWindow(), SW_HIDE);
	}

	std::string oldWallet = clippedText();
	while (true) {
		Sleep(delay);
		std::string currentText = clippedText();
		if (btcAddy(currentText) == true) {
			if (oldWallet != currentText) {
				std::string alert = "Your bitcoin address has changed from " + oldWallet + " to " + currentText;
				oldWallet = currentText;
				MessageBoxA(NULL, (LPCSTR)alert.c_str(), "Wallet Changed", MB_OK | MB_ICONSTOP | MB_SYSTEMMODAL);
			}

		}
	}
}
