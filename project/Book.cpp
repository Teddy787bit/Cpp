/*
Book management System
getline() -> is a function . It is use to read line from input stream.
ignore() -> The cin.ignore() function is used which is used to ignore or clear one or more characters from the input buffer.
We will create a book management system
Functionality:-
1-Add new book in stock.
    Book details:- author,title,publisher,price,stock.
2-Check if the book is available or not in stock.
    Search book using the title ,author
3-Edit book detail.
3-Sale book if available in store.
4-Update stock details.

*/
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class book
{
private:
	char *author, *title, *publisher; // Dynamic string
	float *price;
	int *stock;

public:
	book()
	{ // Constructer
		author = new char[20];
		title = new char[20];
		publisher = new char[20];
		price = new float;
		stock = new int;
	}
	void feeddata();			// Book details
	void editdata();			// Edit book details
	void showdata();			// Show book details
	int search(char[], char[]); // Search book
	void Salebook();			// Sale Book
};
void Clear()
{
	system("clear"); //<- Uncomment this if you are using linux
					 // system("cls");  //<- Uncomment this if you are using windows
}
void book::feeddata()
{
	cin.ignore();
	cout << "\nEnter Author Name: ";
	cin.getline(author, 20);
	cout << "Enter Title Name: ";
	cin.getline(title, 20);
	cout << "Enter Publisher Name: ";
	cin.getline(publisher, 20);
	cout << "Enter Price: ";
	cin >> *price;
	cout << "Enter Stock Position: ";
	cin >> *stock;
}

void book::editdata()
{

	cout << "\nEnter Author Name: ";
	cin.getline(author, 20);
	cout << "Enter Title Name: ";
	cin.getline(title, 20);
	cout << "Enter Publisher Name: ";
	cin.getline(publisher, 20);
	cout << "Enter Price: ";
	cin >> *price;
	cout << "Enter Stock Position: ";
	cin >> *stock;
}

void book::showdata()
{
	cout << "\nAuthor Name: " << author;
	cout << "\nTitle Name: " << title;
	cout << "\nPublisher Name: " << publisher;
	cout << "\nPrice: " << *price;
	cout << "\nStock Position: " << *stock;
	cout<<"\n----------------------"<<endl;
}

int book::search(char tSale[20], char aSale[20])
{
	if (strcmp(tSale, title) == 0 && strcmp(aSale, author) == 0)
		return 1;
	else
		return 0;
}

void book::Salebook()
{
	int count;
	cout << "\nEnter Number Of Books to Sale: ";
	cin >> count;
	if (count <= *stock)
	{
		*stock = *stock - count;
		cout << "\nBooks Bought Sucessfully";
		cout << "\nAmount: Rs. " << (*price) * count;
	}
	else
		cout << "\nRequired Copies not in Stock";
}

int main()
{
	Clear();
	book *B[20];
	int i = 0, r, t, choice;
	char titleSale[20], authorSale[20];
	while (1)
	{
		cout << "\n\t\tMENU"
			 << "\n1. Entry of New Book"
			 << "\n2. Sale Book"
			 << "\n3. Search For Book"
			 << "\n4. Edit Details Of Book"
			 << "\n5. Show all books"
			 << "\n6. Exit"
			 << "\n\nEnter your Choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			Clear();
			B[i] = new book;
			B[i]->feeddata();
			i++;
			break;

		case 2:
			
			cin.ignore();
			cout << "\nEnter Title Of Book: ";
			cin.getline(titleSale, 20);
			cout << "Enter Author Of Book: ";
			cin.getline(authorSale, 20);
			for (t = 0; t < i; t++)
			{
				if (B[t]->search(titleSale, authorSale))
				{
					B[t]->Salebook();
					break;
				}
			}
			if (t == 1)
				cout << "\nThis Book is Not in Stock";

			break;
		case 3:
			Clear();
			cin.ignore();
			cout << "\nEnter Title Of Book: ";
			cin.getline(titleSale, 20);
			cout << "Enter Author Of Book: ";
			cin.getline(authorSale, 20);

			for (t = 0; t < i; t++)
			{
				if (B[t]->search(titleSale, authorSale))
				{
					cout << "\nBook Found Successfully";
					B[t]->showdata();
					break;
				}
			}
			if (t == i)
				cout << "\nThis Book is Not in Stock";
			break;

		case 4:
			Clear();
			cin.ignore();
			cout << "\nEnter Title Of Book: ";
			cin.getline(titleSale, 20);
			cout << "Enter Author Of Book: ";
			cin.getline(authorSale, 20);

			for (t = 0; t < i; t++)
			{
				if (B[t]->search(titleSale, authorSale))
				{
					cout << "\nBook Found Successfully";
					B[t]->editdata();
					break;
				}
			}
			if (t == i)
				cout << "\nThis Book is Not in Stock";
			break;
		case 5:
			Clear();
			cout << "\n_______Avilable Books in store_______" << endl;
			for (t = 0; t < i; t++)
			{
				B[t]->showdata();
			}
			break;

		case 6:
			exit(0);
		default:
			cout << "\nInvalid Choice Entered";
		}
	}

	return 0;
}