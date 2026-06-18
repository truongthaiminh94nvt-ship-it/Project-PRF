void addMedicine(Medicine **medicines, int *count, int *capacity)
{
    if (*count == *capacity)
    {
        *capacity = *capacity == 0 ? 10 : *capacity * 2;
        *medicines = realloc(*medicines,
                             *capacity * sizeof(Medicine));
    }

    Medicine m;

    printf("Ma thuoc: ");
    scanf("%s", m.id);

    printf("Ten thuoc: ");
    getchar();
    fgets(m.name, 100, stdin);

    printf("Danh muc: ");
    scanf("%s", m.category);

    printf("So luong: ");
    scanf("%d", &m.quantity);

    printf("Gia: ");
    scanf("%f", &m.price);

    printf("Han su dung: ");
    scanf("%s", m.expiry_date);

    (*medicines)[*count] = m;
    (*count)++;
}
