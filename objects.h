// Objetos IDS
enum IDS{ELECTRONICS, BULLETS, ZOMBIES, ENERGIA};

// Tipos de poderes
enum PODERES{CALOR, MAGNETISMO, ELETRONS, LUZ, ROTACAO, BARREIRA, AMPLIFICACAO, ARMAZENAMENTO, REDIRECIONAMENTO};


struct Tiros
{
    int ID; // Tipo de objeto
    float x; // Posi�ao X
    int y; // Posi�ao Y
    bool live; // Define quando o tiro � acionado
    int PODER; // Tipo de poder do objeto
    int forca_tiro; // For�a do tiro
    int boundx; // Colisao X
    int boundy; // Colisao Y
    float speed; // Velocidade do tiro

};

struct Electronics
{
    int ID; // Tipo de objeto
    int x; // Posi�ao X
    int y; // Posi�ao Y
    int life; // Vida do objeto
    int boundx; //Colisao X
    int boundy; // Colisao Y
    struct Tiros tiro;
};

struct Zombies
{
    int ID; // Tipo de objeto
    float x; // Posi�ao X
    int y; // Posi�ao Y
    bool live; // Define quando um novo Zombie surge
    float speed; // Velocidade do Zombie
    float boundx; // Colisao X
    int boundy; // Colisao Y

};

struct Energia
{
    int ID;
    float x;
    float y;
    bool live;
    float speed;
    float boundx;
    float boundy;
};
