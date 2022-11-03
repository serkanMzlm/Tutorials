# CMake
- CMakeLists.txt dosyasıdır.
- Cmake her değişiklik yapıldığında build etmek için `cmake -S . -B build` komutu girilir. Bu kısımda -B  sonra nereye çıkartılıcağını belirtiriz. **deneme/build/** şeklinde.
- `cmake_minimum_required(VERSİON 2.7.1)` Kullanılabilicek Cmake  en düşük sürümü ayarlanır. 
- `project(Baslik)` projeye başlık ekler.
- `add_executable(çıktı_başlık ${PROJECT_SOURCE_DIR}/main.cpp)`  çıktı kısmı proje adı olmasını istiyorsak **${PROJECT_NAME}** yapılabilir. Bu kısımda ${PROJECT_SOURCE_DIR} bize o an çalışan cmake dizininin yerini verir.
- `set(CMAKE_C_STANDARD 11)` C dilinin standartlarını ayarlamış oluyoruz.Komut satırında **-std=c11** komutu aynıdır.
- `option(ENABLE_WARNING "Compile with all warning" OFF)` Bütün warning kapalı tutar.
- `add_compile_options(-Wall -Wextra)` eklemek istediğimiz ayarları yazarız.
- `add_subdirectory(Driver)` Belirtilen klasöre geçer.
