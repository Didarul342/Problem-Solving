#include <cstdio>
#include <cstring>
#define MAXN 8
#define LIVRE 0
#define PECA 1
#define ATACADA 2
#define SUPORTE 3

int dx[9] = {0, 1, -1, 0, 0, 1, 1, -1, -1};
int dy[9] = {0, 0, 0, 1, -1, 1, -1, 1, -1};
char entrada[20][6];
int n;
int tabuleiro[MAXN][MAXN];
int valido(int x, int y) {
    return x >= 0 && x < MAXN && y >= 0 && y < MAXN &&
           (tabuleiro[x][y] == LIVRE || tabuleiro[x][y] == PECA);
}
void addPeao(int x, int y) {
    int nx1 = x - 1, ny1 = y - 1;
    int nx2 = x + 1, ny2 = y - 1;
    if (nx1 >= 0 && nx1 < MAXN && ny1 >= 0 && ny1 < MAXN) {
     
        if (tabuleiro[nx1][ny1] == LIVRE)
            tabuleiro[nx1][ny1] = ATACADA;
        else if (tabuleiro[nx1][ny1] == PECA)
            tabuleiro[nx1][ny1] = SUPORTE;
    }
    if (nx2 >= 0 && nx2 < MAXN && ny2 >= 0 && ny2 < MAXN) {
       
        if (tabuleiro[nx2][ny2] == LIVRE)
            tabuleiro[nx2][ny2] = ATACADA;
        else if (tabuleiro[nx2][ny2] == PECA)
            tabuleiro[nx2][ny2] = SUPORTE;
    }
}
void addBispo(int x, int y) {
    for (int i = x - 1, j = y - 1; i >= 0 && j >= 0; i--, j--) {
        if (tabuleiro[i][j] == LIVRE) {
            tabuleiro[i][j] = ATACADA;
        } else if (tabuleiro[i][j] == PECA) {
            tabuleiro[i][j] = SUPORTE;
            break;
        }
    }
    for (int i = x + 1, j = y + 1; i < MAXN && j < MAXN; i++, j++) {
        if (tabuleiro[i][j] == LIVRE) {
            tabuleiro[i][j] = ATACADA;
        } else if (tabuleiro[i][j] == PECA) {
            tabuleiro[i][j] = SUPORTE;
            break;
        }
    }
    for (int i = x - 1, j = y + 1; i >= 0 && j < MAXN; i--, j++) {
        if (tabuleiro[i][j] == LIVRE) {
            tabuleiro[i][j] = ATACADA;
        } else if (tabuleiro[i][j] == PECA) {
            tabuleiro[i][j] = SUPORTE;
            break;
        }
    }
    for (int i = x + 1, j = y - 1; i < MAXN && j >= 0; i++, j--) {
        if (tabuleiro[i][j] == LIVRE) {
            tabuleiro[i][j] = ATACADA;
        } else if (tabuleiro[i][j] == PECA) {
            tabuleiro[i][j] = SUPORTE;
            break;
        }
    }
}
void addTorre(int x, int y) {
    for (int i = x - 1; i >= 0; i--) {
     
        if (tabuleiro[i][y] == LIVRE) {
            tabuleiro[i][y] = ATACADA;
        } else if (tabuleiro[i][y] == PECA) {
            tabuleiro[i][y] = SUPORTE;
            break;
        }
    }
    for (int i = x + 1; i < MAXN; i++) {
    
        if (tabuleiro[i][y] == LIVRE) {
            tabuleiro[i][y] = ATACADA;
        } else if (tabuleiro[i][y] == PECA) {
            tabuleiro[i][y] = SUPORTE;
            break;
        }
    }
    for (int i = y - 1; i >= 0; i--) {
     
        if (tabuleiro[x][i] == LIVRE) {
            tabuleiro[x][i] = ATACADA;
        } else if (tabuleiro[x][i] == PECA) {
            tabuleiro[x][i] = SUPORTE;
            break;
        }
    }
    for (int i = y + 1; i < MAXN; i++) {
      
        if (tabuleiro[x][i] == LIVRE) {
            tabuleiro[x][i] = ATACADA;
        } else if (tabuleiro[x][i] == PECA) {
            tabuleiro[x][i] = SUPORTE;
            break;
        }
    }
}
void addRei(int x, int y) {
    for (int i = 1; i < 9; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || ny < 0 || nx >= MAXN || ny >= MAXN) continue;
      
        if (tabuleiro[nx][ny] == LIVRE)
            tabuleiro[nx][ny] = ATACADA;
        else if (tabuleiro[nx][ny] == PECA)
            tabuleiro[nx][ny] = SUPORTE;
    }
}
int main() {
    while (scanf("%d", &n) != EOF) {
        memset(tabuleiro, 0, sizeof(tabuleiro));
        for (int i = 0; i < n; i++) {
            scanf("%s", entrada[i]);
            tabuleiro[entrada[i][1] - 'a'][entrada[i][2] - '1'] = PECA;
        }
       
        for (int i = 0; i < n; i++) {
            if (entrada[i][0] == 'P')
                addPeao(entrada[i][1] - 'a', entrada[i][2] - '1');
            if (entrada[i][0] == 'T' || entrada[i][0] == 'R')
                addTorre(entrada[i][1] - 'a', entrada[i][2] - '1');
            if (entrada[i][0] == 'B' || entrada[i][0] == 'R')
                addBispo(entrada[i][1] - 'a', entrada[i][2] - '1');
            if (entrada[i][0] == 'W')
                addRei(entrada[i][1] - 'a', entrada[i][2] - '1');
          
        }
        scanf("%s", entrada[n]);
        int xrei = entrada[n][1] - 'a', yrei = entrada[n][2] - '1';
        int possivel = 0;
        for (int i = 0; i < 9; i++) {
            if (valido(xrei + dx[i], yrei + dy[i])) {
             
                possivel = 1;
                break;
            }
        }
    
        if (possivel)
            printf("NAO\n");
        else
            printf("SIM\n");
    }
    return 0;
}
