#include "PPTWindow.h"
#include <QVBoxLayout>
#include <cmath>




PPTWindow::PPTWindow(QWidget *parent) : QWidget(parent) {
    auto *layout = new QVBoxLayout(this);

    weightLineEdit = new QLineEdit(this);
    weightLineEdit->setPlaceholderText("Введите вес в кг");
    layout->addWidget(weightLineEdit);

    heightLineEdit = new QLineEdit(this);
    heightLineEdit->setPlaceholderText("Введите рост в сантиметрах");
    layout->addWidget(heightLineEdit);

    auto *calculateButton = new QPushButton("Рассчитать ", this);
    connect(calculateButton, &QPushButton::clicked, this, &PPTWindow::calculatePPT);
    layout->addWidget(calculateButton);



    resultLabel = new QLabel(this);
    layout->addWidget(resultLabel);
}

void PPTWindow::calculatePPT() {
    bool ok1, ok2;
    double weight = weightLineEdit->text().toDouble(&ok1);
    double height = heightLineEdit->text().toDouble(&ok2);

    if (ok1 && ok2 && height > 0) {
        double ppt = sqrt(weight * height / 3600);
        double pptd = 167.2 * sqrt(weight * height )/ 10000;
        double avgppt = (ppt + pptd)/2;



        resultLabel->setText("ППТ Мостеллера: " + QString::number(ppt, 'f', 3) + "   " + "ППТ Дюбуа: " + QString::number(pptd, 'f', 3) + "   " + "Средняя ППТ: " + QString::number(avgppt, 'f', 3) );

    } else {
        resultLabel->setText("Неверные данные");
    }



}



