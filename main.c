#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void kursi();
void regnloguser();
void reguser();
void loginuser();
void menuawaluser();
void menufilmuser();
void studio1();
void studio2();
void studio3();
void studio4();
void studio5();
void menumakanminumuser();
void milihmakanuser();
void milihminumuser();
void metodepembayaran();
void tunai();
void walletupdate();
void ewallet();
void ewallet1();
void ewallet2();
void loginadmin();
void menuawaladmin();
void listuser();
void urutuser();
void hapususer();
void inputfilm();
void editfilm();
void newstudio1();
void newstudio2();
void newstudio3();
void newstudio4();
void newstudio5();
void inputmakan();
void inputminum();
void hapusmakan();
void hapusminum();

FILE *userin, *userout, *adminin, *adminout, *jadwalin, *jadwalout, *menuin, *menuout, *studioin, *studioout;
struct
{
    char user[50], pass[50];
    int ewallet;
} data, temp[50], temp2;

struct
{
    char kursib[5];
    int kursic;
} std;

struct
{
    char film[50], waktu[50];
    int hargat;
} film;

struct
{
    char makan[50], minum[50];
    int hargamakan, hargaminum;
} makan;

char user1[50], pass1[50], user2[50], pass2[50], hapus[50], hapus1[50], hapus2[50], hapus3[50], ulang, jawab, usertest[50];
char akursi[4][10], bkursi[4][10], ckursi[4][10], dkursi[4][10], ekursi[4][10], repeat, userwallet, passwallet;
int i = 1, idx, banyak, pilih, pilih2, pilih3, pilih4, total, total2, saldo = 0, topup, newsaldo = 0;
int p, studio = 0, totalfilm = 0, totalmakan = 0, totalminum = 0, tempewallet;
int j2, j3, j4, j5, x, y, a, b, c, d, e, f, g, h, j, k, l, m, n, reg;
long int apilih, bpilih2, cpilih3, dpilih4;

void main()
{

    system("cls");
    do
    {
        kursi();
    login:
        system("cls");
        pilih = 100, pilih2 = 100, pilih4 = 100, studio = 0, std.kursic = 0;
        printf(" _____________________________________________________ \n");
        printf("|                                                     |\n");
        printf("|              Selamat Datang Di D`Bioskop            |\n");
        printf("|_____________________________________________________|\n\n");

        printf("1. User \n");
        printf("2. Admin   \n");
        printf("Pilih salah satu : ");
        scanf("%d", &x);
        printf("\n");
        switch (x)
        {
        case 1:

            regnloguser();
            scanf("%d", &reg);
            switch (reg)
            {
            case 1:
                reguser();
                break;
            case 2:
                i = 3;
                for (int i = 3; i > 0; i--)
                {
                    loginuser();
                    userin = fopen("akunuser.dat", "rb");
                    while (fread(&data, sizeof(data), 1, userin) == 1)
                    {
                        if (strcmp(user1, data.user) == 0 && strcmp(pass1, data.pass) == 0)
                        {
                            printf("=======================================================\n");
                            printf("\nSelamat, Anda berhasil login\n");
                            do
                            {
                            menuawaluser:
                                menuawaluser();
                                scanf("%d", &jawab);
                                switch (jawab)
                                {
                                case 1:
                                filmuser:
                                    menufilmuser();
                                    scanf("%d", &studio);
                                    switch (studio)
                                    {
                                    case 1:
                                        studio1();
                                        break;

                                    case 2:
                                        studio2();
                                        break;

                                    case 3:
                                        studio3();
                                        break;

                                    case 4:
                                        studio4();
                                        break;

                                    case 5:
                                        studio5();
                                        break;
                                    default:
                                        goto filmuser;
                                        break;
                                    }
                                    break;

                                case 2:

                                    menumakanminumuser();
                                    scanf("%d", &h);
                                    switch (h)
                                    {
                                    case 1:
                                        milihmakanuser();
                                        system("pause");
                                        break;

                                    case 2:
                                        milihminumuser();
                                        system("pause");
                                        break;

                                    default:
                                        goto menuawaluser;
                                        break;
                                    }
                                    break;

                                case 3:
                                metode:
                                    metodepembayaran();
                                    scanf("%d", &e);
                                    switch (e)
                                    {
                                    case 1:
                                        tunai();
                                        system("pause");
                                        break;

                                    case 2:
                                        system("cls");
                                        walletupdate();
                                        ewallet();
                                        scanf("%d", &p);
                                        switch (p)
                                        {
                                        case 1:
                                            ewallet1();
                                            system("pause");
                                            break;

                                        case 2:
                                            ewallet2();
                                            system("pause");
                                            break;

                                        default:
                                            goto metode;
                                            break;
                                        }
                                        break;

                                    default:
                                        goto menuawaluser;
                                        break;
                                    }
                                    break;

                                default:
                                    printf("Anda berhasil logout\n");
                                    system("pause");
                                    goto login;
                                    break;
                                }

                            } while (ulang != 'y');
                        }
                        else
                        {
                            system("cls");
                            printf("Username atau password yang dimasukkan salah, Kesempatan anda sisa %d kali", i - 1);
                            printf("\n=======================================================\n");
                        }
                    }
                    fclose(userin);
                }

            default:
                printf("Tidak ada pada pilihan\n");
                break;
            }

            break;

        case 2:

            i = 3;
            for (int i = 3; i > 0; i--)
            {
                loginadmin();
                if (strcmp(user2, "admin") == 0 && strcmp(pass2, "admin") == 0)
                {
                    printf("=======================================================\n");
                    printf("\nSelamat, Anda berhasil login\n");
                    do
                    {
                    menuadmin:
                        menuawaladmin();
                        scanf("%d", &y);
                        switch (y)
                        {
                        case 1:
                        aturuser:
                            system("cls");
                            printf(" _____________________________________________________ \n");
                            printf("| 1. List akun user                                   |\n");
                            printf("| 2. Hapus akun user                                  |\n");
                            printf("| 3. Kembali                                          |\n");
                            printf("|_____________________________________________________|\n\n");

                            printf("Pilih salah satu : ");
                            scanf("%d", &l);
                            switch (l)
                            {
                            case 1:
                                system("cls");
                                printf(" _____________________________________________________ \n");
                                printf("| 1. Urutkan dari akun lama ke akun baru              |\n");
                                printf("| 2. Urutkan sesuai abjad                             |\n");
                                printf("| 3. Kembali                                          |\n");
                                printf("|_____________________________________________________|\n\n");

                                printf("Pilih salah satu : ");
                                scanf("%d", &m);
                                switch (m)
                                {
                                case 1:
                                    listuser();
                                    system("pause");
                                    break;

                                case 2:
                                    urutuser();
                                    system("pause");
                                    break;
                                default:
                                    goto aturuser;
                                    break;
                                }
                                break;

                            case 2:
                                hapususer();
                                system("pause");
                                break;

                            default:
                                goto menuadmin;
                                break;
                            }
                            break;

                        case 2:
                            system("cls");
                            printf(" _____________________________________________________ \n");
                            printf("| 1. Memasukkan Jadwal Film                           |\n");
                            printf("| 2. Mengganti Jadwal Film dan Harga Tiket            |\n");
                            printf("| 3. List Studio dan tempat duduk                     |\n");
                            printf("| 4. Kembali                                          |\n");
                            printf("|_____________________________________________________|\n\n");

                            printf("Pilih salah satu :");
                            scanf("%d", &a);
                            switch (a)
                            {
                            case 1:
                                inputfilm();
                                system("pause");
                                break;

                            case 2:
                                editfilm();
                                system("pause");
                                break;

                            case 3:
                            pilstudio:
                                printf("Pilih Studio (1-5):");
                                scanf("%d", &studio);
                                printf("_______________________________________________________\n");
                                switch (studio)
                                {
                                case 1:
                                    newstudio1();
                                    system("pause");
                                    break;

                                case 2:
                                    newstudio2();
                                    system("pause");
                                    break;

                                case 3:
                                    newstudio3();
                                    system("pause");
                                    break;

                                case 4:
                                    newstudio4();
                                    system("pause");
                                    break;

                                case 5:
                                    newstudio5();
                                    system("pause");
                                    break;
                                default:
                                    goto pilstudio;
                                    break;
                                }
                                printf("\n_______________________________________________________\n");
                                break;
                            default:
                                goto menuadmin;
                                break;
                            }
                            break;

                        case 3:
                        aturmamin:
                            system("cls");
                            printf(" _____________________________________________________ \n");
                            printf("| 1. Memasukkan menu makanan/minuman                  |\n");
                            printf("| 2. Mengganti menu makanan/minuman                   |\n");
                            printf("| 3. kembali                                          |\n");
                            printf("|_____________________________________________________|\n\n");

                            printf("Pilih salah satu :");
                            scanf("%d", &b);
                            printf("=======================================================\n");
                            switch (b)
                            {
                            case 1:

                                printf("Masukkan banyak menu :");
                                scanf("%d", &banyak);
                                for (int z = 0; z < banyak; z++)
                                {
                                    system("cls");
                                    printf(" _____________________________________________________ \n");
                                    printf("| 1. Makanan                                          |\n");
                                    printf("| 2. Minuman                                          |\n");
                                    printf("| 3. Kembali                                          |\n");
                                    printf("|_____________________________________________________|\n\n");

                                    printf("Pilih salah satu : ");
                                    scanf("%d", &f);
                                    switch (f)
                                    {
                                    case 1:
                                        inputmakan();
                                        break;

                                    case 2:
                                        inputminum();
                                        break;
                                    default:
                                        goto aturmamin;
                                        break;
                                    }
                                }
                                break;

                            case 2:
                                system("cls");
                                printf(" _____________________________________________________ \n");
                                printf("| 1. Makanan                                          |\n");
                                printf("| 2. Minuman                                          |\n");
                                printf("| 3. Kembali                                          |\n");
                                printf("|_____________________________________________________|\n\n");

                                printf("Pilih salah satu : ");
                                scanf("%d", &g);
                                switch (g)
                                {
                                case 1:
                                    hapusmakan();
                                    system("pause");
                                    break;

                                case 2:
                                    hapusminum();
                                    system("pause");
                                    break;

                                default:
                                    goto aturmamin;
                                    break;
                                }

                                break;

                            default:
                                goto menuadmin;
                                break;
                            }
                            break;

                        default:
                            printf("Anda berhasil logout\n");
                            system("pause");
                            goto login;
                            break;
                        }

                    } while (ulang != 't');
                }
                else
                {
                    printf("Username atau password yang dimasukkan salah, Kesempatan anda sisa %d kali", i - 1);
                    printf("=======================================================\n");
                }
            }
        default:
            goto login;
            break;
        }
    } while (ulang != 't');
}

void kursi()
{

    for (int p = 0; p < 4; p++)
    {
        for (int n = 0; n < 10; n++)
        {
            akursi[p][n] = 'K';
        }
    }
    for (int p = 0; p < 4; p++)
    {
        for (int n = 0; n < 10; n++)
        {
            bkursi[p][n] = 'K';
        }
    }
    for (int p = 0; p < 4; p++)
    {
        for (int n = 0; n < 10; n++)
        {
            ckursi[p][n] = 'K';
        }
    }
    for (int p = 0; p < 4; p++)
    {
        for (int n = 0; n < 10; n++)
        {
            dkursi[p][n] = 'K';
        }
    }
    for (int p = 0; p < 4; p++)
    {
        for (int n = 0; n < 10; n++)
        {
            ekursi[p][n] = 'K';
        }
    }
}

void regnloguser()
{

    system("cls");
    printf(" ______________________________________________________ \n");
    printf("|                                                      |\n");
    printf("| 1. Registrasi akun user                              |\n");
    printf("| 2. Login akun user                                   |\n");
    printf("|______________________________________________________|\n\n");

    printf("Pilih salah satu : ");
}

void reguser()
{

    system("cls");
    userin = fopen("akunuser.dat", "ab");
    printf(" _____________________________________________________ \n");
    printf("|                   Registrasi Akun                   |\n");
    printf("|_____________________________________________________|\n\n");

    printf("Masukkan Username :");
    fflush(stdin);
    gets(data.user);
    printf("Masukkan Password :");
    fflush(stdin);
    gets(data.pass);
    printf("=======================================================\n");
    printf("Registrasi selesai");
    fwrite(&data, sizeof(data), 1, userin);
    fclose(userin);
}

void loginuser()
{

    system("cls");
    printf(" _____________________________________________________ \n");
    printf("|                     Login(User)                     |\n");
    printf("|_____________________________________________________|\n\n");

    printf("Masukkan Username :");
    fflush(stdin);
    gets(user1);
    printf("Masukkan Password :");
    fflush(stdin);
    gets(pass1);
}

void menuawaluser()
{

    system("cls");
    printf("=======================================================\n");
    printf("Nama user : %s\n", user1);
    printf("=======================================================\n");
    jadwalout = fopen("jadwal.dat", "rb");
    apilih = (pilih - 1) * sizeof(film);
    fseek(jadwalout, apilih, SEEK_SET);
    i = 1;
    if (fread(&film, sizeof(film), 1, jadwalout) == 0)
    {
        printf("Anda belum memilih Film\n");
    }
    else
    {
        printf("%d Nama Film : %s\n", i++, film.film);
        printf("  Waktu Tayang : %s\n", film.waktu);
        printf("  Harga Tiket : Rp.%d\n", film.hargat);
    }
    fclose(jadwalout);
    printf("=======================================================\n");
    printf("Pilihan nomor studio : %d\n", studio);
    printf("Pilihan nomor kursi : %s%d\n", std.kursib, std.kursic);
    printf("=======================================================\n");
    menuout = fopen("menumakan.dat", "rb");
    bpilih2 = (pilih2 - 1) * sizeof(makan);
    fseek(menuout, bpilih2, SEEK_SET);
    i = 1;
    if (fread(&makan, sizeof(makan), 1, menuout) == 0)
    {
        printf("Anda tidak memesan makanan\n");
        printf("=======================================================\n");
    }
    else
    {
        printf("=======================================================\n");
        printf("Pilihan makanan anda\n");
        printf("%d Nama makanan : %s\n", i++, makan.makan);
        printf("  Harga makanan : Rp.%d\n", makan.hargamakan);
        printf("=======================================================\n");
    }
    fclose(menuout);
    menuout = fopen("menuminum.dat", "rb");
    dpilih4 = (pilih4 - 1) * sizeof(makan);
    fseek(menuout, dpilih4, SEEK_SET);
    i = 1;
    if (fread(&makan, sizeof(makan), 1, menuout) == 0)
    {
        printf("Anda tidak memesan minuman\n");
        printf("=======================================================\n");
    }
    else
    {
        printf("=======================================================\n");
        printf("Pilihan minuman anda\n");
        printf("%d Nama minuman : %s\n", i++, makan.minum);
        printf("  Harga minuman : Rp.%d\n", makan.hargaminum);
        printf("=======================================================\n");
    }
    fclose(menuout);
    printf(" _____________________________________________________ \n");
    printf("| Menu                                                |\n");
    printf("| 1. Pembelian tiket film                             |\n");
    printf("| 2. Pembelian makanan dan minuman                    |\n");
    printf("| 3. Pembayaran (Tunai atau eWallet)                  |\n");
    printf("| 4. Logout                                           |\n");
    printf("|_____________________________________________________|\n\n");

    printf("Pilih salah satu : ");
}

void menufilmuser()
{

    system("cls");
    printf("=======================================================\n");
    printf("Nama user : %s\n", user1);
    printf("=======================================================\n");
    printf(" _____________________________________________________ \n");
    printf("|                    Jadwal Film                      |\n");
    printf("|_____________________________________________________|\n");

    i = 1;
    jadwalin = fopen("jadwal.dat", "rb");
    while (fread(&film, sizeof(film), 1, jadwalin) == 1)
    {
        printf("%d Nama Film : %s\n", i++, film.film);
        printf("  Waktu Tayang : %s\n", film.waktu);
        printf("  Harga Tiket : Rp.%d\n", film.hargat);
    }
    fclose(jadwalin);
    printf("=======================================================\n");
    printf("Pilih Jadwal Film (gunakan angka) : ");
    scanf("%d", &pilih);
    getchar();
    printf("=======================================================\n");
    jadwalout = fopen("jadwal.dat", "rb");

    i = 1;
    apilih = (pilih - 1) * sizeof(film);
    fseek(jadwalout, apilih, SEEK_SET);
    if (fread(&film, sizeof(film), 1, jadwalout) == 0)
    {
        printf("Film yang dicari tidak terdapat pada pilihan.\n");
    }
    else
    {
        printf("%d Nama Film : %s\n", i++, film.film);
        printf("  Waktu Tayang : %s\n", film.waktu);
        printf("  Harga Tiket : Rp.%d\n", film.hargat);
    }
    fclose(jadwalout);
    system("cls");
    i = 1;
    printf("=======================================================\n");
    printf("Nama user : %s\n", user1);
    printf("=======================================================\n");
    printf("Jadwal film yang dipilih\n");
    printf("=======================================================\n");
    printf("%d Nama Film : %s\n", i++, film.film);
    printf("  Waktu Tayang : %s\n", film.waktu);
    printf("  Harga Tiket : Rp.%d\n", film.hargat);
    printf("=======================================================\n");
    printf("Pilih Studio (1-5):");
}

void studio1()
{
    newstudio1();
    studioin = fopen("studio1.dat", "ab");
    printf("\nPilih Kursi (A-D) : ");
    fflush(stdin);
    gets(std.kursib);
    printf("Pilih kursi (1-10) : ");
    scanf("%d", &std.kursic);
    fwrite(&std, sizeof(std), 1, studioin);
    fclose(studioin);
    studioout = fopen("studio1.dat", "rb");
    while (fread(&std, sizeof(std), 1, studioout) == 1)
    {
        if (strcmp(std.kursib, "A") == 0 || strcmp(std.kursib, "a") == 0)
        {
            idx = std.kursic - 1;
            akursi[0][idx] = 'O';
        }
        else if (strcmp(std.kursib, "B") == 0 || strcmp(std.kursib, "b") == 0)
        {
            idx = std.kursic - 1;
            akursi[1][idx] = 'O';
        }
        else if (strcmp(std.kursib, "C") == 0 || strcmp(std.kursib, "c") == 0)
        {
            idx = std.kursic - 1;
            akursi[2][idx] = 'O';
        }
        else if (strcmp(std.kursib, "D") == 0 || strcmp(std.kursib, "d") == 0)
        {
            idx = std.kursic - 1;
            akursi[3][idx] = 'O';
        }

        system("cls");
        printf(" _____________________________________________________ \n");
        printf("|              Pilihan Tempat duduk Anda              |\n");
        printf("|_____________________________________________________|\n");
        printf("   \t ");

        for (k = 1; k <= 10; k++)
        {
            printf(" %d  ", k);
        }
        printf("\n      A :");

        for (j5 = 0; j5 < 10; j5++)
        {
            printf("[%c] ", akursi[0][j5]);
        }
        printf("\n      B :");

        for (j2 = 0; j2 < 10; j2++)
        {
            printf("[%c] ", akursi[1][j2]);
        }
        printf("\n      C :");

        for (j3 = 0; j3 < 10; j3++)
        {
            printf("[%c] ", akursi[2][j3]);
        }
        printf("\n      D :");

        for (j4 = 0; j4 < 10; j4++)
        {
            printf("[%c] ", akursi[3][j4]);
        }
    }
    printf("\n _____________________________________________________ ");
    printf("\n|      [O] = Sudah diisi         [K] = Kosong         |");
    printf("\n|_____________________________________________________|\n");
    fclose(studioout);
    system("pause");
}

void studio2()
{

    newstudio2();
    studioin = fopen("studio2.dat", "ab");
    printf("\nPilih Kursi (A-D) : ");
    fflush(stdin);
    gets(std.kursib);
    printf("Pilih kursi (1-10) : ");
    scanf("%d", &std.kursic);
    fwrite(&std, sizeof(std), 1, studioin);
    fclose(studioin);
    studioout = fopen("studio2.dat", "rb");
    while (fread(&std, sizeof(std), 1, studioout) == 1)
    {
        if (strcmp(std.kursib, "A") == 0 || strcmp(std.kursib, "a") == 0)
        {
            idx = std.kursic - 1;
            bkursi[0][idx] = 'O';
        }
        else if (strcmp(std.kursib, "B") == 0 || strcmp(std.kursib, "b") == 0)
        {
            idx = std.kursic - 1;
            bkursi[1][idx] = 'O';
        }
        else if (strcmp(std.kursib, "C") == 0 || strcmp(std.kursib, "c") == 0)
        {
            idx = std.kursic - 1;
            bkursi[2][idx] = 'O';
        }
        else if (strcmp(std.kursib, "D") == 0 || strcmp(std.kursib, "d") == 0)
        {
            idx = std.kursic - 1;
            bkursi[3][idx] = 'O';
        }

        system("cls");
        printf(" _____________________________________________________ \n");
        printf("|              Pilihan Tempat duduk Anda              |\n");
        printf("|_____________________________________________________|\n");
        printf("   \t ");

        for (k = 1; k <= 10; k++)
        {
            printf(" %d  ", k);
        }
        printf("\n      A :");

        for (j5 = 0; j5 < 10; j5++)
        {
            printf("[%c] ", bkursi[0][j5]);
        }
        printf("\n      B :");

        for (j2 = 0; j2 < 10; j2++)
        {
            printf("[%c] ", bkursi[1][j2]);
        }
        printf("\n      C :");

        for (j3 = 0; j3 < 10; j3++)
        {
            printf("[%c] ", bkursi[2][j3]);
        }
        printf("\n      D :");

        for (j4 = 0; j4 < 10; j4++)
        {
            printf("[%c] ", bkursi[3][j4]);
        }
    }
    printf("\n _____________________________________________________ ");
    printf("\n|      [O] = Sudah diisi         [K] = Kosong         |");
    printf("\n|_____________________________________________________|\n");
    fclose(studioout);
    system("pause");
}

void studio3()
{

    newstudio3();
    studioin = fopen("studio3.dat", "ab");
    printf("\nPilih Kursi (A-D) : ");
    fflush(stdin);
    gets(std.kursib);
    printf("Pilih kursi (1-10) : ");
    scanf("%d", &std.kursic);
    fwrite(&std, sizeof(std), 1, studioin);
    fclose(studioin);
    studioout = fopen("studio3.dat", "rb");
    while (fread(&std, sizeof(std), 1, studioout) == 1)
    {
        if (strcmp(std.kursib, "A") == 0 || strcmp(std.kursib, "a") == 0)
        {
            idx = std.kursic - 1;
            ckursi[0][idx] = 'O';
        }
        else if (strcmp(std.kursib, "B") == 0 || strcmp(std.kursib, "b") == 0)
        {
            idx = std.kursic - 1;
            ckursi[1][idx] = 'O';
        }
        else if (strcmp(std.kursib, "C") == 0 || strcmp(std.kursib, "c") == 0)
        {
            idx = std.kursic - 1;
            ckursi[2][idx] = 'O';
        }
        else if (strcmp(std.kursib, "D") == 0 || strcmp(std.kursib, "d") == 0)
        {
            idx = std.kursic - 1;
            ckursi[3][idx] = 'O';
        }

        system("cls");
        printf(" _____________________________________________________ \n");
        printf("|              Pilihan Tempat duduk Anda              |\n");
        printf("|_____________________________________________________|\n");
        printf("   \t ");

        for (k = 1; k <= 10; k++)
        {
            printf(" %d  ", k);
        }
        printf("\n      A :");

        for (j5 = 0; j5 < 10; j5++)
        {
            printf("[%c] ", ckursi[0][j5]);
        }
        printf("\n      B :");

        for (j2 = 0; j2 < 10; j2++)
        {
            printf("[%c] ", ckursi[1][j2]);
        }
        printf("\n      C :");

        for (j3 = 0; j3 < 10; j3++)
        {
            printf("[%c] ", ckursi[2][j3]);
        }
        printf("\n      D :");

        for (j4 = 0; j4 < 10; j4++)
        {
            printf("[%c] ", ckursi[3][j4]);
        }
    }
    printf("\n _____________________________________________________ ");
    printf("\n|      [O] = Sudah diisi         [K] = Kosong         |");
    printf("\n|_____________________________________________________|\n");
    fclose(studioout);
    system("pause");
}

void studio4()
{

    newstudio4();
    studioin = fopen("studio4.dat", "ab");
    printf("\nPilih Kursi (A-D) : ");
    fflush(stdin);
    gets(std.kursib);
    printf("Pilih kursi (1-10) : ");
    scanf("%d", &std.kursic);
    fwrite(&std, sizeof(std), 1, studioin);
    fclose(studioin);
    studioout = fopen("studio4.dat", "rb");
    while (fread(&std, sizeof(std), 1, studioout) == 1)
    {
        if (strcmp(std.kursib, "A") == 0 || strcmp(std.kursib, "a") == 0)
        {
            idx = std.kursic - 1;
            dkursi[0][idx] = 'O';
        }
        else if (strcmp(std.kursib, "B") == 0 || strcmp(std.kursib, "b") == 0)
        {
            idx = std.kursic - 1;
            dkursi[1][idx] = 'O';
        }
        else if (strcmp(std.kursib, "C") == 0 || strcmp(std.kursib, "c") == 0)
        {
            idx = std.kursic - 1;
            dkursi[2][idx] = 'O';
        }
        else if (strcmp(std.kursib, "D") == 0 || strcmp(std.kursib, "d") == 0)
        {
            idx = std.kursic - 1;
            dkursi[3][idx] = 'O';
        }

        system("cls");
        printf(" _____________________________________________________ \n");
        printf("|              Pilihan Tempat duduk Anda              |\n");
        printf("|_____________________________________________________|\n");
        printf("   \t ");

        for (k = 1; k <= 10; k++)
        {
            printf(" %d  ", k);
        }
        printf("\n      A :");

        for (j5 = 0; j5 < 10; j5++)
        {
            printf("[%c] ", dkursi[0][j5]);
        }
        printf("\n      B :");

        for (j2 = 0; j2 < 10; j2++)
        {
            printf("[%c] ", dkursi[1][j2]);
        }
        printf("\n      C :");

        for (j3 = 0; j3 < 10; j3++)
        {
            printf("[%c] ", dkursi[2][j3]);
        }
        printf("\n      D :");

        for (j4 = 0; j4 < 10; j4++)
        {
            printf("[%c] ", dkursi[3][j4]);
        }
    }
    printf("\n _____________________________________________________ ");
    printf("\n|      [O] = Sudah diisi         [K] = Kosong         |");
    printf("\n|_____________________________________________________|\n");
    fclose(studioout);
    system("pause");
}

void studio5()
{

    newstudio5();
    studioin = fopen("studio5.dat", "ab");
    printf("\nPilih Kursi (A-D) : ");
    fflush(stdin);
    gets(std.kursib);
    printf("Pilih kursi (1-10) : ");
    scanf("%d", &std.kursic);
    fwrite(&std, sizeof(std), 1, studioin);
    fclose(studioin);
    studioout = fopen("studio5.dat", "rb");
    while (fread(&std, sizeof(std), 1, studioout) == 1)
    {
        if (strcmp(std.kursib, "A") == 0 || strcmp(std.kursib, "a") == 0)
        {
            idx = std.kursic - 1;
            ekursi[0][idx] = 'O';
        }
        else if (strcmp(std.kursib, "B") == 0 || strcmp(std.kursib, "b") == 0)
        {
            idx = std.kursic - 1;
            ekursi[1][idx] = 'O';
        }
        else if (strcmp(std.kursib, "C") == 0 || strcmp(std.kursib, "c") == 0)
        {
            idx = std.kursic - 1;
            ekursi[2][idx] = 'O';
        }
        else if (strcmp(std.kursib, "D") == 0 || strcmp(std.kursib, "d") == 0)
        {
            idx = std.kursic - 1;
            ekursi[3][idx] = 'O';
        }

        system("cls");
        printf(" _____________________________________________________ \n");
        printf("|              Pilihan Tempat duduk Anda              |\n");
        printf("|_____________________________________________________|\n");
        printf("   \t ");

        for (k = 1; k <= 10; k++)
        {
            printf(" %d  ", k);
        }
        printf("\n      A :");

        for (j5 = 0; j5 < 10; j5++)
        {
            printf("[%c] ", ekursi[0][j5]);
        }
        printf("\n      B :");

        for (j2 = 0; j2 < 10; j2++)
        {
            printf("[%c] ", ekursi[1][j2]);
        }
        printf("\n      C :");

        for (j3 = 0; j3 < 10; j3++)
        {
            printf("[%c] ", ekursi[2][j3]);
        }
        printf("\n      D :");

        for (j4 = 0; j4 < 10; j4++)
        {
            printf("[%c] ", ekursi[3][j4]);
        }
    }
    printf("\n _____________________________________________________ ");
    printf("\n|      [O] = Sudah diisi         [K] = Kosong         |");
    printf("\n|_____________________________________________________|\n");
    fclose(studioout);
    system("pause");
}

void menumakanminumuser()
{

    system("cls");
    menuout = fopen("menumakan.dat", "rb");
    menuin = fopen("menuminum.dat", "rb");
    printf(" _____________________________________________________ \n");
    printf("|              List makanan dan minuman               |\n");
    printf("|_____________________________________________________|\n\n");
    i = 1;
    while (fread(&makan, sizeof(makan), 1, menuout) == 1)
    {
        printf("%d Nama makanan : %s\n", i++, makan.makan);
        printf("  Harga makanan : Rp.%d\n", makan.hargamakan);
    }
    fclose(menuout);
    printf("\n=======================================================\n\n");
    i = 1;
    while (fread(&makan, sizeof(makan), 1, menuin) == 1)
    {
        printf("%d Nama minuman : %s\n", i++, makan.minum);
        printf("  Harga minuman : Rp.%d\n", makan.hargaminum);
    }
    fclose(menuin);

    printf("\n _____________________________________________________ \n");
    printf("| 1. Makanan                                          |\n");
    printf("| 2. Minuman                                          |\n");
    printf("| 3. Kembali                                          |\n");
    printf("|_____________________________________________________|\n");
    printf("Pilih :");
}

void milihmakanuser()
{

    system("cls");
    printf(" _____________________________________________________ \n");
    printf("|                    List makanan                     |\n");
    printf("|_____________________________________________________|\n\n");
    menuout = fopen("menumakan.dat", "rb");
    i = 1;
    while (fread(&makan, sizeof(makan), 1, menuout) == 1)
    {
        printf("%d Nama makanan : %s\n", i++, makan.makan);
        printf("  Harga makanan : Rp.%d\n", makan.hargamakan);
    }
    fclose(menuout);
    printf("\n=======================================================\n");
    printf("Pilih Menu makanan (gunakan angka) : ");
    scanf("%d", &pilih2);

    menuout = fopen("menumakan.dat", "rb");
    bpilih2 = (pilih2 - 1) * sizeof(makan);
    fseek(menuout, bpilih2, SEEK_SET);
    i = 1;
    if (fread(&makan, sizeof(makan), 1, menuout) == 0)
    {
        printf("Makanan yang anda cari tidak ada dalam pilihan\n");
    }
    else
    {
        printf("=======================================================\n");
        printf("Pilihan makanan anda\n");
        printf("%d Nama makanan : %s\n", i++, makan.makan);
        printf("  Harga makanan : Rp.%d\n", makan.hargamakan);
    }
    fclose(menuout);
}

void milihminumuser()
{

    system("cls");
    menuin = fopen("menuminum.dat", "rb");
    printf(" _____________________________________________________ \n");
    printf("|                    List minuman                     |\n");
    printf("|_____________________________________________________|\n\n");
    i = 1;
    while (fread(&makan, sizeof(makan), 1, menuin) == 1)
    {
        printf("%d Nama minuman : %s\n", i++, makan.minum);
        printf("  Harga minuman : Rp.%d\n", makan.hargaminum);
    }
    fclose(menuin);
    printf("\n=======================================================\n");
    printf("Pilih Menu minuman : ");
    scanf("%d", &pilih4);

    menuout = fopen("menuminum.dat", "rb");

    dpilih4 = (pilih4 - 1) * sizeof(makan);
    fseek(menuout, dpilih4, SEEK_SET);
    i = 1;
    if (fread(&makan, sizeof(makan), 1, menuout) == 0)
    {
        printf("Minuman yang anda cari tidak ada dalam pilihan\n");
    }
    else
    {
        printf("=======================================================\n");
        printf("Pilihan minuman anda\n");
        printf("%d Nama minuman : %s\n", i++, makan.minum);
        printf("  Harga minuman : Rp.%d\n", makan.hargaminum);
    }
    fclose(menuout);
}

void metodepembayaran()
{

    system("cls");
    printf(" _____________________________________________________ \n");
    printf("| Metode Pembayaran                                   |\n");
    printf("| 1. Tunai                                            |\n");
    printf("| 2. eWallet                                          |\n");
    printf("| 3. Kembali                                          |\n");
    printf("|_____________________________________________________|\n\n");

    printf("Pilih cara pembayaran : ");
}

void tunai()
{

    system("cls");
    printf("=======================================================\n");
    printf("Nama user : %s\n", user1);
    printf("=======================================================\n");
    jadwalout = fopen("jadwal.dat", "rb");
    apilih = (pilih - 1) * sizeof(film);
    fseek(jadwalout, apilih, SEEK_SET);
    i = 1;
    if (fread(&film, sizeof(film), 1, jadwalout) == 0)
    {
        printf("Anda tidak membeli tiket film\n");
    }
    else
    {
        printf("%d Nama Film : %s\n", i++, film.film);
        printf("  Waktu Tayang : %s\n", film.waktu);
        printf("  Harga Tiket : Rp.%d\n", film.hargat);
    }
    fclose(jadwalout);
    printf("=======================================================\n");
    printf("Pilihan nomor studio : %d\n", studio);
    printf("Pilihan nomor kursi : %s%d\n", std.kursib, std.kursic);
    printf("=======================================================\n");
    menuout = fopen("menumakan.dat", "rb");
    bpilih2 = (pilih2 - 1) * sizeof(makan);
    fseek(menuout, bpilih2, SEEK_SET);
    i = 1;
    if (fread(&makan, sizeof(makan), 1, menuout) == 0)
    {
        printf("Anda tidak memesan makanan\n");
    }
    else
    {
        printf("=======================================================\n");
        printf("Pilihan makanan anda\n");
        printf("%d Nama makanan : %s\n", i++, makan.makan);
        printf("  Harga makanan : Rp.%d\n", makan.hargamakan);
        printf("=======================================================\n");
    }
    fclose(menuout);
    menuout = fopen("menuminum.dat", "rb");
    dpilih4 = (pilih4 - 1) * sizeof(makan);
    fseek(menuout, dpilih4, SEEK_SET);
    i = 1;
    if (fread(&makan, sizeof(makan), 1, menuout) == 0)
    {
        printf("Anda tidak memesan minuman\n");
    }
    else
    {
        printf("=======================================================\n");
        printf("Pilihan minuman anda\n");
        printf("%d Nama minuman : %s\n", i++, makan.minum);
        printf("  Harga minuman : Rp.%d\n", makan.hargaminum);
        printf("=======================================================\n");
    }
    fclose(menuout);
    jadwalout = fopen("jadwal.dat", "rb");
    apilih = (pilih - 1) * sizeof(film);
    fseek(jadwalout, apilih, SEEK_SET);
    if (fread(&film, sizeof(film), 1, jadwalout) == 0)
    {
        printf("");
    }
    else
    {
        totalfilm = film.hargat;
    }

    fclose(jadwalout);
    totalmakan = 0;
    menuout = fopen("menumakan.dat", "rb");
    bpilih2 = (pilih2 - 1) * sizeof(makan);
    fseek(menuout, bpilih2, SEEK_SET);
    if (fread(&makan, sizeof(makan), 1, menuout) == 0)
    {
        printf("");
    }
    else
    {
        totalmakan = makan.hargamakan + totalmakan;
    }

    fclose(menuout);
    totalminum = 0;
    menuout = fopen("menuminum.dat", "rb");
    dpilih4 = (pilih4 - 1) * sizeof(makan);
    fseek(menuout, dpilih4, SEEK_SET);
    if (fread(&makan, sizeof(makan), 1, menuout) == 0)
    {
        printf("");
    }
    else
    {
        totalminum = makan.hargaminum + totalminum;
    }
    fclose(menuout);
    total = totalmakan + totalminum + totalfilm;
    printf("SubTotal : Rp. %d", total);
    printf("\n=======================================================\n");
    printf("Silahkan bayar dengan uang tunai anda\n");
    printf("=======================================================\n");
    printf("Terima kasih, selamat datang kembali ^-^\n");
    printf("=======================================================\n");
}

void walletupdate()
{

    system("cls");
    printf("=======================================================\n");
    printf("Masukkan username : ");
    fflush(stdin);
    gets(usertest);
    printf("=======================================================\n");
    userin = fopen("saldouser.dat", "rb");
    while (fread(&data, sizeof(data), 1, userin) == 1)
    {
        if (strcmp(usertest, data.user) == 0)
        {
            printf("Saldo eWallet : Rp. %d\n", data.ewallet);
        }
    }
    fclose(userin);
}

void ewallet()
{

    printf(" _____________________________________________________ \n");
    printf("| 1. Top up eWallet                                   |\n");
    printf("| 2. Withdraw eWallet                                 |\n");
    printf("| 3. Kembali                                          |\n");
    printf("|_____________________________________________________|\n\n");
    printf("Pilih salah satu : ");
}

void ewallet1()
{

    printf("=======================================================\n");
    data.ewallet = 0;
    userin = fopen("saldouser.dat", "rb");
    userout = fopen("saldouser2.dat", "wb");
    while (fread(&data, sizeof(data), 1, userin) == 1)
    {
        if (strcmp(usertest, data.user) != 0)
        {
            fwrite(&data, sizeof(data), 1, userout);
        }
        else
        {
            tempewallet = data.ewallet;
        }
    }
    fclose(userin);
    fclose(userout);

    remove("saldouser.dat");
    rename("saldouser2.dat", "saldouser.dat");

    userin = fopen("saldouser.dat", "ab");
    printf("Masukkan username : ");
    fflush(stdin);
    gets(data.user);
    printf("Masukkan nominal topup : ");
    scanf("%d", &temp2.ewallet);

    data.ewallet = temp2.ewallet + tempewallet;
    fwrite(&data, sizeof(data), 1, userin);
    fclose(userin);

    userin = fopen("saldouser.dat", "rb");
    while (fread(&data, sizeof(data), 1, userin) == 1)
    {
        if (strcmp(usertest, data.user) == 0)
        {
            printf("Saldo akhir : Rp. %d\n", data.ewallet);
        }
    }
    fclose(userin);
}

void ewallet2()
{

    system("cls");
    printf("=======================================================\n");
    printf("Nama user : %s\n", user1);
    printf("=======================================================\n");
    jadwalout = fopen("jadwal.dat", "rb");
    apilih = (pilih - 1) * sizeof(film);
    fseek(jadwalout, apilih, SEEK_SET);
    i = 1;
    if (fread(&film, sizeof(film), 1, jadwalout) == 0)
    {
        printf("Anda tidak membeli tiket film\n");
    }
    else
    {
        printf("%d Nama Film : %s\n", i++, film.film);
        printf("  Waktu Tayang : %s\n", film.waktu);
        printf("  Harga Tiket : Rp.%d\n", film.hargat);
    }
    fclose(jadwalout);
    printf("=======================================================\n");
    printf("Pilihan nomor studio : %d\n", studio);
    printf("Pilihan nomor kursi : %s%d\n", std.kursib, std.kursic);
    printf("=======================================================\n");
    menuout = fopen("menumakan.dat", "rb");
    bpilih2 = (pilih2 - 1) * sizeof(makan);
    fseek(menuout, bpilih2, SEEK_SET);
    i = 1;
    if (fread(&makan, sizeof(makan), 1, menuout) == 0)
    {
        printf("Anda tidak memesan makanan\n");
    }
    else
    {
        printf("=======================================================\n");
        printf("Pilihan makanan anda\n");
        printf("%d Nama makanan : %s\n", i++, makan.makan);
        printf("  Harga makanan : Rp.%d\n", makan.hargamakan);
        printf("=======================================================\n");
    }
    fclose(menuout);
    menuout = fopen("menuminum.dat", "rb");
    dpilih4 = (pilih4 - 1) * sizeof(makan);
    fseek(menuout, dpilih4, SEEK_SET);
    i = 1;
    if (fread(&makan, sizeof(makan), 1, menuout) == 0)
    {
        printf("Anda tidak memesan minuman\n");
    }
    else
    {
        printf("=======================================================\n");
        printf("Pilihan minuman anda\n");
        printf("%d Nama minuman : %s\n", i++, makan.minum);
        printf("  Harga minuman : Rp.%d\n", makan.hargaminum);
        printf("=======================================================\n");
    }
    fclose(menuout);
    jadwalout = fopen("jadwal.dat", "rb");
    apilih = (pilih - 1) * sizeof(film);
    fseek(jadwalout, apilih, SEEK_SET);
    if (fread(&film, sizeof(film), 1, jadwalout) == 0)
    {
        printf("");
    }
    else
    {
        totalfilm = film.hargat;
    }

    fclose(jadwalout);
    totalmakan = 0;
    menuout = fopen("menumakan.dat", "rb");
    bpilih2 = (pilih2 - 1) * sizeof(makan);
    fseek(menuout, bpilih2, SEEK_SET);
    if (fread(&makan, sizeof(makan), 1, menuout) == 0)
    {
        printf("");
    }
    else
    {
        totalmakan = makan.hargamakan + totalmakan;
    }

    fclose(menuout);
    totalminum = 0;
    menuout = fopen("menuminum.dat", "rb");
    dpilih4 = (pilih4 - 1) * sizeof(makan);
    fseek(menuout, dpilih4, SEEK_SET);
    if (fread(&makan, sizeof(makan), 1, menuout) == 0)
    {
        printf("");
    }
    else
    {
        totalminum = makan.hargaminum + totalminum;
    }
    fclose(menuout);
    total = totalmakan + totalminum + totalfilm;

    data.ewallet = 0;
    userin = fopen("saldouser.dat", "rb");
    userout = fopen("saldouser2.dat", "wb");
    while (fread(&data, sizeof(data), 1, userin) == 1)
    {
        if (strcmp(usertest, data.user) != 0)
        {
            fwrite(&data, sizeof(data), 1, userout);
        }
        else
        {
            printf("=======================================================\n");
            printf("Jumlah saldo awal : Rp. %d\n", data.ewallet);
            tempewallet = data.ewallet;
        }
    }
    fclose(userin);
    fclose(userout);

    remove("saldouser.dat");
    rename("saldouser2.dat", "saldouser.dat");

    printf("=======================================================\n");
    userin = fopen("saldouser.dat", "ab");
    printf("Masukkan username : ");
    fflush(stdin);
    gets(data.user);

    printf("=======================================================\n");
    printf("SubTotal : Rp. %d\n", total);
    printf("=======================================================\n");

    data.ewallet = tempewallet - total;
    fwrite(&data, sizeof(data), 1, userin);
    fclose(userin);

    userin = fopen("saldouser.dat", "rb");
    while (fread(&data, sizeof(data), 1, userin) == 1)
    {
        if (strcmp(usertest, data.user) == 0)
        {
            printf("Saldo akhir : Rp. %d", data.ewallet);
        }
    }
    fclose(userin);

    printf("\n=======================================================\n");
    printf("Terima kasih, selamat datang kembali ^-^\n");
    printf("=======================================================\n");
}

void loginadmin()
{

    system("cls");
    printf(" ___________________________________________________ \n");
    printf("|                    Login(Admin)                   |\n");
    printf("|___________________________________________________|\n\n");

    printf("Masukkan Username :");
    fflush(stdin);
    gets(user2);
    printf("Masukkan Password :");
    fflush(stdin);
    gets(pass2);
}

void menuawaladmin()
{

    system("cls");
    printf(" ___________________________________________________ \n");
    printf("| Menu                                              |\n");
    printf("| 1. Mengatur Akun User                             |\n");
    printf("| 2. Mengatur jadwal Film dan Harga Tiket           |\n");
    printf("| 3. Mengatur menu makanan/minuman dan harganya     |\n");
    printf("| 4. Logout                                         |\n");
    printf("|___________________________________________________|\n\n");

    printf("Pilih salah satu: ");
}

void listuser()
{

    system("cls");
    adminin = fopen("akunuser.dat", "rb");
    printf(" __________________________________________________\n");
    printf("|           List akun user yang terdaftar          |\n");
    printf("|__________________________________________________|\n");
    i = 1;
    while (fread(&data, sizeof(data), 1, adminin) == 1)
    {
        printf("%d Username : %s\n", i++, data.user);
        printf("  Password : %s\n", data.pass);
    }
    fclose(adminin);
}

void urutuser()
{

    system("cls");
    i = 0, j = 0;
    adminin = fopen("akunuser.dat", "rb");
    while (fread(&data, sizeof(data), 1, adminin) == 1)
    {
        strcpy(temp[i].user, data.user);
        strcpy(temp[i].pass, data.pass);
        i++;
        n = i;
    }
    fclose(adminin);
    i = 0, j = 0;
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (strcmp(temp[j - 1].user, temp[j].user) > 0)
            {
                temp2 = temp[j - 1];
                temp[j - 1] = temp[j];
                temp[j] = temp2;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d Username : %s\n", i + 1, temp[i].user);
        printf("  Password : %s\n", temp[i].pass);
    }
}

void hapususer()
{

    system("cls");
    adminin = fopen("akunuser.dat", "rb");
    printf(" _____________________________________________________ \n");
    printf("|           List akun user yang terdaftar             |\n");
    printf("|_____________________________________________________|\n");
    i = 1;
    while (fread(&data, sizeof(data), 1, adminin) == 1)
    {
        printf("%d Username : %s\n", i++, data.user);
        printf("  Password : %s\n", data.pass);
    }
    fclose(adminin);

    printf("=======================================================\n");
    printf("Masukkan data user yang ingin dihapus :");
    fflush(stdin);
    gets(hapus);
    printf("=======================================================\n");
    adminin = fopen("akunuser.dat", "rb");
    adminout = fopen("akunuser2.dat", "wb");

    while (fread(&data, sizeof(data), 1, adminin) == 1)
    {
        if (strcmp(data.user, hapus) != 0)
        {
            fwrite(&data, sizeof(data), 1, adminout);
        }
    }

    fclose(adminin);
    fclose(adminout);

    remove("akunuser.dat");
    rename("akunuser2.dat", "akunuser.dat");
    system("cls");
    adminout = fopen("akunuser.dat", "rb");
    printf(" _____________________________________________________ \n");
    printf("|            List akun user yang terdaftar            |\n");
    printf("|_____________________________________________________|\n");
    i = 1;
    while (fread(&data, sizeof(data), 1, adminout) == 1)
    {
        printf("%d Username : %s\n", i++, data.user);
        printf("  Password : %s\n", data.pass);
    }
    fclose(adminout);
}

void inputfilm()
{

    system("cls");
    printf("=======================================================\n");
    jadwalin = fopen("jadwal.dat", "ab");
    printf("Masukkan banyak jadwal :");
    scanf("%d", &banyak);
    getchar();
    printf("=======================================================\n");
    i = 1;
    for (int z = 0; z < banyak; z++)
    {
        printf("%d Nama Film : ", i++);
        fflush(stdin);
        gets(film.film);
        printf("  Waktu Tayang : ");
        fflush(stdin);
        gets(film.waktu);
        printf("  Harga Tiket : Rp.");
        scanf("%d", &film.hargat);
        fwrite(&film, sizeof(film), 1, jadwalin);
    }
    fclose(jadwalin);
}

void editfilm()
{

    system("cls");
    jadwalin = fopen("jadwal.dat", "rb");
    printf(" _____________________________________________________ \n");
    printf("|                  List Jadwal Film                   |\n");
    printf("|_____________________________________________________|\n");
    i = 1;
    while (fread(&film, sizeof(film), 1, jadwalin) == 1)
    {
        printf("%d Nama Film : %s\n", i++, film.film);
        printf("  Waktu Tayang : %s\n", film.waktu);
        printf("  Harga Tiket : Rp.%d\n", film.hargat);
    }
    fclose(jadwalin);

    printf("=======================================================\n");
    printf("Masukkan jadwal film yang ingin dihapus :");
    fflush(stdin);
    gets(hapus1);
    printf("=======================================================\n");
    jadwalin = fopen("jadwal.dat", "rb");
    jadwalout = fopen("jadwal2.dat", "wb");

    while (fread(&film, sizeof(film), 1, jadwalin) == 1)
    {
        if (strcmp(film.film, hapus1) != 0)
        {
            fwrite(&film, sizeof(film), 1, jadwalout);
        }
    }

    fclose(jadwalin);
    fclose(jadwalout);

    remove("jadwal.dat");
    rename("jadwal2.dat", "jadwal.dat");
    system("cls");
    jadwalout = fopen("jadwal.dat", "rb");
    printf(" _____________________________________________________ \n");
    printf("|                  List Jadwal Film                   |\n");
    printf("|_____________________________________________________|\n");
    i = 1;
    while (fread(&film, sizeof(film), 1, jadwalout) == 1)
    {
        printf("%d Nama Film : %s\n", i++, film.film);
        printf("  Waktu Tayang : %s\n", film.waktu);
        printf("  Harga Tiket :  Rp.%d\n", film.hargat);
    }
    fclose(jadwalout);
}

void newstudio1()
{
    system("cls");
    printf(" _____________________________________________________ \n");
    printf("|                      Studio 1                       |\n");
    printf("|_____________________________________________________|\n");
    printf("   \t ");
    for (k = 1; k <= 10; k++)
    {
        printf(" %d  ", k);
    }
    printf("\n      A :");

    for (j5 = 0; j5 < 10; j5++)
    {
        printf("[%c] ", akursi[0][j5]);
    }
    printf("\n      B :");

    for (j2 = 0; j2 < 10; j2++)
    {
        printf("[%c] ", akursi[1][j2]);
    }
    printf("\n      C :");

    for (j3 = 0; j3 < 10; j3++)
    {
        printf("[%c] ", akursi[2][j3]);
    }
    printf("\n      D :");

    for (j4 = 0; j4 < 10; j4++)
    {
        printf("[%c] ", akursi[3][j4]);
    }

    studioin = fopen("studio1.dat", "rb");
    while (fread(&std, sizeof(std), 1, studioin) == 1)
    {

        if (strcmp(std.kursib, "A") == 0 || strcmp(std.kursib, "a") == 0)
        {
            idx = std.kursic - 1;
            akursi[0][idx] = 'O';
        }
        else if (strcmp(std.kursib, "B") == 0 || strcmp(std.kursib, "b") == 0)
        {
            idx = std.kursic - 1;
            akursi[1][idx] = 'O';
        }
        else if (strcmp(std.kursib, "C") == 0 || strcmp(std.kursib, "c") == 0)
        {
            idx = std.kursic - 1;
            akursi[2][idx] = 'O';
        }
        else if (strcmp(std.kursib, "D") == 0 || strcmp(std.kursib, "d") == 0)
        {
            idx = std.kursic - 1;
            akursi[3][idx] = 'O';
        }
        system("cls");
        printf(" _____________________________________________________ \n");
        printf("|                      Studio 1                       |\n");
        printf("|_____________________________________________________|\n");
        printf("   \t ");
        for (k = 1; k <= 10; k++)
        {
            printf(" %d  ", k);
        }

        printf("\n      A :");

        for (j5 = 0; j5 < 10; j5++)
        {
            printf("[%c] ", akursi[0][j5]);
        }

        printf("\n      B :");

        for (j2 = 0; j2 < 10; j2++)
        {
            printf("[%c] ", akursi[1][j2]);
        }
        printf("\n      C :");

        for (j3 = 0; j3 < 10; j3++)
        {
            printf("[%c] ", akursi[2][j3]);
        }
        printf("\n      D :");

        for (j4 = 0; j4 < 10; j4++)
        {
            printf("[%c] ", akursi[3][j4]);
        }
    }
    fclose(studioin);
    printf("\n _____________________________________________________ ");
    printf("\n|      [O] = Sudah diisi            [K] = Kosong      |");
    printf("\n|_____________________________________________________|\n");
    printf("\n");
}

void newstudio2()
{
    system("cls");
    printf(" _____________________________________________________ \n");
    printf("|                      Studio 2                       |\n");
    printf("|_____________________________________________________|\n");
    printf("   \t ");
    for (k = 1; k <= 10; k++)
    {
        printf(" %d  ", k);
    }
    printf("\n      A :");

    for (j5 = 0; j5 < 10; j5++)
    {
        printf("[%c] ", bkursi[0][j5]);
    }
    printf("\n      B :");

    for (j2 = 0; j2 < 10; j2++)
    {
        printf("[%c] ", bkursi[1][j2]);
    }
    printf("\n      C :");

    for (j3 = 0; j3 < 10; j3++)
    {
        printf("[%c] ", bkursi[2][j3]);
    }
    printf("\n      D :");

    for (j4 = 0; j4 < 10; j4++)
    {
        printf("[%c] ", bkursi[3][j4]);
    }

    studioin = fopen("studio2.dat", "rb");
    while (fread(&std, sizeof(std), 1, studioin) == 1)
    {

        if (strcmp(std.kursib, "A") == 0 || strcmp(std.kursib, "a") == 0)
        {
            idx = std.kursic - 1;
            bkursi[0][idx] = 'O';
        }
        else if (strcmp(std.kursib, "B") == 0 || strcmp(std.kursib, "b") == 0)
        {
            idx = std.kursic - 1;
            bkursi[1][idx] = 'O';
        }
        else if (strcmp(std.kursib, "C") == 0 || strcmp(std.kursib, "c") == 0)
        {
            idx = std.kursic - 1;
            bkursi[2][idx] = 'O';
        }
        else if (strcmp(std.kursib, "D") == 0 || strcmp(std.kursib, "d") == 0)
        {
            idx = std.kursic - 1;
            bkursi[3][idx] = 'O';
        }
        system("cls");
        printf(" _____________________________________________________ \n");
        printf("|                      Studio 2                       |\n");
        printf("|_____________________________________________________|\n");
        printf("   \t ");
        for (k = 1; k <= 10; k++)
        {
            printf(" %d  ", k);
        }

        printf("\n      A :");

        for (j5 = 0; j5 < 10; j5++)
        {
            printf("[%c] ", bkursi[0][j5]);
        }

        printf("\n      B :");

        for (j2 = 0; j2 < 10; j2++)
        {
            printf("[%c] ", bkursi[1][j2]);
        }
        printf("\n      C :");

        for (j3 = 0; j3 < 10; j3++)
        {
            printf("[%c] ", bkursi[2][j3]);
        }
        printf("\n      D :");

        for (j4 = 0; j4 < 10; j4++)
        {
            printf("[%c] ", bkursi[3][j4]);
        }
    }
    fclose(studioin);
    printf("\n _____________________________________________________ ");
    printf("\n|      [O] = Sudah diisi            [K] = Kosong      |");
    printf("\n|_____________________________________________________|\n");
    printf("\n");
}

void newstudio3()
{
    system("cls");
    printf(" _____________________________________________________ \n");
    printf("|                      Studio 3                       |\n");
    printf("|_____________________________________________________|\n");
    printf("   \t ");
    for (k = 1; k <= 10; k++)
    {
        printf(" %d  ", k);
    }
    printf("\n      A :");

    for (j5 = 0; j5 < 10; j5++)
    {
        printf("[%c] ", ckursi[0][j5]);
    }
    printf("\n      B :");

    for (j2 = 0; j2 < 10; j2++)
    {
        printf("[%c] ", ckursi[1][j2]);
    }
    printf("\n      C :");

    for (j3 = 0; j3 < 10; j3++)
    {
        printf("[%c] ", ckursi[2][j3]);
    }
    printf("\n      D :");

    for (j4 = 0; j4 < 10; j4++)
    {
        printf("[%c] ", ckursi[3][j4]);
    }

    studioin = fopen("studio3.dat", "rb");
    while (fread(&std, sizeof(std), 1, studioin) == 1)
    {

        if (strcmp(std.kursib, "A") == 0 || strcmp(std.kursib, "a") == 0)
        {
            idx = std.kursic - 1;
            ckursi[0][idx] = 'O';
        }
        else if (strcmp(std.kursib, "B") == 0 || strcmp(std.kursib, "b") == 0)
        {
            idx = std.kursic - 1;
            ckursi[1][idx] = 'O';
        }
        else if (strcmp(std.kursib, "C") == 0 || strcmp(std.kursib, "c") == 0)
        {
            idx = std.kursic - 1;
            ckursi[2][idx] = 'O';
        }
        else if (strcmp(std.kursib, "D") == 0 || strcmp(std.kursib, "d") == 0)
        {
            idx = std.kursic - 1;
            ckursi[3][idx] = 'O';
        }
        system("cls");
        printf(" _____________________________________________________ \n");
        printf("|                      Studio 3                       |\n");
        printf("|_____________________________________________________|\n");
        printf("   \t ");
        for (k = 1; k <= 10; k++)
        {
            printf(" %d  ", k);
        }

        printf("\n      A :");

        for (j5 = 0; j5 < 10; j5++)
        {
            printf("[%c] ", ckursi[0][j5]);
        }

        printf("\n      B :");

        for (j2 = 0; j2 < 10; j2++)
        {
            printf("[%c] ", ckursi[1][j2]);
        }
        printf("\n      C :");

        for (j3 = 0; j3 < 10; j3++)
        {
            printf("[%c] ", ckursi[2][j3]);
        }
        printf("\n      D :");

        for (j4 = 0; j4 < 10; j4++)
        {
            printf("[%c] ", ckursi[3][j4]);
        }
    }
    fclose(studioin);
    printf("\n _____________________________________________________ ");
    printf("\n|      [O] = Sudah diisi            [K] = Kosong      |");
    printf("\n|_____________________________________________________|\n");
    printf("\n");
}

void newstudio4()
{
    system("cls");
    printf(" _____________________________________________________ \n");
    printf("|                      Studio 4                       |\n");
    printf("|_____________________________________________________|\n");
    printf("   \t ");
    for (k = 1; k <= 10; k++)
    {
        printf(" %d  ", k);
    }
    printf("\n      A :");

    for (j5 = 0; j5 < 10; j5++)
    {
        printf("[%c] ", dkursi[0][j5]);
    }
    printf("\n      B :");

    for (j2 = 0; j2 < 10; j2++)
    {
        printf("[%c] ", dkursi[1][j2]);
    }
    printf("\n      C :");

    for (j3 = 0; j3 < 10; j3++)
    {
        printf("[%c] ", dkursi[2][j3]);
    }
    printf("\n      D :");

    for (j4 = 0; j4 < 10; j4++)
    {
        printf("[%c] ", dkursi[3][j4]);
    }

    studioin = fopen("studio4.dat", "rb");
    while (fread(&std, sizeof(std), 1, studioin) == 1)
    {

        if (strcmp(std.kursib, "A") == 0 || strcmp(std.kursib, "a") == 0)
        {
            idx = std.kursic - 1;
            dkursi[0][idx] = 'O';
        }
        else if (strcmp(std.kursib, "B") == 0 || strcmp(std.kursib, "b") == 0)
        {
            idx = std.kursic - 1;
            dkursi[1][idx] = 'O';
        }
        else if (strcmp(std.kursib, "C") == 0 || strcmp(std.kursib, "c") == 0)
        {
            idx = std.kursic - 1;
            dkursi[2][idx] = 'O';
        }
        else if (strcmp(std.kursib, "D") == 0 || strcmp(std.kursib, "d") == 0)
        {
            idx = std.kursic - 1;
            dkursi[3][idx] = 'O';
        }
        system("cls");
        printf(" _____________________________________________________ \n");
        printf("|                      Studio 4                       |\n");
        printf("|_____________________________________________________|\n");
        printf("   \t ");
        for (k = 1; k <= 10; k++)
        {
            printf(" %d  ", k);
        }

        printf("\n      A :");

        for (j5 = 0; j5 < 10; j5++)
        {
            printf("[%c] ", dkursi[0][j5]);
        }

        printf("\n      B :");

        for (j2 = 0; j2 < 10; j2++)
        {
            printf("[%c] ", dkursi[1][j2]);
        }
        printf("\n      C :");

        for (j3 = 0; j3 < 10; j3++)
        {
            printf("[%c] ", dkursi[2][j3]);
        }
        printf("\n      D :");

        for (j4 = 0; j4 < 10; j4++)
        {
            printf("[%c] ", dkursi[3][j4]);
        }
    }
    fclose(studioin);
    printf("\n _____________________________________________________ ");
    printf("\n|      [O] = Sudah diisi            [K] = Kosong      |");
    printf("\n|_____________________________________________________|\n");
    printf("\n");
}

void newstudio5()
{
    system("cls");
    printf(" _____________________________________________________ \n");
    printf("|                      Studio 5                       |\n");
    printf("|_____________________________________________________|\n");
    printf("   \t ");
    for (k = 1; k <= 10; k++)
    {
        printf(" %d  ", k);
    }
    printf("\n      A :");

    for (j5 = 0; j5 < 10; j5++)
    {
        printf("[%c] ", ekursi[0][j5]);
    }
    printf("\n      B :");

    for (j2 = 0; j2 < 10; j2++)
    {
        printf("[%c] ", ekursi[1][j2]);
    }
    printf("\n      C :");

    for (j3 = 0; j3 < 10; j3++)
    {
        printf("[%c] ", ekursi[2][j3]);
    }
    printf("\n      D :");

    for (j4 = 0; j4 < 10; j4++)
    {
        printf("[%c] ", ekursi[3][j4]);
    }

    studioin = fopen("studio5.dat", "rb");
    while (fread(&std, sizeof(std), 1, studioin) == 1)
    {

        if (strcmp(std.kursib, "A") == 0 || strcmp(std.kursib, "a") == 0)
        {
            idx = std.kursic - 1;
            ekursi[0][idx] = 'O';
        }
        else if (strcmp(std.kursib, "B") == 0 || strcmp(std.kursib, "b") == 0)
        {
            idx = std.kursic - 1;
            ekursi[1][idx] = 'O';
        }
        else if (strcmp(std.kursib, "C") == 0 || strcmp(std.kursib, "c") == 0)
        {
            idx = std.kursic - 1;
            ekursi[2][idx] = 'O';
        }
        else if (strcmp(std.kursib, "D") == 0 || strcmp(std.kursib, "d") == 0)
        {
            idx = std.kursic - 1;
            ekursi[3][idx] = 'O';
        }
        system("cls");
        printf(" _____________________________________________________ \n");
        printf("|                      Studio 5                       |\n");
        printf("|_____________________________________________________|\n");
        printf("   \t ");
        for (k = 1; k <= 10; k++)
        {
            printf(" %d  ", k);
        }

        printf("\n      A :");

        for (j5 = 0; j5 < 10; j5++)
        {
            printf("[%c] ", ekursi[0][j5]);
        }

        printf("\n      B :");

        for (j2 = 0; j2 < 10; j2++)
        {
            printf("[%c] ", ekursi[1][j2]);
        }
        printf("\n      C :");

        for (j3 = 0; j3 < 10; j3++)
        {
            printf("[%c] ", ekursi[2][j3]);
        }
        printf("\n      D :");

        for (j4 = 0; j4 < 10; j4++)
        {
            printf("[%c] ", ekursi[3][j4]);
        }
    }
    fclose(studioin);
    printf("\n _____________________________________________________ ");
    printf("\n|      [O] = Sudah diisi            [K] = Kosong      |");
    printf("\n|_____________________________________________________|\n");
    printf("\n");
}

void inputmakan()
{

    menuin = fopen("menumakan.dat", "ab");
    i = 1;
    printf("=======================================================\n");
    printf("%d Nama makanan :", i++);
    fflush(stdin);
    gets(makan.makan);
    printf("  Harga makanan : Rp.");
    scanf("%d", &makan.hargamakan);
    fwrite(&makan, sizeof(makan), 1, menuin);
    fclose(menuin);
    printf("\n");
}

void inputminum()
{

    menuin = fopen("menuminum.dat", "ab");
    i = 1;
    printf("=======================================================\n");
    printf("%d Nama minuman :", i++);
    fflush(stdin);
    gets(makan.minum);
    printf("  Harga minuman : Rp.");
    scanf("%d", &makan.hargaminum);
    fwrite(&makan, sizeof(makan), 1, menuin);
    fclose(menuin);
    printf("\n");
}

void hapusmakan()
{

    system("cls");
    menuin = fopen("menumakan.dat", "rb");
    printf(" _____________________________________________________ \n");
    printf("|                    List makanan                     |\n");
    printf("|_____________________________________________________|\n");
    i = 1;
    while (fread(&makan, sizeof(makan), 1, menuin) == 1)
    {
        printf("%d Nama makanan : %s\n", i++, makan.makan);
        printf("  Harga makanan : Rp.%d\n", makan.hargamakan);
    }
    fclose(menuin);
    printf("=======================================================\n");
    printf("Masukkan menu makanan yang ingin dihapus :");
    fflush(stdin);
    gets(hapus2);
    printf("=======================================================\n");
    menuin = fopen("menumakan.dat", "rb");
    menuout = fopen("menumakan2.dat", "wb");

    while (fread(&makan, sizeof(makan), 1, menuin) == 1)
    {
        if (strcmp(makan.makan, hapus2) != 0)
        {
            fwrite(&makan, sizeof(makan), 1, menuout);
        }
    }

    fclose(menuin);
    fclose(menuout);

    remove("menumakan.dat");
    rename("menumakan2.dat", "menumakan.dat");
    system("cls");
    menuout = fopen("menumakan.dat", "rb");
    menuin = fopen("menuminum.dat", "rb");
    printf(" _____________________________________________________ \n");
    printf("|                    List makanan                     |\n");
    printf("|_____________________________________________________|\n");
    i = 1;
    while (fread(&makan, sizeof(makan), 1, menuout) == 1)
    {
        printf("%d Nama makanan : %s\n", i++, makan.makan);
        printf("  Harga makanan : Rp.%d\n", makan.hargamakan);
    }
    fclose(menuout);
    printf("=======================================================\n");
    i = 1;
    while (fread(&makan, sizeof(makan), 1, menuin) == 1)
    {
        printf("%d Nama minuman : %s\n", i++, makan.minum);
        printf("  Harga minuman : Rp.%d\n", makan.hargaminum);
    }
    fclose(menuin);
}

void hapusminum()
{

    system("cls");
    menuin = fopen("menumakan.dat", "rb");
    printf(" _____________________________________________________ \n");
    printf("|                    List minuman                     |\n");
    printf("|_____________________________________________________|\n");
    menuout = fopen("menuminum.dat", "rb");
    i = 1;
    while (fread(&makan, sizeof(makan), 1, menuout) == 1)
    {
        printf("%d Nama minuman : %s\n", i++, makan.minum);
        printf("  Harga minuman : Rp.%d\n", makan.hargaminum);
    }
    fclose(menuout);

    printf("=======================================================\n");
    printf("Masukkan menu minuman yang ingin dihapus :");
    fflush(stdin);
    gets(hapus3);
    printf("=======================================================\n");
    menuin = fopen("menuminum.dat", "rb");
    menuout = fopen("menuminum2.dat", "wb");

    while (fread(&makan, sizeof(makan), 1, menuin) == 1)
    {
        if (strcmp(makan.minum, hapus3) != 0)
        {
            fwrite(&makan, sizeof(makan), 1, menuout);
        }
    }

    fclose(menuin);
    fclose(menuout);

    remove("menuminum.dat");
    rename("menuminum2.dat", "menuminum.dat");
    system("cls");
    menuout = fopen("menumakan.dat", "rb");
    menuin = fopen("menuminum.dat", "rb");
    printf(" _____________________________________________________ \n");
    printf("|                    List minuman                     |\n");
    printf("|_____________________________________________________|\n");
    i = 1;
    while (fread(&makan, sizeof(makan), 1, menuout) == 1)
    {
        printf("%d Nama makanan : %s\n", i++, makan.makan);
        printf("  Harga makanan : Rp.%d\n", makan.hargamakan);
    }
    fclose(menuout);
    printf("=======================================================\n");
    i = 1;
    while (fread(&makan, sizeof(makan), 1, menuin) == 1)
    {
        printf("%d Nama minuman : %s\n", i++, makan.minum);
        printf("  Harga minuman : Rp.%d\n", makan.hargaminum);
    }
    fclose(menuin);
}