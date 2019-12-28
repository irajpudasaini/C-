const int NumSeller = 1;
const int NumBuyer = 1;
const int NumBids = 10;
const int MinQuantity = 1;
const int MaxQuantity = 30;
const int MinPrice = 50;
const int MaxPrice = 100;

class Trader {
	string message1;
	string message2;
private:
	char tradername;
	int bidID;
	int traderID;
	char type;
	int quantity;
	int price;
public:
	void buy();
	void sell();
	string getMessage1() { return message1; }
	string getMessage2() { return message2; }
};

void Trader::buy() {
	string bb;
	struct Trader bids[NumBids + 1];
	bidID = 0;
	for (int x = 0; x < NumBids; x++)
	{
		traderID = 0;
		type = 'B';
		bids[x].quantity = ((rand() % MaxQuantity) + MinQuantity);
		bids[x].price = ((rand() % MaxPrice - MinPrice) + MinPrice);

	};

	for (int i = 0; i < NumBids; i++)
	{
		cout << "(" << "trader-buyer" << "," << bidID++ << ", " << traderID << ", " << type << ", " <<
			bids[i].quantity << ", " << bids[i].price << ")" << endl;
	};
	message1 = bb;
};

void Trader::sell() {
	string ss;
	struct Trader bids[NumBids + 1];
	for (int x = 0; x < NumBids; x++)
	{
		traderID = 1;
		type = 'S';
		bids[x].traderID = 1;
		bids[x].quantity = ((rand() % MaxQuantity) + MinQuantity);
		bids[x].price = ((rand() % MaxPrice - MinPrice) + MinPrice);
	};

	for (int i = 0; i < NumBids; i++)
	{
		cout << "(" << "trader-seller" << "," << bidID++ << ", " << traderID << ", " << type << ", " <<
			bids[i].quantity << ", " << bids[i].price << ")" << endl;
	};
	message2 = ss;
};