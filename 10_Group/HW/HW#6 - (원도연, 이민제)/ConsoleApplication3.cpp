#include <iostream>
#include <string>
#include <vector>

class Ingredient {
private:
    int quantity;

public:
    Ingredient() : quantity(3) {}

    bool use() {
        if (quantity > 0) {
            --quantity;
            return true;
        }
        return false;
    }

    void refill() {
        quantity = 3;
    }

    int getQuantity() const {
        return quantity;
    }
};


class CoffeeMachine {
private:
    Ingredient coffee;
    Ingredient sugar;
    Ingredient cream;
    Ingredient water;
    Ingredient cup;

    bool makeCoffee(bool useSugar) {
        if (!coffee.use() || !water.use() || !cup.use() || (useSugar && !sugar.use())) {
            std::cout << "재료가 부족합니다!" << std::endl;
            return false;
        }
        return true;
    }

    bool makeBlackCoffee() {
        if (!coffee.use() || !water.use() || !cup.use()) {
            std::cout << "재료가 부족합니다!" << std::endl;
            return false;
        }
        return true;
    }
public:
    CoffeeMachine() {
        std::cout << "-----명품 커피 자판기 켭니다.-----" << std::endl;
        coffee.refill();
        sugar.refill();
        cream.refill();
        water.refill();
        cup.refill();
    }


    void selectMenu(int choice) {
        switch (choice) {
        case 0: // 보통 커피
            if (makeCoffee(false)) {
                std::cout << "맛있는 보통 커피 나왔습니다~~" << std::endl;
            }
            break;
        case 1: // 설탕 커피
            if (makeCoffee(true)) {
                std::cout << "맛있는 설탕 커피 나왔습니다~~" << std::endl;
            }
            break;
        case 2: // 블랙 커피
            if (makeBlackCoffee()) {
                std::cout << "맛있는 블랙 커피 나왔습니다~~" << std::endl;
            }
            break;
        case 3: // 채우기
            coffee.refill();
            sugar.refill();
            cream.refill();
            water.refill();
            cup.refill();
            std::cout << "모든 통을 채웁니다.~~" << std::endl;
            break;
        default:
            std::cout << "잘못된 선택입니다!" << std::endl;
        }
    }

    void displayIngredients() {
        std::cout << "Coffee    " << std::string(coffee.getQuantity(), '*') << std::endl;
        std::cout << "Sugar     " << std::string(sugar.getQuantity(), '*') << std::endl;
        std::cout << "Cream     " << std::string(cream.getQuantity(), '*') << std::endl;
        std::cout << "Water     " << std::string(water.getQuantity(), '*') << std::endl;
        std::cout << "Cup       " << std::string(cup.getQuantity(), '*') << std::endl;
    }

};

int main() {
    CoffeeMachine machine;
    int choice;

    while (true) {
        machine.displayIngredients();
        std::cout << "보통 커피:0, 설탕 커피:1, 블랙 커피:2, 채우기:3, 종료:4 >> ";
        std::cin >> choice;
        if (choice == 4) break;
        machine.selectMenu(choice);
    }

    return 0;
}
