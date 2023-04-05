# Snake-Game-Console-without-graphics.h 🐍
### Snake Game Console dalam bahasa C tanpa mengguanakan header ``graphics.h``
OS : <img alt="Windows" src="https://img.shields.io/badge/Windows-0078D6?logo=windows&logoColor=white&style=flat"/>

```Version : v1.0.0```

Library yang dibutuhkan : Standard Library Bahasa C seperti..
```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
```
  Ini adalah Snake Game Simpel yang di jalankan di windows console/CMD/Command Prompt menggunakan Bahasa <img alt="C lang" src="https://img.shields.io/badge/-3178C6?logo=C&logoColor=white&style=flat" /> tanpa menggunakan pustaka/library grafis seperti ``graphics.h``.
  Ide utamanya adalah membuat gerakan ular dalam game dengan memanfaatkan looping dan pada setiap loop koordinat lokasi kepala, badan dan ekor ular berada di koordinat yang berbeda secara berurutan sesuai arah yang sedang di pilih oleh pengguna (kanan/kiri/atas/bawah).
  Snake Game ini dibuat hanya dengan syntax basic dari Bahasa C tanpa menggunakan syntax khusus dari library bahasa C yang lain.



  > **NOTE** : *Program Snake Game ini sebenarnya masih mempunyai bug saat generate lokasi random untuk makanan sebagai komponen untuk memperoleh score dalam snake game ini, jika teman - teman ingin berkontribusi untuk memperbaiki bug tersebut atau bug lain yang di temukan, teman - teman bisa membaca file [CONTRIBUTING.md](https://github.com/Fredo-Ronan/Snake-Game-Console-without-graphics.h/blob/main/CONTRIBUTING.md) untuk mengetahui bagaimana cara untuk berkontribusi dalam fun project kecil ini*
  
  - [ ] [Random food coordinate generating bug issue](https://github.com/Fredo-Ronan/Snake-Game-Console-without-graphics.h/issues/1)


  ### Jump to section
  * [Fitur - fitur ✔](https://github.com/Fredo-Ronan/Snake-Game-Console-without-graphics.h#features-)
  * [Batasan/Kelemahan ⚠](https://github.com/Fredo-Ronan/Snake-Game-Console-without-graphics.h#limitations-)
  * [Pratinjau Gambar 👀](https://github.com/Fredo-Ronan/Snake-Game-Console-without-graphics.h#preview-images-)
  * [Compile source code nya 🛠⚙](https://github.com/Fredo-Ronan/Snake-Game-Console-without-graphics.h#build-and-run-the-source-file-)


---
# Fitur - fitur ✔
* Gerakan "snake" nya menggunakan W A S D pada keyboard ➡⬅⬆⬇ ⌨
* Menyimpan riwayat permainan termasuk nama pemainnya beserta tanggal dan waktu di perolehnya 💾
* Akses riwayat bahkan ketika program sudah di terminasi (persistence berdasarkan file history.txt) 📂
* Pause saat ada gangguan ketika bermain ⏸

---
# Batasan/Kelemahan ⚠
* Sayangnya, snake game console ini berjalan menggunakan prinsip looping dan tanpa menggunakan mesin grafis seperti header ``graphics.h`` maka performanya bergantung pada kecepatan CPU, semakin tinggi kecepatan CPU maka semakin halus pergerakan "snake" di dalam game nya.
* Snake Game ini hanya bisa di jalankan di Windows dalam bentuk Console/Command Prompt/CMD.

---
# Pratinjau Gambar 👀
* **Menu Utama**
  
  <img src="https://user-images.githubusercontent.com/128687596/229764982-313bc5e1-3dbf-425a-a264-dc392f266f03.png" width="500"/>
  
  *Menu utama pada Program Snake Game*
  
* **Konfirmasi untuk bermain**
  
  <img src="https://user-images.githubusercontent.com/128687596/229765083-deb3b2e5-7ace-4a38-a1b0-0b0f3bc3ea7f.png" width="500"/>
  
  *Meminta konfirmasi pada pemain jika dia memang benar - benar ingin lanjut bermain*
  
  <img src="https://user-images.githubusercontent.com/128687596/229765106-18b2297b-ede9-4318-bfcc-5dd6131b11db.png" width="500"/>
  
  *Meminta nama dari pemain (bisa random) untuk keperluan menyimpan riwayat permainan*

* **Melihat Riwayat Permainan**

  <img src="https://user-images.githubusercontent.com/128687596/229767767-461826b9-d8f4-4afb-9a7f-eab00d67eb0d.png" width="500"/>
  
  *Melihat semua riwayat pemain yang ada*
  
  <img src="https://user-images.githubusercontent.com/128687596/229768005-349115bc-96f0-427f-b281-7ac2c36b373e.png" width="500"/>
  
  *Cari dan melihat riwayat dari salah satu nama pemain*
  
* **Game Play**

  <img src="https://user-images.githubusercontent.com/128687596/229838794-11e8df48-f933-4cf3-9df8-643e010873c1.png" width="300"/>
  
  *Ketika bermain*
  
  <img src="https://user-images.githubusercontent.com/128687596/229783462-23544d67-ad28-400f-af97-f243fd6a9466.png" width="300"/>

  *Ketika permainan di pause/jeda*
  
  <img src="https://user-images.githubusercontent.com/128687596/229838230-cc1bafa6-49d4-4986-a6e7-30ddd584045f.png" width="300"/>
  
  *Permainan berakhir (Game Over)*
  

  
---
# Compile Source Code nya 🛠⚙
* **Windows**
  > *Jika anda ingin menjalankan source code ini lewat text editor seperti VS CODE, anda **HARUS PUNYA** GCC Compiler ter-install di dalam komputer anda*
  > *Berikut adalah beberapa cara untuk mendapatkan GCC Compiler dan instruksi untuk menginstallnya :*
  > *  Installer bernama MinGW cukup populer di kalangan pengguna windows, anda bisa mencarinya di google dengan kata kunci : MinGW C Compiler download ATAU [anda bisa klik di sini untuk mendownload dan membaca instruksi instalasinya](https://www.scaler.com/topics/c/c-compiler-for-windows/)
  > *  Installer lainnya yang saya menggunakannya di komputer saya adalah msys2, [klik disini untuk mendownload dan membaca instruksi instalasinya](https://www.msys2.org/).
  > 
  > ***CATATAN** tidak hanya menginstall GCC Compiler saja, tetapi anda juga harus mengkonfigurasi PATH di dalam environment komputer windows anda*

  > *DIREKOMENDASIKAN adalah menggunakan Dev C++ IDE atau Microsoft Visual Studio*
  > *  [Klik disini untuk mendownload Dev C++ dari website resminya](https://www.bloodshed.net/).
  > *  [Klik disini untuk mendownload versi Dev C++ yang saya gunakan pada komputer saya](https://github.com/Fredo-Ronan/Dev-C-IDE-Installer)

  * Download source code nya
  * Ekstrak zip nya ke folder yang anda inginkan

  ### Jika anda menggunakan VS CODE, ikuti instruksi berikut =====================================
  * Buka CMD/Command Prompt di dalam directory tempat anda menyimpan source code yang sudah di download dan di ekstrak (lihat cara tercepatnya/shorcut)
  * ketik ``code .`` kemudian tekan ENTER
  * Kemudian VS Code akan terbuka menurut directory tempat anda menyimpan source code nya
  * Buka source code nya dengan cara klik 2 kali, atau menggunakan shortcut CTRL + P untuk mencari lalu tekan ENTER untuk membukanya
  * Buka terminal di dalam VS Code (anda bisa menggunakan shortcut CTRL + ` di keyboard)
  * ketik ``gcc main.c source.c -o snake`` lalu tekan ENTER
  
  Sebenarnya ``snake`` bisa di ganti menurut preferensi nama file output .exe apa yang teman - teman inginkan 
  
  Formatnya adalah :
  ``gcc <sourceFiles sourceFiles> -o <outputName>``
  * Terakhir ketik ``start snake.exe`` or ``./snake`` untuk menjalankan program snake game nya.
  * Enjoy :)
  
  
  #### Ketika menjalankan source code menggunakan VS CODE, abaikan file - file berekstensi seperti berikut :
  ```
  - Project1.layout
  - Project1.dev
  - Project1.exe
  - MakeFile.win
  - source.o
  - main.o
  ```
  #### Karena file - file tersebut adalah file yang di hasilkan secara otomatis oleh IDE Dev C++ dan hanya penting ketika menjalankan source code nya menggunakan Dev C++ IDE.

  ### Jika anda menggunakan Dev C++, ikuti instruksi berikut =====================================
  * Ekstrak file zip source code nya
  
  * Ikuti langkah - langkah berikut untuk membuka project nya di Dev C++ :
    * Buka Dev C++
    * Klik File > Open
      
      <img src="https://user-images.githubusercontent.com/128687596/229816000-fbfa6578-d826-4b88-9929-bc14e2a77b7a.png" width="500"/>
      
    * Arahkan direktori tempat anda mendownload/menyimpan source code nya
    * Klik 1 kali pada file Project1.dev lalu klik open
    
      <img src="https://user-images.githubusercontent.com/128687596/229818293-1ced2a03-20a7-49d5-84ac-6b6ed58323df.png" width="500"/>
      
    * Klik ikon Compile & Run di salah satu deretan tool di atas atau anda bisa menggunakan shorcut F11
    
      <img src="https://user-images.githubusercontent.com/128687596/229819444-9025daac-90ec-4d48-9bb9-568c7ae0ebb1.png" width="500"/>
      
    * Lalu Dev C++ akan otomatis langsung compile semua source code nya serta otomatis menjalankan program snake game nya
    * Enjoy :)
---
