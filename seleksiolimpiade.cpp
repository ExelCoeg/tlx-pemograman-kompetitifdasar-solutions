#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int N, M;

        string pemenang;
        string para_peserta[10000];
        cin >> N >> M >> pemenang;
        for (i = 0; i < N; i++)
        {
            string peserta;
            cin >> peserta;

            for (int j = 0; j <= 3; j++)
            {
                int sesi1;
                int sesi2;
                int sesi3;
                cin >> sesi1 >> sesi2 >> sesi3;
                para_peserta[i][j] = peserta;
                para_peserta[i][j] = sesi1;
                para_peserta[i][j + 1] = sesi2;
                para_peserta[i][j + 2] = sesi3;
            }
        }
    }
}
