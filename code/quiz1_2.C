{
    float price_stay = 0;
    for(int i = 0; i < 6; i++){
	price_stay += 1000/pow(1.12, i);
    }
    price_stay += 2000/pow(1.12, 6);
    cout << "stay: " << price_stay << endl;

    float price_switch = 0;
    for(int i = 0; i < 6; i++)
	price_switch += 900/pow(1.12, i);

    price_switch += 1000;
    price_switch += 1800/pow(1.12, 6);
    cout << "switch: " << price_switch << endl;
}
