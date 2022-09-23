
    FILE *pF = fopen("note.txt", "r");

    if (pF == NULL)
    {
        printf("Unable to open file!\n");
    }
    else
    {
        while (fgets(buffer, 255, pF) != NULL)
        {
            printf("%s", buffer);
        }
        printf("\n");
    }
   