main.cpp
#include <iostream>

// zadanie 1
class RadioFM {
private:
    int kompresja;
    int crc;
    std::string format;

public:
    RadioFM();
    void dekoduj();
    std::string wypiszFormat();

};

RadioFM :: RadioFM() {
    std::cout << "Wywolano konstruktor RadioFM" << std::endl;
}

class MPG {
private:
    int kompresja;
    int crc;
    std::string format;

public:
    MPG();
    void dekoduj();
    std::string wypiszFormat();
};

MPG :: MPG() {
    std::cout << "Wywolano konstruktor MPG" << std::endl;
}

class DabPlus {
private:
    int kompresja;
    int crc;
    std::string format;

public:
    DabPlus();
    void dekoduj();
    std::string wypiszFormat();
};

DabPlus :: DabPlus() {
    std::cout << "Wywolano konstruktor Dab+" << std::endl;
}

class MP3 {
private:
    int kompresja;
    int crc;
    std::string format;

public:
    MP3();
    void dekoduj();
    std::string wypiszFormat();
};

MP3 :: MP3() {
    std::cout << "Wywolano konstruktor MP3" << std::endl;
}

// zadanie 2 i 3
class Dekoder : public RadioFM, public MPG, public DabPlus, public MP3 {
private:
    int moc;

public:
    Dekoder();
};

Dekoder :: Dekoder() {
    std::cout << "Wywolano konstruktor klasy Dekoder" << std::endl;
}

// zadanie 4
class MPG2 : public MPG {
public:
    MPG2();
};

MPG2 :: MPG2() {
    std::cout << "Wywolano konstruktor MPG2" << std::endl;
}

class MPG4 : public MPG2 {
public:
    MPG4();
};

MPG4 :: MPG4() {
    std::cout << "Wywolano konstruktor MPG4" << std::endl;
}

class Odtwarzacz : public MPG4 {
public:
    Odtwarzacz();
};

Odtwarzacz :: Odtwarzacz() {
    std::cout << "Wywolano konstruktor klasy Odtwarzacz" << std::endl;
}

int main() {

    Dekoder dekoder = Dekoder();
    std::cout << "\n";
    Odtwarzacz odtwarzacz = Odtwarzacz();

    return 0;
}
Comment on gist
 
Leave a comment
Comment
 Desktop version
