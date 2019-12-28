class Auctioneer {
	string message1;
	string message2;
private:
	Trader trader;
public:
	
	void receiveBuy(string bb) { message1 = bb; }
	void receiveSell(string ss) { message2 = ss; }
	void matchBids();
};

void Auctioneer::matchBids() {
	cout << message1 << endl;
	cout << message2 << endl;
};