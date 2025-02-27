# Arduino Digispark ATTiny85 Scripts

This repository contains various scripts for the **Digispark ATTiny85 USB Development Board**. These scripts allow you to perform fun and useful automations using the **DigiKeyboard library**.

## 🛠 Installation Steps

1. **Download & Install Arduino IDE**  
   - Get the latest version from [this link](https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE).

2. **Add Digispark Board Support**
   - Open Arduino IDE
   - Navigate to **File > Preferences**
   - In the **Additional Board Manager URLs**, paste the following:
     ```
     https://raw.githubusercontent.com/digistump/arduino-boards-index/master/package_digistump_index.json
     ```
   - Click **OK**

3. **Install Digispark Drivers**
   - Go to **Tools > Board > Boards Manager**
   - Search for **Digistump AVR Boards**
   - Install the package

4. **Select the Digispark Board**
   - In Arduino IDE, go to **Tools > Board > Digispark (Default - 16.5mhz)**

5. **Upload Your Script**
   - Open any `.ino` file from this repo
   - Click **Upload**
   - When prompted, plug in your Digispark device

---

## 📜 Available Scripts

### 1️⃣ Blink_LED_1
- A basic LED blinking example for the Digispark ATTiny85.

### 2️⃣ RickRoll_Loop
- Continuously opens **Rick Astley’s 'Never Gonna Give You Up'** in the browser every 5 seconds.

### 3️⃣ RickRoll_Once
- Opens **Rick Astley’s video** just **once** when the device is plugged in.

### 4️⃣ Windows_Update_Prank
- Opens a **fake Windows Update screen** to trick users into thinking their PC is updating.

### 5️⃣ Windows_Update_Prank_Disable_Keyboard
- Same as the Windows Update prank, but **also disables the keyboard**, making it harder to escape!

---

## 🙌 Credits

This repository includes contributions and references from:
- **Digispark Developers** – For the Digispark ATTiny85 board and libraries
- **FakeUpdate.net** – For providing prank screens
- **Rick Astley** – For being the ultimate troll inspiration 😆
- Individual creators whose open-source scripts have inspired parts of these projects.

---

🔌 **Now plug in your Digispark and start trolling responsibly!** 😈🔥

