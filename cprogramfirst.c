#include<stdio.h>
#include<string.h>
void reg();
void DestinationTable();

void MeenakshiAmman();
void thanjaikovil();
void rameswaram();
void srirangam();
void Mahabalipuram();
void sabarimalai();
void thirupathi();
void vellorekotai();

void packageDetails();
void bookStayHotel();
void transportation();
void travelguide();
void conclusion();

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
//REGISTRATION MODULE
void reg()
{
    struct registration R;

    printf("\n\n                 W E L C O M E ! ! !             W E L C O M E ! ! !               W E L C O M E ! ! ! \n\n\n");
    printf("                                  W E L C O M E   T O   M U T H U PA N D I    T R A V E L S\n\n");
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

    printf("                        REGISTRATION SUCCESSFUL!!!");
}

//DESTINATION TABLE MODULE
void DestinationTable() 
{   
    int x;
    printf("\n\nClick and enter 1 for the next step!!!");
    scanf("%d",&x);
    printf("\n*\n");
    printf("                          O  U  R      S  E  R  V  I  C  E  S \n");
    printf("\n*\n");
    
    int rows = 8;
    int cols = 2;
    printf("\n\n----------------------------------------------------------------------------------------------");
    printf("\n\n\n Welcome !!! Below are the list of our services that we provide! Take a look at them!\n\n\n");
    printf("----------------------------------------------------------------------------------------------\n\n\n");


    char table[8][2][50] = {
        {"Coimbatore", "Madurai Meenakshiamman Temple"},
        {"Coimbatore", "Thanjai Periya Kovil         "},
        {"Coimbatore", "Rameshwaram                  "},
        {"Coimbatore", "Srirangam temple             "},
        {"Coimbatore", "Mahaballipuram               "},
        {"Coimbatore", "Sabarimalai                  "},
        {"Coimbatore", "Tirupathi                    "},
        {"Coimbatore", "Vellore Kotai                "},

    };
    for (int i = 0; i < cols; i++) {
        printf("|===============================|");
    }
    printf("\n");

    printf("| %s       || %s|\n", "      FROM            ", "     DESTINATION               ");
    for (int i = 0; i < cols; i++) {
        printf("|===============================|");
    }
    printf("\n");
 for (int i = 0; i < rows; i++) {

        printf("|%17s             || %-17s |\n", table[i][0], table[i][1]);


        for (int i = 0; i < cols; i++) {
            printf("|===============================|");

        }
        printf("\n");
    }
}

//SHOULD SELECT AN OPTION. FUNCTION FOR IT LATER.


//MEENAKSHIAMMAN TEMPLE MODULE

void MeenakshiAmman()
{
    printf("\n\n      **********************************************************************************************************************\n\n");
    printf("                                          WELCOME TO THE MADURAI MEENAKSHI AMMAN TEMPLE PACKAGE\n");
    printf("      ***********************************************************************************************************************\n\n");
    printf("                                  D E S C R I P T I O N:\n");
    printf("                                  **********************\n\n");
    printf("Arulmigu Meenakshi Sundareswarar Temple, also known as Arulmigu Meenakshi Amman Thirukkovil, is a\n historic Hindu temple located on the southern bank of the Vaigai River in the temple \ncity of Madurai, Tamil Nadu, India.\n");
    printf("It is dedicated to the goddess Meenakshi Amman, a form of Parvati, and her consort, Sundareshwarar,\n a form of Shiva. The temple is at the centre of the ancient temple city of Madurai \nmentioned in the Tamil Sangam literature, with the goddess temple mentioned in 6th-century CE texts. \n");
    printf("This temple is one of the Paadal Petra Sthalams, which are 275 temples of Shiva that are revered in\n the verses of Tamil Saiva Nayanars of the 6th-9th century CE\n\n\n");

}

//Thanjai Peruvudayar Kovil

void thanjaikovil()
{   
    printf("\n\n      **********************************************************************************************************************\n");
    printf("\n                           !!!!!WELCOME TO THE THANJAI PERIYA KOVIL PACKAGE!!!!!\n");
    printf("\n      ***********************************************************************************************************************\n\n");
    printf("*\n\n");
    printf("                                  D E S C R I P T I O N:\n");
    printf("                                  **********************\n\n");
    printf("Brihadishvara Temple, called Rajarajesvaram  by its builder, and known locally as Thanjai Periya Kovil\n  and Peruvudaiyar Kovil") ;
    printf("itis a Shaivite Hindu temple built in a Chola architectural style \nlocated on the south bank of the Cauvery river in Thanjavur.\n");
    printf("It is one of the largest Hindu temples and an exemplar of Tamil architecture.\n It is also called Dakshina Meru  Built by Chola emperor Rajaraja I between\n 1003 and 1010 CE\n\n"); 
    printf( "---------------------------------------------------------------------------------------------------------------------------------------\n");
    printf( "---------------------------------------------------------------------------------------------------------------------------------------\n");
    
}

//RAMESWARAM MODULE

void rameswaram()
{   
    printf("\n\n      **********************************************************************************************************************\n");
    printf("\n                          !!!!!WELCOME TO THE RAMESHWARAM PACKAGE!!!!!\n");
    printf("\n      ***********************************************************************************************************************\n\n");
    printf(" \n\n                                 D E S C R I P T I O N:\n");
    printf("                                  **********************\n\n");
  printf("Rameswaram  also transliterated as Ramesvaram, Rameshwaram is a municipality in the Ramanathapuram district of the Indian state of Tamil Nadu. It is on Pamban Island separated from mainland India by the Pamban channel and is about 40 kilometres from srilanka.\n");
  printf("It is in the Gulf of Mannar, at the tip of the Indian peninsula Pamban Island, also known as Rameswaram Island, is connected to mainland India by the Pamban Bridge.\n");
  
    printf( "---------------------------------------------------------------------------------------------------------------------------------------\n");
    printf( "---------------------------------------------------------------------------------------------------------------------------------------\n");
    
}

//SRIRANGAM MODULE

void srirangam()
{   
    printf("\n\n      **********************************************************************************************************************\n");
    printf("\n                           !!!!!WELCOME TO THE SRIRANGAM TEMPLE PACKAGE!!!!!\n");    
    printf("\n      ***********************************************************************************************************************\n\n");
    printf("                                  D E S C R I P T I O N:\n");
    printf("                                  **********************\n\n");
   printf("The Ranganathaswamy Temple is a Hindu temple dedicated to Ranganatha  and his consort Ranganayaki a form of Lakshmi\nThe temple is located in Srirangam, Tiruchirapalli, Tamil Nadu, India.");
  printf("It isConstructed in the Dravidian architectural style..\n The temple is glorified by the Tamil poet-saints");
 printf("It is called the Alvars in their canon, the Naalayira Divya Prabhandam..\n It has the unique distinction of being the foremost among the 108 Divya Desams dedicated to the god Vishnu.\n\n\n");
    printf( "---------------------------------------------------------------------------------------------------------------------------------------\n");
    printf( "---------------------------------------------------------------------------------------------------------------------------------------\n");
    
}

//MAHABALIPURAM MODULE

void Mahabalipuram()
{   
    printf("\n\n      **********************************************************************************************************************\n");
    printf("\n                          !!!!!WELCOME TO THE MAHABALIPURAM PACKAGE!!!!!\n");
    printf("\n      ***********************************************************************************************************************\n\n");
    printf("                                  D E S C R I P T I O N:\n");
    printf("                                  **********************\n\n");
    printf("Mahabalipuram is a town in Chengalpattu district in the southeastern Indian state of Tamil Nadu, best\nknown for the UNESCO World Heritage Site of 7th- and 8th-century Hindu Group of Monuments\n at Mahabalipuram.\nIt is one of the famous tourist sites in India. The ancient name of the place is Thirukadalmallai.\n It is a part of Chennai Metropolitan Area. It is a satellite town of Chennai.Mamallapuram was one \nof two major port cities in the Pallava kingdom.\n The town was named after Pallava king Narasimhavarman I, who was also known as Mamalla.\n Along with economic prosperity, it became the site of a group of \nroyal monuments, many carved out of the living rock...\n\n\n");
    printf( "---------------------------------------------------------------------------------------------------------------------------------------\n");
    printf( "---------------------------------------------------------------------------------------------------------------------------------------\n");
    
}

//SABARIMAMALI MODULE

void sabarimalai()
{   
    printf("\n\n      **********************************************************************************************************************\n");
    printf("\n                           !!!!!WELCOME TO THE SABARIMALAI AYYAPPAN TEMPLE PACKAGE!!!!!\n");
    printf("\n      ***********************************************************************************************************************\n\n");
    printf("                                  D E S C R I P T I O N:\n");
    printf("                                  **********************\n\n");
    printf("The Sabarimala Sree Dharma Sastha Temple  is a Hindu temple dedicated to the god Ayyappan, who is also known as Dharma Shasta and is the\n son of the deities Shiva and Mohini.The temple is situated atop the Sabarimala hill in the village of Ranni-Perunad.\nIt iswithin theRanni Taluk of the Pathanamthitta district in the state of Kerala, India. The temple \nis surrounded by 18 hills in the Periyar Tiger Reserve.It is one of the largest annual pilgrimage sites\n in the world, with an estimate of over 10 to 15 million devotees visiting every year...\n\n\n");
    printf( "---------------------------------------------------------------------------------------------------------------------------------------\n");
    printf( "---------------------------------------------------------------------------------------------------------------------------------------\n");


}

//TIRUPATHI MODULE

void thirupathi()
{   
    printf("\n\n      **********************************************************************************************************************\n");
    printf("\n                          !!!!!WELCOME TO THE TIRUPATHI TEMPLE PACKAGE!!!!!\n");
    printf("\n      ***********************************************************************************************************************\n\n");
    printf("                                  D E S C R I P T I O N:\n");
    printf("                                  **********************\n\n");
    printf("Tirupati is a city in the Indian state of Andhra Pradesh and serves as the administrative headquarters of Tirupati district.\n It is known for its significant religious and cultural heritage, being home to the renowned Tirumala\n Venkateswara Temple, a major Hindu pilgrimage site, as well as other historic temples. The temple is one of the \neight Svayam Vyakta Kshetras  dedicated to the deity Vishnu. Tirupati is situated 150 km from Chennai,\n 250 km from Bangalore, and 406 km from Amaravati.\n\n\n");
    printf( "---------------------------------------------------------------------------------------------------------------------------------------\n");
    printf( "---------------------------------------------------------------------------------------------------------------------------------------\n");

}

//VELLORE KOTAI MODAIL

void vellorekotai()
{   
    printf("\n\n      **********************************************************************************************************************\n");
    printf("\n\n                           !!!!!WELCOME TO THE VELLORE FORT PACKAGE!!!!!\n");
    printf("\n      ***********************************************************************************************************************\n\n");
    printf("                                  D E S C R I P T I O N:\n");
    printf("                                  **********************\n\n");
    printf("Vellore Fort is a large 16th-century fort situated in heart of the Vellore city, in the state of Tamil Nadu, India built by the Emperors of Vijayanagara. The fort was at one time the imperial capital of the Aravidu Dynasty of the Vijayanagara Empire. The fort is known\n for its grand ramparts, wide moat and robust masonry.Vellore Fort was built by Chinna Bommi Reddi and Thimma Nayak, subordinate chieftains under emperor Sadasiva Raya of the Vijayanagara Empire in the year 1566 CE. The Fort gained strategic prominence following the re-establishment of Vijayanagara rule with Chandragiri as their 4th capital after the Battle of Talikota. The Aravidu Dynasty that held the title of Rayas in 17th century resided in this fort, using it as a base in the battle of Toppur in the 1620s....\n\n\n");
    printf( "---------------------------------------------------------------------------------------------------------------------------------------\n");
    printf( "---------------------------------------------------------------------------------------------------------------------------------------\n");

}


//DETAILS FOR PACKAGE


struct package
{
    char name[30];
    int age;
    char gender[10];
    long long int aadhar;
};

void packageDetails()
{
    int N;
    int day,month,year,next;
    printf("Date of Travelling(mention the date of the first day and mention the total number of days right after):  ");
    scanf("%d/%d/%d-%d",&day,&month,&year,&next);
    printf("\n\nEnter number of persons: ");
    scanf("%d",&N);
    printf("\n\n");
    printf("               PLEASE ENTER THE DETAILS OF INDIVIDUAL PERSONS");
    printf("\n\n");
    struct package S[N];
    for(int i=0;i<N;i++)
    {
        printf("----------------\n");
        printf("For PERSON %d:\n",i+1);
        printf("----------------\n\n");
        printf("Name:");
        getchar();
        fgets(S[i].name,30,stdin);
        S[i].name[strcspn(S[i].name,"\n")]=0;
        printf("Age:");
        scanf("%d",&S[i].age);
        printf("Gender:");
        scanf("%s",S[i].gender);
        printf("Aadhar number:");
        scanf("%llu",&S[i].aadhar);
        printf("\n\n");
    }
    printf("\n\n                        T H A N K     Y O U   !!!!\n\n\n");
    
}

//HOTEL BOOKINGS

struct Hotels{
    char htl[50];
    int price;
}Mh[5];
void bookStayHotel()
{
    int p,q;
    printf("Click and enter to get HOTEL DETAILS and BOOKINGS.   ");
    scanf("%d",&p);
    printf( "\n\n------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("                      *****MOST PREFERRED HOTELS AROUND MEENAKSHI AMMAN TEMPLE*\n");
    printf( "------------------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("\n                         Book Your Desired Hotel From The Below Available Hotel List!!!\n\n ");
    printf("Click and enter to further continue ");
    scanf("%d",&q);
    printf("\n\n\n");

strcpy(Mh[0].htl," ASTORIA HOTELS");
strcpy(Mh[1].htl,"  JC RESIDENCY");
strcpy(Mh[2].htl,"  HOTEL RATHNA RESIDENCY");
strcpy(Mh[3].htl,"  HOTEL ASHOK");
strcpy(Mh[4].htl,"  HOTEL LOTUS");
puts(Mh[0].htl);
puts(Mh[1].htl);
puts(Mh[2].htl);
puts(Mh[3].htl);
puts(Mh[4].htl);

int num,days;
printf("\n\n\n  Enter the number of stayers(maximum 8 members):");
scanf("%d",&num);
printf("\nEnter the number of days for stay: ");
scanf("%d",&days);

Mh[0].price=2000;
Mh[1].price=1875;
Mh[2].price=3460;
Mh[3].price=3075;
Mh[4].price=5500
;
int a;
printf("\n\n\n  Which hotel do you prefer?Click and enter 1/2/3/4/5.");
scanf("%d",&a);
printf("\n");
switch(a)
{
    case 1:
    printf("----------------------------\n");
    puts(Mh[0].htl);
    printf("----------------------------\n\n");
     printf("\n\n**\n");
    printf("   For %d persons staying for %d days -> Total Charge is Rupees %d",num,days,(Mh[0].price)*num*days);
    printf("\n**\n");
    break;

    case 2:
    printf("----------------------------\n");
    puts(Mh[1].htl);
    printf("----------------------------\n");
     printf("\n\n**\n");
    printf("    For %d persons staying for %d days -> Total Charge is Rupees %d",num,days,(Mh[1].price)*num*days);
    printf("\n**\n");
    break;

    case 3:
    printf("----------------------------\n");
    puts(Mh[2].htl);
    printf("----------------------------\n");
    printf("\n\n**\n");
    printf("   For %d persons staying for %d days -> Total Charge is Rupees %d",num,days,(Mh[2].price)*num*days);
    printf("\n**\n");
    break;

    case 4:
    printf("----------------------------\n");
    puts(Mh[3].htl);
    printf("----------------------------\n");
    printf("\n\n**\n");
    printf("   For %d persons staying for %d days -> Total Charge is Rupees %d",num,days,(Mh[3].price)*num*days);
    printf("\n**\n");
    break;

    case 5:
    printf("----------------------------\n");
    puts(Mh[4].htl);
    printf("----------------------------\n");
    printf("\n\n**\n");
    printf("    For %d persons staying for %d days -> Total Charge is Rupees %d",num,days,(Mh[4].price)*num*days);
    printf("\n**\n");
    break;

    default:printf("Seems like the hotel choice is out of service, Sorry...");
}
printf("\n\n     CONFIRM BOOKINGs? Click and enter 0 for confirmation.");
int b;
scanf("%d",&b);
if(b==0)
{
printf("\n           --------------------------------------\n");
printf("                    BOOKING SUCCESSFUL!!!");
printf("\n           --------------------------------------\n");
}

}

//TRANSPORTATION

struct transportdetails
{
    char busname[30];
    char inf[25];
    char sleeper[15];
    int price;
}M[5];
void transportation()
{
    printf("\n\n\n THANK YOU FOR BOOKING HOTEL!! Make sure you have recieved an email regarding this.\n\n");
    printf("                    LOOKING FORWARD FOR TRANSPORTATION BOOKINGS?(BUS)");
    printf("\n\nClick and enter a key to know bus availability. ");
    int a;
    scanf("%d",&a);
    printf("\n\n*\n");
    printf("                     B  U  S       D  E  T  A  I  L  S\n");
    printf("*");


strcpy(M[0].busname,"Egloo Travels");
strcpy(M[1].busname,"Krish Travels");
strcpy(M[2].busname,"Sri Travels");
strcpy(M[3].busname,"Vinoth Tours");
strcpy(M[4].busname,"Intercity Smart");

strcpy(M[0].inf,"Direct bus");
strcpy(M[1].inf,"Indirect bus");
strcpy(M[2].inf,"Direct bus");
strcpy(M[3].inf,"Indirect bus");
strcpy(M[4].inf,"Direct bus");

strcpy(M[0].sleeper,"Sleeper");
strcpy(M[1].sleeper,"AC N-Sleeper");
strcpy(M[2].sleeper,"N-Sleeper");
strcpy(M[3].sleeper,"AC Sleeper");
strcpy(M[4].sleeper,"AC Sleeper");

M[0].price=650;
M[1].price=495;
M[2].price=740;
M[3].price=820;
M[4].price=565;

printf("\n\n[=======================|=======================|======================|=====================]\n");
printf("[        BUSNAME        |         INFO          |      TYPE            |     PRICE           ]\n");
printf("[=======================|=======================|======================|=====================]\n");
for(int i=0;i<5;i++)
{
printf("[%15s        |%15s        |%15s       |   %d               ]\n",M[i].busname,M[i].inf,M[i].sleeper,M[i].price);
printf("[-----------------------|-----------------------|----------------------|---------------------]\n");
}

int num;
printf("\nEnter the number of travellers of all ages(can accomodate 8 people at max): ");
scanf("%d",&num);

int choice;
printf("\nEnter your choice of BUS travels(1/2/3/4/5):  ");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    printf("\n\n~\n");
    printf("%8s \n %8s \n %8s \n For %d persons -> %d Rupees\n",M[0].busname,M[0].inf,M[0].sleeper,num,num*M[0].price);
    printf("\n\n");
    break;

    case 2:
    printf("\n\n~\n");
    printf("%8s \n %8s \n %8s \n For %d persons -> %d Rupees\n",M[1].busname,M[1].inf,M[1].sleeper,num,num*M[1].price);
    printf("~\n\n");
    break;

    case 3:
    printf("\n\n~\n");
    printf("%8s \n %8s \n %8s \n For %d persons -> %d Rupees\n ",M[2].busname,M[2].inf,M[2].sleeper,num,num*M[2].price);
    printf("~\n\n");
    break;

    case 4:
    printf("\n\n~\n");
    printf("%8s \n %8s \n %8s \n For %d persons -> %d Rupees\n",M[3].busname,M[3].inf,M[3].sleeper,num,num*M[3].price);
    printf("~\n\n");
    break;

    case 5:
    printf("\n\n~\n");
    printf("%8s \n %8s \n %8s \n For %d persons -> %d Rupees\n",M[4].busname,M[4].inf,M[4].sleeper,num,num*M[4].price);
    printf("~\n\n");
    break;

    default:printf("We are not sure about the availability, sorry...");

}

}

//TRAVEL GUIDE MODULE


void travelguide()
{
    printf("\n\n**\n");
    printf("         T R A V E L    G U I D E    O P T I O N S");
    printf("\n\n");
    printf("   Travel guide required?\n");
    printf("If needed, then click 1.\n\nIf not needed, then click 0.\n\n Give option here  :");
    int tg;
    scanf("%d",&tg);

    switch(tg)
    {
        case 1:
        printf("The Guide details are sent to you via EMAIL !.\n Travel Guide's contact details are sent via email as well.\n Payment details are to be discussed at the end of yout trip!!\n\n");
        break;
        
        default: printf("\n\n       Travel Guide not needed.\n\n");
        break;
    }
    
    
}
void conclusion()
{
    printf("\n\n\n\n\n *----------------------------------------------------*");
        printf("                                 Y  O  U  R     T  R  A  V  E  L    P  A  C  K  A  G  E     H  A  S    B  E  E  N     B  O  O  K  E  D  !!!! \n\n");
        printf("                             A   C O P Y   O F   Y O U R   B I L L/R E C I E P T   H A S   B E E N   S E N T   T O   Y O U   V I A   E M A I L.\n");
        printf("                                                  Please Check it out and notify us for furthur clarification.\n\n\n\n");
        printf("    A             V    E    R    Y              H      A      P      P      Y               J      O      U      R      N      E      Y           !  !  !  !  !  !\n\n");
        printf("----------------------------------------------------\n");
}

int main()
{
    reg();
    DestinationTable();
    
    int select;
    printf("Please Select your desired Travel Package(!/2/3/4/5/6/7/8/):  ");
    scanf("%d",&select);
    printf("\n\nTHANK YOU FOR CHOOSING !!!! \n\n\n");
    switch(select)
    {
        case 1:
        MeenakshiAmman();
        packageDetails();
        bookStayHotel();
        transportation();
        travelguide();
        conclusion();
        break;
    
        case 2:
        thanjaikovil();
        packageDetails();
        bookStayHotel();
        transportation();
        travelguide();
        conclusion();
        break;
    
        case 3:
        rameswaram();
        packageDetails();
        bookStayHotel();
        transportation();
        travelguide();
        conclusion();
        break;
    
        case 4:
        srirangam();
        packageDetails();
        bookStayHotel();
        transportation();
        travelguide();
        conclusion();
        break;
        
        case 5:
        Mahabalipuram();
        packageDetails();
        bookStayHotel();
        transportation();
        travelguide();
        conclusion();
        break;
        
        case 6:
        sabarimalai();
        packageDetails();
        bookStayHotel();
        transportation();
        travelguide();
        conclusion();
        break;
        
        case 7:
        thirupathi();
        packageDetails();
        bookStayHotel();
        transportation();
        travelguide();
        conclusion();
        break;
        
        case 8:
        vellorekotai();
        packageDetails();
        bookStayHotel();
        transportation();
        travelguide();
        conclusion();
        break;
    }
    return 0;
}