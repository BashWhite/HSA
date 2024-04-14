#ifndef PPTWINDOW_H
#define PPTWINDOW_H

#include <QApplication>
#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>

class PPTWindow : public QWidget {
    Q_OBJECT

public:
    PPTWindow(QWidget *parent = 0);

private slots:
    void calculatePPT();


private:
    QLineEdit *weightLineEdit;
    QLineEdit *heightLineEdit;
    QLabel *resultLabel;
};

#endif // PPTWINDOW_H
