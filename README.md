# AntiClip
Bitcoin clippers are designed to be stealithy and not alert the user when the clipboard address changes, AntiClip attempts to solve this issue by alerting the issue when and if there clipped bitcoin address changes.
<p align="center">
![AntiClip In Action](https://i.imgur.com/PtXVPZt.png)
  </p>

## Setup
If you wish the build the binaries instead of using the precomipiled version listed in the release section: [here](https://github.com/backslash/AntiClip/releases/tag/1.0)
Make sure you have visual studio installed this can be found [here](https://visualstudio.microsoft.com/downloads/) after you have installed.
Open up Anticlip.sln and navigate to the main.cpp file.
<p align="center">
![](https://i.imgur.com/AB52Kml.png)
  </p>
the main settings are:
- Delay: How quickly it should check the clipboard text in miliseconds.
- Hidden: Do you want to hide the main window.
Once finished make sure to compile it in release mode:
<p align="center">
![](https://i.imgur.com/iAxzEYM.png)
  </p>
Thats about it in setup, once the program detects a change in the bitcoin address it will create a popup:
<p align="center">
![](https://i.imgur.com/SEqeTd3.png)
</p>

## Usage
Leave it running in the background, or add it to startup since depending on your antivirus there is a chance they aren't doing there job of protecting you from malware.

## Other
I am providing this software for free, do not attempt to resell this seeing as it's not A not the best code and B it's free stuff that you didn't write. This software is intended to help counter malware.
