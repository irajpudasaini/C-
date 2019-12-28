class Simulator {
	Trader trader;
	Auctioneer auctioneer;
public:
	void run();
};

void Simulator::run() {
	trader.buy();
	trader.sell();
	auctioneer.receiveBuy(trader.getMessage1());
	auctioneer.receiveSell(trader.getMessage2());
	auctioneer.matchBids();
}
