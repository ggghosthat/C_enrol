#include <stdio.h>
#include <string.h>

FILE *fp;

void write_file(){
    fp = fopen("./tmp/test.txt", "w+");
    fprintf(fp, "this is file game ...\n");
    fputs("this is file game ...\n", fp);
    fclose(fp);
}

void read_file(){
    char buffer[255];

    fp = fopen("./tmp/test.txt", "r");
    fgets(buffer, 255, (FILE*)fp);
    printf("1 : %s\n", buffer);

    fgets(buffer, 255, (FILE*)fp);
    printf("2 : %s\n", buffer);

    fgets(buffer, 255, (FILE*)fp);
    printf("3 : %s\n", buffer);

    fclose(fp);
}

struct book{
    int id;
    char name[30];
    char author[30];
};

typedef struct book BOOK;

void byte_game(){
    BOOK books[3];
    fp = fopen("./tmp/books.txt", "w");

    for(int i =0; i < 2; i++){
        printf("Please enter book details \n");
        printf("Book name: ");
        scanf("%s", &books[i].name);
        printf("Book author: \n");
        scanf("%s", &books[i].author);
        printf("Book id: \n");
        scanf("%d", &books[i].id);
        fwrite(&books[i], sizeof(books[i]), 1, fp);
    }
    fclose(fp);
    fp = fopen("./tmp.books.txt", "r");
    for(int i =0; i < 2; i++){
        printf("Book details: \n");
        fread(&books[i], sizeof(books[i]), 1, fp);
        printf("book id: %d\n", books[i].id);
        printf("book id: %s\n", books[i].name);
        printf("book id: %s\n", books[i].author);
    }
    fclose(fp);
}

void main(){
    byte_game();
}