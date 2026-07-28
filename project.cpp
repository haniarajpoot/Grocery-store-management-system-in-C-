#include<iostream>
using namespace std;
int main_menu()
{
	int choice;
	cout << "WELCOME TO OUR STORE" << endl;
	cout << "press 1 : to start shopping" << endl;
	cout << "press 2 : to return an item" << endl;
	cout << "press 3 : to exit " << endl;
	cin >> choice;

	return choice;
}
int categories()
{
	int category_choice;
	cout << "Select the category from where you want to shop" << endl;
	cout << "Press 1 : for fruits " << endl;
	cout << "Press 2 : for vegetables" << endl;
	cout << "Press 3 : for dairy products " << endl;
	cout << "Press 4 : for meat " << endl;
	cout << "Press 5 : for dry and canned goods " << endl;
	cout << "Press 6 : for frozen foods " << endl;
	cout << "Press 7 : for cleaning supplies " << endl;
	cout << "Press 8 : for cosmetics " << endl;
	cout << "Press 9 : for drinks " << endl;
	cout << "Press 10 : for snacks " << endl;
	cin >> category_choice;
	return category_choice;
}
struct Item 
{
	string name;
	int price;
	int quantity; 
};
int fruits() 
{
	Item fruits[] = {{"Apples", 150, 50},{"Grapes", 180, 30},{"Strawberries", 200, 20},{"Pineapple", 150, 25},{"Mangoes", 250, 40},
		{"Watermelon", 80, 15},{"Peaches", 150, 10},{"Cherries", 150, 8},{"Kiwis", 150, 35},{"Pears", 150, 30},{"Plums", 180, 20},
		{"Raspberries", 150, 12},{"Pomegranates", 300, 10},{"Bananas", 120, 50},{"Oranges", 120, 50}};

	int fruits_choice, fruits_quantity;
	char user_choice;
	int fruits_bill = 0;

	do {
		cout << "Fruits with their prices and available quantities" << endl;
		for (int i = 0; i < 15; i++)
		{
			cout << "Press " << i + 1 << " : " << fruits[i].name << "\t\t"<< fruits[i].price << "Rs per kg" << "\tQuantity available: "<< fruits[i].quantity << " kg" << endl;
		}

		cout << "Select the fruit and enter the quantity you want to buy" << endl;
		cin >> fruits_choice >> fruits_quantity;

		if (fruits_choice < 1 || fruits_choice > 15)
		{
			cout << "Invalid choice entered. Please try again." << endl;
		}
		else if (fruits_quantity > fruits[fruits_choice - 1].quantity) 
		{
			cout << "Sorry, we only have " << fruits[fruits_choice - 1].quantity << " kg of "<< fruits[fruits_choice - 1].name << " in stock." << endl;
		}
		else 
		{
			fruits_bill += fruits[fruits_choice - 1].price * fruits_quantity;
			fruits[fruits_choice - 1].quantity -= fruits_quantity;  
			cout << "You bought " << fruits_quantity << " kg of " << fruits[fruits_choice - 1].name<< ". Current stock: " << fruits[fruits_choice - 1].quantity << " kg" << endl;
		}

		cout << "Do you want to select more fruits? (y/n)" << endl;
		cin >> user_choice;

	} while (user_choice == 'Y' || user_choice == 'y');

	cout << "Your total bill is: " << fruits_bill << " Rs" << endl;
	return fruits_bill;
}
int vegetables() 
{
	Item vegetables[] = {{"Carrots", 150, 50},{"Broccoli", 180, 30},{"Spinach", 200, 20},{"Tomatoes", 150, 25},
		{"Cucumbers", 50, 40},{"Bell Peppers (Green)", 80, 35},{"Bell Peppers (Yellow)", 80, 25},{"Bell Peppers (Red)", 80, 15},
		{"Cauliflower", 150, 10},{"Potatoes", 150, 50},{"Onion", 150, 60},{"Garlic", 150, 40},{"Peas", 180, 30},
		{"Eggplant", 150, 20},{"Cabbage", 300, 12},{"Radishes", 120, 30},{"Lettuce", 120, 25}};

	int veg_choice, veg_quantity;
	char user_choice;
	int veg_bill = 0;

	do {
		cout << "Vegetables with their prices and available quantities" << endl;
		for (int i = 0; i < 17; i++)
		{
			cout << "Press " << i + 1 << " : " << vegetables[i].name<< "\t" << vegetables[i].price << "Rs per kg"<< "\tQuantity available: " << vegetables[i].quantity << " kg" << endl;
		}

		cout << "Select the vegetable and enter the quantity you want to buy" << endl;
		cin >> veg_choice >> veg_quantity;

		if (veg_choice < 1 || veg_choice > 17)
		{
			cout << "Invalid choice entered. Please try again." << endl;
		}
		else if (veg_quantity > vegetables[veg_choice - 1].quantity) 
		{	
			cout << "Sorry, we only have " << vegetables[veg_choice - 1].quantity<< " kg of " << vegetables[veg_choice - 1].name << " in stock." << endl;
		}
		else
		{	
			veg_bill += vegetables[veg_choice - 1].price * veg_quantity;
			vegetables[veg_choice - 1].quantity -= veg_quantity; 
			cout << "You bought " << veg_quantity << " kg of " << vegetables[veg_choice - 1].name<< ". Current stock: " << vegetables[veg_choice - 1].quantity << " kg" << endl;
		}

		cout << "Do you want to select more vegetables? (y/n)" << endl;
		cin >> user_choice;

	} while (user_choice == 'Y' || user_choice == 'y');

	cout << "Your total bill for vegetables is: " << veg_bill << " Rs" << endl;
	return veg_bill;
}
int dairy_products() 
{
	Item dairy[] = {{"Milk", 150, 100},{"Yogurt", 180, 80},{"Cheddar cheese", 200, 50},{"Mozzarella cheese", 800, 20},
		{"Feta cheese", 500, 30},{"Butter", 800, 25},{"Cream", 250, 40},{"Cottage cheese", 150, 60},{"Buttermilk", 150, 75},
		{"Whipped cream", 450, 30},{"Cream cheese", 280, 50},{"Ghee", 1500, 10}};

	int dairy_choice, dairy_quantity;
	char user_choice;
	int dairy_bill = 0;

	do {
		cout << "Dairy products with their prices and available quantities" << endl;
		for (int i = 0; i < 12; i++)
		{
			cout << "Press " << i + 1 << " : " << dairy[i].name<< "\t" << dairy[i].price << "Rs per kg"<< "\tQuantity available: " << dairy[i].quantity << " units" << endl;
		}

		cout << "Select the dairy product and enter the quantity you want to buy" << endl;
		cin >> dairy_choice >> dairy_quantity;

		if (dairy_choice < 1 || dairy_choice > 12)
		{
			cout << "Invalid choice entered. Please try again." << endl;
		}
		else if (dairy_quantity > dairy[dairy_choice - 1].quantity) 
		{
			cout << "Sorry, we only have " << dairy[dairy_choice - 1].quantity<< " units of " << dairy[dairy_choice - 1].name << " in stock." << endl;
		}
		else
		{	
			dairy_bill += dairy[dairy_choice - 1].price * dairy_quantity;
			dairy[dairy_choice - 1].quantity -= dairy_quantity;  
			cout << "You bought " << dairy_quantity << " units of " << dairy[dairy_choice - 1].name<< ". Current stock: " << dairy[dairy_choice - 1].quantity << " units" << endl;
		}

		cout << "Do you want to select more dairy products? (y/n)" << endl;
		cin >> user_choice;

	} while (user_choice == 'Y' || user_choice == 'y');

	cout << "Your total bill for dairy products is: " << dairy_bill << " Rs" << endl;
	return dairy_bill;
}
int meat()
{
		Item meatItems[] = {{"Chicken (boneless)", 250, 100},{"Chicken (wings)", 250, 80},{"Chicken (full)", 250, 50},
		{"Beef", 280, 60},{"Lamb", 200, 40},{"Fish", 800, 30},{"Eggs", 180, 100}};

	int meat_choice, meat_quantity;
	char user_choice;
	int meat_bill = 0;

	do {
		cout << "Meat with their prices and available quantities" << endl;
		for (int i = 0; i < 7; i++)
		{
			cout << "Press " << i + 1 << " : " << meatItems[i].name<< "\t" << meatItems[i].price << "Rs per kg/pack"<< "\tQuantity available: " << meatItems[i].quantity << " units" << endl;
		}

		cout << "Select the meat and enter the quantity you want to buy" << endl;
		cin >> meat_choice >> meat_quantity;

		if (meat_choice < 1 || meat_choice > 7) 
		{
			cout << "Invalid choice entered. Please try again." << endl;
		}
		else if (meat_quantity > meatItems[meat_choice - 1].quantity)
		{
			cout << "Sorry, we only have " << meatItems[meat_choice - 1].quantity<< " units of " << meatItems[meat_choice - 1].name << " in stock." << endl;
		}
		else
		{
			meat_bill += meatItems[meat_choice - 1].price * meat_quantity;
			meatItems[meat_choice - 1].quantity -= meat_quantity;  
			cout << "You bought " << meat_quantity << " units of " << meatItems[meat_choice - 1].name<< ". Current stock: " << meatItems[meat_choice - 1].quantity << " units" << endl;
		}

		cout << "Do you want to select more meat? (y/n)" << endl;
		cin >> user_choice;

	} while (user_choice == 'Y' || user_choice == 'y');

	cout << "Your total bill for meat is: " << meat_bill << " Rs" << endl;
	return meat_bill;
}
int dry_canned_foods() 
{
	Item cannedItems[] = {{"Pasta", 150, 100},{"Rice", 180, 80},{"Cereal", 200, 60},{"Oats", 800, 50},{"Lentils", 500, 70},
		{"Beans", 800, 40},{"Nuts", 250, 90},{"Flour", 150, 120},{"Sugar", 150, 110},{"Canned Beans", 450, 30},
		{"Canned Tomatoes", 280, 50},{"Canned Soup", 1500, 20},{"Canned Fruits", 280, 40},{"Canned Chicken Broth", 280, 35}};

	int canned_choice, canned_quantity;
	char user_choice;
	int canned_bill = 0;

	do {
		cout << "Dry and Canned Products with their prices and available quantities" << endl;
		for (int i = 0; i < 14; i++)
		{
			cout << "Press " << i + 1 << " : " << cannedItems[i].name<< "\t" << cannedItems[i].price << "Rs per unit"<< "\tQuantity available: " << cannedItems[i].quantity << " units" << endl;
		}

		cout << "Select the dry or canned product and enter the quantity you want to buy" << endl;
		cin >> canned_choice >> canned_quantity;

		if (canned_choice < 1 || canned_choice > 14)
		{
			cout << "Invalid choice entered. Please try again." << endl;
		}
		else if (canned_quantity > cannedItems[canned_choice - 1].quantity) 
		{
			cout << "Sorry, we only have " << cannedItems[canned_choice - 1].quantity<< " units of " << cannedItems[canned_choice - 1].name << " in stock." << endl;
		}
		else 
		{
			canned_bill += cannedItems[canned_choice - 1].price * canned_quantity;
			cannedItems[canned_choice - 1].quantity -= canned_quantity;  
			cout << "You bought " << canned_quantity << " units of " << cannedItems[canned_choice - 1].name<< ". Current stock: " << cannedItems[canned_choice - 1].quantity << " units" << endl;
		}

		cout << "Do you want to select more dry or canned products? (y/n)" << endl;
		cin >> user_choice;

	} while (user_choice == 'Y' || user_choice == 'y');

	cout << "Your total bill for dry and canned products is: " << canned_bill << " Rs" << endl;
	return canned_bill;
}

int frozen_foods()
{
	Item frozenItems[] = {{"Frozen Vegetables", 150, 50},{"Frozen Chicken Nuggets", 180, 40},{"Frozen Fries", 200, 60}};

	int frozen_choice, frozen_quantity;
	char user_choice;
	int frozen_bill = 0;

	do {
		cout << "Frozen Products with their prices and available quantities" << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << "Press " << i + 1 << " : " << frozenItems[i].name<< "\t" << frozenItems[i].price << "Rs per unit"<< "\tQuantity available: " << frozenItems[i].quantity << " units" << endl;
		}

		cout << "Select the frozen product and enter the quantity you want to buy" << endl;
		cin >> frozen_choice >> frozen_quantity;

		if (frozen_choice < 1 || frozen_choice > 3) 
		{
			cout << "Invalid choice entered. Please try again." << endl;
		}
		else if (frozen_quantity > frozenItems[frozen_choice - 1].quantity) 
		{
			cout << "Sorry, we only have " << frozenItems[frozen_choice - 1].quantity<< " units of " << frozenItems[frozen_choice - 1].name << " in stock." << endl;
		}
		else 
		{
			frozen_bill += frozenItems[frozen_choice - 1].price * frozen_quantity;
			frozenItems[frozen_choice - 1].quantity -= frozen_quantity;  
			cout << "You bought " << frozen_quantity << " units of " << frozenItems[frozen_choice - 1].name<< ". Current stock: " << frozenItems[frozen_choice - 1].quantity << " units" << endl;
		}

		cout << "Do you want to select more frozen products? (y/n)" << endl;
		cin >> user_choice;

	} while (user_choice == 'Y' || user_choice == 'y');

	cout << "Your total bill for frozen products is: " << frozen_bill << " Rs" << endl;
	return frozen_bill;
}
int cleaning_supplies() 
{
	Item supplies[] = {{"All-purpose cleaner", 220, 50},{"Disinfectant wipes", 180, 40},{"Glass cleaner", 200, 60},
		{"Bathroom cleaner", 200, 30},{"Floor cleaner", 200, 70},{"Laundry detergent", 200, 80},{"Dish soap", 200, 100},
		{"Sponges", 200, 150},{"Scrub brushes", 200, 120},{"Paper towels", 200, 90}};

	int supplies_choice, supplies_quantity;
	char user_choice;
	int supplies_bill = 0;

	do {
		cout << "Cleaning Supplies with their prices and available quantities" << endl;
		for (int i = 0; i < 10; i++)
		{
			cout << "Press " << i + 1 << " : " << supplies[i].name<< "\t" << supplies[i].price << "Rs"<< "\tQuantity available: " << supplies[i].quantity << " units" << endl;
		}

		cout << "Select the cleaning supply and enter the quantity you want to buy" << endl;
		cin >> supplies_choice >> supplies_quantity;

		if (supplies_choice < 1 || supplies_choice > 10) 
		{
			cout << "Invalid choice entered. Please try again." << endl;
		}
		else if (supplies_quantity > supplies[supplies_choice - 1].quantity) {
			cout << "Sorry, we only have " << supplies[supplies_choice - 1].quantity<< " units of " << supplies[supplies_choice - 1].name << " in stock." << endl;
		}
		else 
		{
			supplies_bill += supplies[supplies_choice - 1].price * supplies_quantity;
			supplies[supplies_choice - 1].quantity -= supplies_quantity;  
			cout << "You bought " << supplies_quantity << " units of " << supplies[supplies_choice - 1].name<< ". Current stock: " << supplies[supplies_choice - 1].quantity << " units" << endl;
		}

		cout << "Do you want to select more cleaning supplies? (y/n)" << endl;
		cin >> user_choice;

	} while (user_choice == 'Y' || user_choice == 'y');

	cout << "Your total bill for cleaning supplies is: " << supplies_bill << " Rs" << endl;
	return supplies_bill;
}
int cosmetics() 
{
	Item cosmetics[] = {{"Foundation", 2200, 50},{"Concealer", 1800, 40},{"Powder", 200, 100},{"Blush", 1200, 60},
		{"Eyeshadow", 2500, 30},{"Eyeliner", 1000, 80},{"Mascara", 1000, 70},{"Lipstick", 200, 150},
		{"Lip gloss", 200, 120},{"Nail polish", 200, 200}};

	int cosmetics_choice, cosmetics_quantity;
	char user_choice;
	int cosmetics_bill = 0;

	do 
	{
		cout << "Cosmetics with their prices and available quantities" << endl;
		for (int i = 0; i < 10; i++) 
		{
			cout << "Press " << i + 1 << " : " << cosmetics[i].name<< "\t" << cosmetics[i].price << "Rs"<< "\tQuantity available: " << cosmetics[i].quantity << " units" << endl;
		}

		cout << "Select the cosmetic and enter the quantity you want to buy" << endl;
		cin >> cosmetics_choice >> cosmetics_quantity;

		if (cosmetics_choice < 1 || cosmetics_choice > 10) 
		{
			cout << "Invalid choice entered. Please try again." << endl;
		}
		else if (cosmetics_quantity > cosmetics[cosmetics_choice - 1].quantity) {
			cout << "Sorry, we only have " << cosmetics[cosmetics_choice - 1].quantity<< " units of " << cosmetics[cosmetics_choice - 1].name << " in stock." << endl;
		}
		else 
		{
			cosmetics_bill += cosmetics[cosmetics_choice - 1].price * cosmetics_quantity;
			cosmetics[cosmetics_choice - 1].quantity -= cosmetics_quantity;  
			cout << "You bought " << cosmetics_quantity << " units of " << cosmetics[cosmetics_choice - 1].name<< ". Current stock: " << cosmetics[cosmetics_choice - 1].quantity << " units" << endl;
		}

		cout << "Do you want to select more cosmetics? (y/n)" << endl;
		cin >> user_choice;

	} while (user_choice == 'Y' || user_choice == 'y');

	cout << "Your total bill for cosmetics is: " << cosmetics_bill << " Rs" << endl;
	return cosmetics_bill;
}
int drinks()
{
	Item drinks[] = {{"Water", 1100, 50},{"Soda", 100, 100},{"Orange Juice", 200, 80},{"Mango Juice", 200, 60},
		{"Energy Drink", 250, 40},{"Almond Milk", 180, 30},{"Coconut Water", 180, 40},{"Cold Coffee", 250, 25},
		{"Coke", 200, 75},{"7up", 200, 90}};

	int drinks_choice, drinks_quantity;
	char user_choice;
	int drinks_bill = 0;

	do {
		cout << "Drinks with their prices and available quantities" << endl;
		for (int i = 0; i < 10; i++) 
		{
			cout << "Press " << i + 1 << " : " << drinks[i].name<< "\t" << drinks[i].price << "Rs"<< "\tQuantity available: " << drinks[i].quantity << " units" << endl;
		}

		cout << "Select the drink and enter the quantity you want to buy" << endl;
		cin >> drinks_choice >> drinks_quantity;

		if (drinks_choice < 1 || drinks_choice > 10)
		{
			cout << "Invalid choice entered. Please try again." << endl;
		}
		else if (drinks_quantity > drinks[drinks_choice - 1].quantity)
		{
			cout << "Sorry, we only have " << drinks[drinks_choice - 1].quantity<< " units of " << drinks[drinks_choice - 1].name << " in stock." << endl;
		}
		else 
		{
			drinks_bill += drinks[drinks_choice - 1].price * drinks_quantity;
			drinks[drinks_choice - 1].quantity -= drinks_quantity;  
			cout << "You bought " << drinks_quantity << " units of " << drinks[drinks_choice - 1].name
				<< ". Current stock: " << drinks[drinks_choice - 1].quantity << " units" << endl;
		}

		cout << "Do you want to select more drinks? (y/n)" << endl;
		cin >> user_choice;

	} while (user_choice == 'Y' || user_choice == 'y');

	cout << "Your total bill for drinks is: " << drinks_bill << " Rs" << endl;
	return drinks_bill;
}
int snacks()
{
	Item snacks[] = {{"Lays", 50, 100},{"Popcorn", 100, 80},{"Pretzels", 200, 60},{"Biscuits", 200, 120},
		{"Waffers", 250, 75},{"Candy", 20, 150},{"Cookies", 180, 90},{"Jelly", 250, 40}};

	int snacks_choice, snacks_quantity;
	char user_choice;
	int snacks_bill = 0;

	do {
		cout << "Snacks with their prices and available quantities:" << endl;
		for (int i = 0; i < 8; i++)
		{
			cout << "Press " << i + 1 << " : " << snacks[i].name<< "\t" << snacks[i].price << "Rs"<< "\tQuantity available: " << snacks[i].quantity << " units" << endl;
		}

		cout << "Select the snack and enter the quantity you want to buy" << endl;
		cin >> snacks_choice >> snacks_quantity;

		if (snacks_choice < 1 || snacks_choice > 8)
		{
			cout << "Invalid choice entered. Please try again." << endl;
		}
		else if (snacks_quantity > snacks[snacks_choice - 1].quantity)
		{
			cout << "Sorry, we only have " << snacks[snacks_choice - 1].quantity<< " units of " << snacks[snacks_choice - 1].name << " in stock." << endl;
		}
		else 
		{
			snacks_bill += snacks[snacks_choice - 1].price * snacks_quantity;
			snacks[snacks_choice - 1].quantity -= snacks_quantity; 

			cout << "You bought " << snacks_quantity << " units of "<< snacks[snacks_choice - 1].name << ". "<< "Current stock: " << snacks[snacks_choice - 1].quantity << " units" << endl;
		}

		cout << "Do you want to select more snacks? (y/n)" << endl;
		cin >> user_choice;

	} while (user_choice == 'Y' || user_choice == 'y');

	cout << "Your total bill for snacks is: " << snacks_bill << " Rs" << endl;
	return snacks_bill;
}
int total_bill(int bill1, int bill2, int bill3, int bill4, int bill5, int bill6, int bill7, int bill8, int bill9, int bill10)
{
	int total_bill = bill1 + bill2 + bill3 + bill4 + bill5 + bill6 + bill7 + bill8 + bill9 + bill10;
	cout << "your total bill before discount is " << total_bill << endl;
	return total_bill;
}
float discount(int total_bill)
{
	float discount = 0;
	if (total_bill >= 1000)
	{
		discount = 0;
		cout << "your bill after discount is " << total_bill << endl;
		return total_bill;
	}
	else if (total_bill > 1000 && total_bill <= 3000)
	{
		discount = total_bill * 0.25;
		cout << "YOU GOT 25% DISCOUNT" << endl;
		total_bill = total_bill - discount;
		cout << "your bill after discount is " << total_bill << endl;
		return total_bill;
	}
	else if (total_bill > 3000)
	{
		discount = total_bill * 0.50;
		cout << "YOU GOT 50% DISCOUNT" << endl;
		total_bill = total_bill - discount;
		cout << "your bill after discount is " << total_bill << endl;
		return total_bill;
	}
}
struct Date {
	int day;
	int month;
	int year;
};
bool Return(Date purchaseDate, Date currentDate) 
{
	int purchaseDays = purchaseDate.year * 365 + purchaseDate.month * 30 + purchaseDate.day;
	int currentDays = currentDate.year * 365 + currentDate.month * 30 + currentDate.day;
	int daysDifference = currentDays - purchaseDays;
	if (daysDifference > 7) {
		return false;
	}
	return true;
}
int refund_amount(int item_price)
{
	return item_price;
}
void bill_receipt()
{

}
void main()
{
	int choice;
	char user_choice;
	int fruits_bill=0, veg_bill=0, dairy_bill=0, meat_bill=0, canned_bill=0, frozen_bill=0, supplies_bill=0, cosmetics_bill=0, drinks_bill=0, snacks_bill=0;
	int total_bill_before_discount;
	float total_bill_after_discount;
do {
	choice = main_menu();
	if (choice == 1)
	{
		int category_choice;
		category_choice = categories();
		if (category_choice == 1)
		{
			fruits_bill=fruits();
		}
		else if (category_choice == 2)
		{
			veg_bill=vegetables();
		}
		else if (category_choice == 3)
		{
			dairy_bill=dairy_products();
		}
		else if (category_choice == 4)
		{
			meat_bill=meat();
		}
		else if (category_choice == 5)
		{
			canned_bill=dry_canned_foods();
		}
		else if (category_choice == 6)
		{
			frozen_bill=frozen_foods();
		}
		else if (category_choice == 7)
		{
			supplies_bill=cleaning_supplies();
		}
		else if (category_choice == 8)
		{
			cosmetics_bill=cosmetics();
		}
		else if (category_choice == 9)
		{
			drinks_bill=drinks();
		}
		else if (category_choice == 10)
		{
			snacks_bill=snacks();
		}
		else
		{
			cout << "invalid choice entered " << endl;
		}
		total_bill_before_discount = total_bill(fruits_bill, veg_bill, dairy_bill, meat_bill, canned_bill, frozen_bill, supplies_bill, cosmetics_bill, drinks_bill, snacks_bill);
		total_bill_after_discount = discount(total_bill_before_discount);
	}
	else if (choice == 2)
	{
		Date purchaseDate, currentDate;
		int no_items;
		cout << "Return item" << endl;
		cout << "Following are some rules of returning items" << endl;
		cout << "1- Returning of fruits, vegetables are not allowed" << endl;
		cout << "2- you can only return item within 7-days of buying it" << endl;
		cout << "Enter the number of items you want to return: ";
		cin >> no_items;
		int* items = new int[no_items];
		int* purchaseDates = new int[no_items]; 
		int* itemPrices = new int[no_items];    

	
		cout << "Enter the current date (day month year): ";
		cin >> currentDate.day >> currentDate.month >> currentDate.year;
	
		for (int i = 0; i < no_items; i++)
		{
			cout << "Enter the purchase date (day month year) of item number " << i + 1 << ":" << endl;
			cin >> purchaseDate.day >> purchaseDate.month >> purchaseDate.year;
	
			if (Return(purchaseDate, currentDate)) 
			{
				cout << "The item number "<<i+1 <<" can be returned." << endl;
				int refund_choice;
				cout << "press 1: if you want refund " << endl;
				cout << "press 2: if u want to purchase a new item" << endl;
				cin >> refund_choice;
				if (refund_choice == 1)
				{
					cout << "Enter the price for item " << i + 1 << ": ";
					cin >> itemPrices[i];
					int refund;
					refund = refund_amount(itemPrices[i]); 
					cout << "You got a refund of Rs " << refund << " for item " << i + 1 << endl;
				}
				if (refund_choice == 2)
				{
					int new_item_price;
					int category_chosen = categories();
					if (category_chosen == 1)
					{
						fruits_bill = fruits();
					}
					else if (category_chosen == 2)
					{
						veg_bill = vegetables();
					}
					else if (category_chosen == 3)
					{
						dairy_bill = dairy_products();
					}
					else if (category_chosen == 4)
					{
						meat_bill = meat();
					}
					else if (category_chosen == 5)
					{
						canned_bill = dry_canned_foods();
					}
					else if (category_chosen == 6)
					{
						frozen_bill = frozen_foods();
					}
					else if (category_chosen == 7)
					{
						supplies_bill = cleaning_supplies();
					}
					else if (category_chosen == 8)
					{
						cosmetics_bill = cosmetics();
					}
					else if (category_chosen == 9)
					{
						drinks_bill = drinks();
					}
					else if (category_chosen == 10)
					{
						snacks_bill = snacks();
					}
					else
					{
						cout << "invalid choice entered " << endl;
					}
					new_item_price= total_bill(fruits_bill, veg_bill, dairy_bill, meat_bill, canned_bill, frozen_bill, supplies_bill, cosmetics_bill, drinks_bill, snacks_bill);
					
					cout << "enter the price of item to be replaced with new one" << endl;
					cin >> itemPrices[i];
					if (itemPrices[i] > new_item_price)
					{
						cout << "your refund amount is " << itemPrices[i] - new_item_price << endl;
					}
					else if (itemPrices[i] == new_item_price)
					{
						cout << "no refund" << endl;
					}
					else if (itemPrices[i] <new_item_price)
					{
						cout << "your have to pay  " << new_item_price - itemPrices[i]<<"more " << endl;
					}
				}
			}
			else {
				cout << "The item number "<<i+1<<" cannot be returned as it was purchased more than 7 days ago." << endl;
			}
		}
	}
	else if(choice==3)
	{
		cout << "Thanks for shopping  here" << endl;
		break;
	}
	else
	{
		cout << "inavalid choice" << endl;
		}
	cout << "do you want to select items from another categpry??(y/n)" << endl;
	cin >> user_choice;
} while (user_choice == 'y' || user_choice == 'Y');
}




