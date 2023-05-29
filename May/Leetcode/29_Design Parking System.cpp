class ParkingSystem {
public:
    unordered_map<int, int> carparkings;
    ParkingSystem(int big, int medium, int small) {
        carparkings[1]=big;
        carparkings[2]=medium;
        carparkings[3]=small;
    }
    
    bool addCar(int carType) {
        bool res=false;
        if(carparkings[carType]){
            res=true;
            carparkings[carType]--;
        }
        return res;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
