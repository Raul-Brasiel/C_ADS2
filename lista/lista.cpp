#include <stdio.h>

struct Node {
    int value;
    Node* next;
    Node(int _value) {
        value = _value;
        next = NULL;
    }
};

struct List {
    Node* start;
    Node* end;
    int s;

    List() {
        start = NULL;
        end = NULL;
        s = 0;
    }

    bool empty() {
        return start == NULL && end == NULL;
    }

    void pushBack(int value) {
        Node* n = new Node(value);
        s++;
        if (empty()) {
            start = n;
            end = n;
            return;
        }
        end->next = n;
        end = n;
    }

    void pushFront(int value) {
        Node* n = new Node(value);
        s++;
        if (empty()) {
            start = n;
            end = n;
            return;
        }
        n->next = start;
        start = n;
    }

    void print() {
        Node* aux = start;
        while (aux != NULL) {
            printf("%d -> ", aux->value);
            aux = aux->next;
        }
        printf("NULL\n");
    }

    int size() {
        return s;
    }

    void popFront() {
        if (empty()) return;
        if (s == 1) {
            delete start;
            start = end = NULL;
            s = 0;
            return;
        }
        Node* aux = start;
        start = start->next;
        delete aux;
        s--;
    }

    void popBack() {
        if (empty()) return;
        if (s == 1) {
            delete start;
            start = end = NULL;
            s = 0;
            return;
        }
        Node* aux = start;
        while (aux->next != end) {
            aux = aux->next;
        }
        delete end;
        end = aux;
        end->next = NULL;
        s--;
    }

    void insert(int v, int p) {
        if (p <= 0) {
            pushFront(v);
            return;
        }
        if (p >= s) {
            pushBack(v);
            return;
        }
        Node* n = new Node(v);
        s++;
        Node* a = start;
        for (int i = 0; i < p - 1; i++) {
            a = a->next;
        }
        n->next = a->next;
        a->next = n;
    }

    // 1. Remove os N últimos elementos; se N >= size, esvazia a lista
    void removeLastN(int N) {
        if (N >= s) {
            // esvaziar
            while (!empty()) popFront();
            return;
        }
        // remover N vezes do fim
        for (int i = 0; i < N; i++) {
            popBack();
        }
    }

    // 2. Remove o segundo elemento; se size <= 1, não faz nada
    void removeSecond() {
        if (s <= 1) return;
        // segundo é start->next
        Node* toDel = start->next;
        start->next = toDel->next;
        // se era o último, atualiza end
        if (toDel == end) {
            end = start;
        }
        delete toDel;
        s--;
    }

    // 3. Insere no final o tamanho atual da lista
    void insertSize() {
        pushBack(s);
    }

    // 4. Insere todos os números de 1 até N no final
    void insertRange(int N) {
        for (int i = 1; i <= N; i++) {
            pushBack(i);
        }
    }

    // 5. Insere um elemento na penúltima posição; se size <= 1, não faz nada
    void insertPenultimate(int v) {
        if (s <= 1) return;
        // penúltima posição = índice s-1 (0-based)
        insert(v, s - 1);
    }
};

int main() {
    List l;
    // Exemplo de uso:
    for (int i = 1; i <= 5; i++) l.pushBack(i); // lista: 1->2->3->4->5

    printf("Original: ");
    l.print();

    l.removeLastN(2);    // remove 4 e 5
    printf("After removeLastN(2): ");
    l.print();

    l.removeSecond();    // remove o 2
    printf("After removeSecond(): ");
    l.print();

    l.insertSize();      // insere size atual (2)
    printf("After insertSize(): ");
    l.print();

    l.insertRange(3);    // insere 1,2,3 ao final
    printf("After insertRange(3): ");
    l.print();

    l.insertPenultimate(99); // insere 99 na penúltima posição
    printf("After insertPenultimate(99): ");
    l.print();

    return 0;
}
