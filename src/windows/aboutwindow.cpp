#include "aboutwindow.h"
#include "ui_aboutwindow.h"

AboutWindow::AboutWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutWindow)
{
    ui->setupUi(this);
    setFixedSize(size());
}

AboutWindow::~AboutWindow()
{
    delete ui;
}

void AboutWindow::retranslateUi()
{
    ui->retranslateUi(this);
}
