# Fle Pointers

* File manipulation is part of the stdio.h library in C.
    <!-- open file -->
    - FILE* ptr = fopen(<filename>, <operation>);
      FILE* ptr1 = fopen("file1.txt", "r");
      FILE* ptr2 = fopen("file2.txt", "w");
      FILE* ptr3 = fopen("file3.txt", "a");

    <!-- close file -->
    - fclose(<file pointer>);
      fclose(<ptr1>);

    <!-- file get character -->
    - char ch = fgetc(<file pointer>);
      fgetc(<ptr1>);

      char ch;
      while((ch = fgetc(ptr)) != EOF)
      printf("%c", ch);

      * It does the same as the linux command `cat`

    - fputc(<character>, <file pointer>);
      fputc('A', ptr2);
      fputc('!', ptr3);

      char ch;
      while((ch = fgetc(ptr)) != EOF)
        fputc(ch, ptr2);

      * It does the same as the linux command `cp`


    - fread(<buffer>, <size>, <qty>, <file pointer>);
    int arr[10];
    fread(arr, sizeof(int), 10, ptr);

    double* arr2 - malloc(sizeof(double) * 80);
    fread(arr2,  sizeof(double), 80, ptr);

    char c;
    fread(&c, sizeof(char), 1, ptr);

    - fwrite(<buffer>, <size>, <qty>, <file pointer>);
    int arr[10];
    fwrite(arr, sizeof(int), 10, ptr);

    char c;
    fwrite(&c, sizeof(char), 1, ptr);


* all accept FILE* as one of their parameters, except for the fopen, which is used to get a file pointer in the first place.



