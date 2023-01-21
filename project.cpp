#include <iostream>
#include<string>
using namespace std;
int main()
{
    cout << "Hello maam/sir can we know your name!" << endl;
    string name;
    getline(cin, name);
    cout << "So hello " << name << " we are very happy to see that you are take a step towards a better health and life" << endl;
    cout << "Before we suggest you anything we want to know basic details about yourself" << endl;
    cout << "What is your age(in years)" << endl;
    float age;
    cin >> age;
    cout << "What is your gender ( reply M for male and F for female" << endl;
    string gender;
    cin >> gender;
    cout << "What is your height(in meters)" << endl;
    float height;
    cin >> height;
    cout << "What is your weight (in kg)" << endl;
    float weight;
    cin >> weight;
    float BMI;
    BMI = (weight / (height * height));
    int BMR;
    int main_cal;
    cout << "Can you please tell us your daily activity level in terms of Low, Moderate, High" << endl;
    string activity;
    cin >> activity;
    for (int i = 0; i < 5; ++i)
    {
        cout << endl;
    }
    cout << "******************************Your report******************************" << endl;
    if (activity == "Low" || activity == "LOW" || activity == "low")
    {
        if (gender == "m" || gender == "M")
        {
            BMR = 66.47 + (13.75 * weight) + (5 * height) - (6.8 * age);
            main_cal = BMR * 1.5;
            cout << "Your maintence calories is = " << main_cal << "\n" << endl;
        }
        else if (gender == "f" || gender == "F")
        {
            BMR = 665 + (9.6 * weight) + (1.8 * height) - (4.7 * age);
            main_cal = BMR * 1.5;
            cout << "Your maintence calories is = " << main_cal << "\n" << endl;
        }
    }
    else if (activity == "Moderate" || activity == "moderate" || activity == "MODERATE")
    {
        if (gender == "m" || gender == "M")
        {
            BMR = 66.47 + (13.75 * weight) + (5 * height) - (6.8 * age);
            main_cal = BMR * 1.7;
            cout << "Your maintence calories is = " << main_cal << "\n" << endl;
        }
        else if (gender == "f" || gender == "F")
        {
            BMR = 665 + (9.6 * weight) + (1.8 * height) - (4.7 * age);
            main_cal = BMR * 1.7;
            cout << "Your maintence calories is = " << main_cal << "\n" << endl;
        }
    }
    else if (activity == "High" || activity == "high" || activity == "HIGH")
    {
        if (gender == "m" || gender == "M")
        {
            BMR = 66.47 + (13.75 * weight) + (5 * height) - (6.8 * age);
            main_cal = BMR * 1.9;
            cout << "Your maintence calories is = " << main_cal << "\n" << endl;
        }
        else if (gender == "f" || gender == "F")
        {
            BMR = 665 + (9.6 * weight) + (1.8 * height) - (4.7 * age);
            main_cal = BMR * 1.9;
            cout << "Your maintence calories is = " << main_cal << "\n" << endl;
        }
    }
    else
    {
        cout << "Please enter valid option to know your maintence calories options are Low, Moderate, High\n" << endl;
    }
    if (BMI < 18.50)
    {
        cout << "You are in UnderWeight category\n" << endl;
        cout << "You have to consume " << main_cal + 500 << " calories to put on some Healhy Weight\n" << endl;
    }
    else if (BMI <= 24.99)
    {
        cout << "You are in Healhy Weight category\n" << endl;
        cout << "You have to consume " << main_cal << " calories to maintain your Healhy Weight\n" << endl;
    }
    else if (BMI <= 29.99)
    {
        cout << "You are in OverWeight category\n" << endl;
        cout << "You have to consume " << main_cal - 500 << " calories to Lose Weight to be in Healhy Weight category\n" << endl;
    }
    else
    {
        cout << "You are in Obese category\n" << endl;
        cout << "You have to consume " << main_cal - 600 << " calories to Lose Weight to be in Healhy Weight category \n" << endl;
    }
    cout << "You should Walk daily for at least 20 mins\n" << endl;
    cout << "Introduce supplement in your diet like multivitamin tablets, omega 3, Whey protien etc\n" << endl;
    cout << "Eat Healhy and balanced diet\n" << endl;
    cout << "Wash your hand frequently\n" << endl;
    cout << "Learn to manage stress\n" << endl;
    cout << "You should sleep proper\n" << endl;
    cout << "Take annual physical checkup\n" << endl;

    return 0;
}
