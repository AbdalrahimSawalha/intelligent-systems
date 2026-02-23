#include <iostream>
#include <cmath>

using namespace std;

double Avg(double bodyMeasurement[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += bodyMeasurement[i];
    }
    return sum / size;
}

double Variance(double bodyMeasurement[], int size, double Avg) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += pow(bodyMeasurement[i] - Avg, 2);
    }
    return sum / (size - 1);
}

double gaussianFunction(double bodyMeasurement, double Variance, double Avg) {
    double const PI = 3.14159265358979323846;
    double denominator = sqrt(2 * PI * Variance* Variance);
    double exponent = exp(-pow(bodyMeasurement - Avg, 2) / (2 * Variance* Variance));

    return (1.0 / denominator) * exponent;
}

double mailFunction(double hightIn, double weightIn, double footSizeIn, double mailProbability) {
    int const size = 4;
    double mail_w[size] = { 180,190,170,165 };
    double mail_h[size] = { 6.00,5.92,5.58,5.92 };
    double mail_fs[size] = { 12,11,12,10 };

    double weightAvg = Avg(mail_w, size);
    double hightAvg = Avg(mail_h, size);
    double footSizeAvg = Avg(mail_fs, size);

    double weightVariance = Variance(mail_w, size, weightAvg);
    double hightVariance = Variance(mail_h, size, hightAvg);
    double footSizeVariance = Variance(mail_fs, size, footSizeAvg);

    double weight = gaussianFunction(weightIn, weightVariance, weightAvg);
    double hight = gaussianFunction(hightIn, hightVariance, hightAvg);
    double footSize = gaussianFunction(footSizeIn, footSizeVariance, footSizeAvg);

    return weight * hight * footSize * mailProbability;
}

double femailFunction(double hightIn, double weightIn, double footSizeIn, double femailProbability) {
    int const size = 4;
    double femail_w[size] = { 100,150,130,150 };
    double femail_h[size] = { 5.00,5.50,5.42,5.75 };
    double femail_fs[size] = { 6,8,7,9 };

    double weightAvg = Avg(femail_w, size);
    double hightAvg = Avg(femail_h, size);
    double footSizeAvg = Avg(femail_fs, size);

    double weightVariance = Variance(femail_w, size, weightAvg);
    double hightVariance = Variance(femail_h, size, hightAvg);
    double footSizeVariance = Variance(femail_fs, size, footSizeAvg);

    double weight = gaussianFunction(weightIn, weightVariance, weightAvg);
    double hight = gaussianFunction(hightIn, hightVariance, hightAvg);
    double footSize = gaussianFunction(footSizeIn, footSizeVariance, footSizeAvg);

    return weight * hight * footSize * femailProbability;
}

int main() {
    double probability = 0.5;
    double hight, weight, footSize;
    char choice;

    do {
        cout << "Welcome ... \nPlease Enter Hight : ";
        cin >> hight;
        cout << "Weight : ";
        cin >> weight;
        cout << "Foot Size : ";
        cin >> footSize;

        double mail = mailFunction(hight, weight, footSize, probability);
        double femail = femailFunction(hight, weight, footSize, probability);

        double resultMail = mail / (mail + femail);
        double resultFemail = femail / (femail + mail);

        if (resultMail > resultFemail) {
            cout << "\nMail\n";
        }
        else {
            cout << "\nFemail\n";
        }

        cout << "\nDo you want to enter new values? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
