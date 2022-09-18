#include <stdio.h>
#include <cs50.h>

// Simple Coffee Ordering Program (1st Edition) By Mohamed Mostafa

// Function Declaration
void menu(void);
void menu_prompt(void);


// Main Function
int main(void)
{
    // Variables Declarations
    long userid = 123456789; long user_password = 147852369;long id;long password;

    // UI
    printf("\n\n[`][`][`][`][`][`][`][`][`][`][`][`][`][`] Death-Wish Coffee Shop [`|`][`][`][`][`][`][`][`][`][`][`][`][`][`][`]\n\n\n\n\n");
    printf("                        ----------------------- [!] Login ------------------------\n\n");

    // User Input
    id = get_long("[?] Enter Your ID: ");
    password = get_long("\n[?] Enter Your Password: ");

    // User Input Conditions
    if(id == userid && password == user_password)
    {
        printf("\n\n[^_^] User Found, Logging In...\n\n");
        menu_prompt();
    }
    else
    {
        printf("\n[X] Incorrect User ID or Password\n\n\n\n\n\n\n\n\n\n\n");
    }
}

// Display Menu Prompt
void menu_prompt(void){
    char display;
    do
    {
         display = get_char("\n\n[*] View Menu? (Y => Menu / N => Logout): ");
        if(display == 'Y' || display == 'y')
        {
            menu();
        }
        else if(display == 'N' || display == 'n')
        {
            printf("\n\n[-] Logging Out From Death-Wish Coffee Shop :/\n\n");
        }
    }while(display != 'y' && display != 'n' && display != 'Y' && display != 'N');
}


// Menu Display Function
void menu(void)
{
    // Variables Declaration
    int item1 = 1; float item1_price = 0.55; int item1_in_stock = 25;
    int item2 = 2; float item2_price =  0.67; int item2_in_stock = 20;
    int item3 = 3; float item3_price = 0.93; int item3_in_stock = 15;
    string items_number = "Coffee Number";string items_prices = "Coffee Price";string items_in_stock = "In Stock";
    int choice;int amount;string items_name = "Coffee Name";string item1_name = "Espresso";string item2_name = "Americano";
    string item3_name = "Ristretto";float amount_calculation;

    // Menu
    printf("\n\n\n\n[`] Coffee Menu \n");
    printf("\n-----------------------------------------------------------------------------------------------------------\n");
    printf("%s%s%s%s%s%s%s%s%s","|      ",items_name,"     |       ",items_number,"        |           ",items_prices,"        |          ",items_in_stock,"   |");
    printf("\n-----------------------------------------------------------------------------------------------------------\n");
    printf("%s%s%s%i%s%.2f%s%i%s","|      ",item1_name,"                     ",item1,"                               ",item1_price,"                          ",item1_in_stock,"      |");
    printf("\n-----------------------------------------------------------------------------------------------------------\n");
    printf("%s%s%s%i%s%.2f%s%i%s","|      ",item2_name,"                    ",item2,"                               ",item2_price,"                          ",item2_in_stock,"      |");
    printf("\n-----------------------------------------------------------------------------------------------------------\n");
    printf("%s%s%s%i%s%.2f%s%i%s","|      ",item3_name,"                    ",item3,"                               ",item3_price,"                          ",item3_in_stock,"      |");
    printf("\n-----------------------------------------------------------------------------------------------------------\n\n");

    // User Choice Conditions
    do
    {
        choice = get_int("[`] Choose From Menu: ");
        if(choice == 1)
        {
            do{amount = get_int("\n[`] How Many Espresso's Do You Need?: ");}while(amount < 1 || amount >= 25);
            if(amount == 1)
            {
                printf("\n[`] Your Ordered 1 Espresso For 0.55 Cent, Hang Tight Your Order Is Being Processed!..\n");
            }
            else
            {
                amount_calculation = amount * 0.55;
                printf("\n[`] Your Ordered %i%s%.2f%s%s",amount," Espresso For ",amount_calculation,"$" ,", Hang Tight Your Order Is Being Processed!..\n");
            }
        }
        else if(choice == 2)
        {
            do{amount = get_int("\n[`] How Many Amircano's Do You Need?: ");}while(amount < 1 || amount >= 20);
            if(amount == 1)
            {
                printf("\n[`] Your Ordered 1 Amircano For 0.67 Cent, Hang Tight Your Order Is Being Processed!..\n");
            }
            else
            {
                amount_calculation = amount * 0.67;
                printf("\n[`] Your Ordered %i%s%.2f%s%s",amount," Amircano For ",amount_calculation,"$",", Hang Tight Your Order Is Being Processed!..\n");
            }
        }
        else if(choice == 3)
        {
            do{amount = get_int("\n[`] How Many Ristretto's Do You Need?: ");}while(amount < 1 || amount >= 15);
            if(amount == 1)
            {
                printf("\n[`] Your Ordered 1 Ristretto For 0.93 Cent, Hang Tight Your Order Is Being Processed!..\n");
            }
            else
            {
                amount_calculation = amount * 0.93;
                printf("\n[`] Your Ordered %i%s%.2f%s%s",amount," Ristretto For ",amount_calculation,"$",", Hang Tight Your Order Is Being Processed!..\n");
            }
        }
    }while(choice < 1 || choice > 3);
    // Prompt User Conditions
    char question;
    do
    {
        question = get_char("\n[`] Do You Wish To Place Another Order? (Y / N): ");
        if(question == 'y' || question == 'Y')
        {
            menu();
        }
        else if(question == 'N' || question == 'n')
        {
            printf("\n[^_^] Alright, Thanks For Ordering From Death-Wish Coffee Shop <3\n\n");
        }
    }while(question != 'Y' && question != 'y' && question != 'n' && question != 'N');
}
