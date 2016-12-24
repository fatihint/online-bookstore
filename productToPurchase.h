#include <iostream>
#include 'product.h'
using namespace std;

class productToPurchase{
private:
	product Product;
	int quantity;
public:
	Product getProduct() const;
	void setProduct(product _Product);
	int getQuantity() const;
	void setQuantity(int _quantity);
};