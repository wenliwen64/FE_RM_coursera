{
    float price = 0;
    for(int i = 0; i < 20; i++){
        price += 0.5 / pow(1.1, i);
    }
    cout << price << endl;
}
