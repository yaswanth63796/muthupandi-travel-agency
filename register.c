  
    #include<stdio.h>
#include<string.h>

struct registration
{
    char email[100];
    char pwd[100];
    char name[40];
    char address[150];
    char CityState[40];
    char gender[10];
    char state_or_prov[25];
    char country[20];
    int dd, mm, yy;
    int post_or_zipcode;
    long long int mobile_no;
};

int reg()
{
    struct registration R;

    printf(" \n\n\n                W E L C O M E ! ! !             W E L C O M E ! ! !               W E L C O M E ! ! ! \n\n\n");
    printf("                        W E L C O M E  T O   M U T H U P A N D I   T R A V E L    A G E N C I E S !!!! \n\n");
    printf("\n Please Register in the Form Below. \n");

    printf("NAME:\n");
    printf("Enter: ");
    getchar();
    fgets(R.name, 40, stdin);
    R.name[strcspn(R.name, "\n")] = 0;
    printf("-------------------------------------------------------------------------------------------------------------------------\n\n");
    
    printf("GENDER:\n");
    printf("Enter: ");
    getchar();
    fgets(R.gender, 10, stdin);
    R.gender[strcspn(R.gender, "\n")] = 0;
    printf("-------------------------------------------------------------------------------------------------------------------------\n\n");
    

    printf("HOME ADDRESS:\n");
    printf("Enter: ");
    fgets(R.address, 150, stdin);
    R.address[strcspn(R.address, "\n")] = 0;
    printf("-------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("DATE OF BIRTH (DD/MM/YYYY):\n");
    printf("Enter: ");
    scanf("%d/%d/%d", &R.dd, &R.mm, &R.yy);
    printf("-------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("CITY AND STATE:\n");
    printf("Enter: ");
    getchar(); 
    fgets(R.CityState, 40, stdin);
    R.CityState[strcspn(R.CityState, "\n")] = 0;
    printf("-------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("POSTAL OR ZIPCODE:\n");
    printf("Enter: ");
    scanf("%d", &R.post_or_zipcode);
    printf("-------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("COUNTRY:\n");
    printf("Enter: ");
    getchar();
    fgets(R.country, 20, stdin);
    R.country[strcspn(R.country, "\n")] = 0;
    printf("-------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("PHONE NUMBER:\n");
    printf("Enter: ");
    scanf("%lld", &R.mobile_no);
    printf("-------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("EMAIL ADDRESS:\n");
    printf("Enter: ");
    getchar(); 
    fgets(R.email, 100, stdin);
    R.email[strcspn(R.email, "\n")] = 0; 
    printf("-------------------------------------------------------------------------------------------------------------------------\n\n");


  printf("PASSWORD:\n");
    printf("Enter: ");
    getchar(); 
    fgets(R.pwd, 100, stdin);
    R.pwd[strcspn(R.pwd, "\n")] = 0; 
    printf("-------------------------------------------------------------------------------------------------------------------------\n\n");
    return 0;
}

int main()
{
    reg();
    return 0;
}