#ifndef ADDCOPYPROFILEWINDOW_H
#define ADDCOPYPROFILEWINDOW_H

#include <QDialog>
#include <QIntValidator>

namespace Ui {
class AddCopyProfileWindow;
}

class AddCopyProfileWindow : public QDialog
{
    Q_OBJECT

public:
    const int kCopyProfileMinDim = 1;
    const int kCopyProfileMaxDim = 9999;

    explicit AddCopyProfileWindow(QWidget *parent = nullptr);
    ~AddCopyProfileWindow();

    void retranslateUi();

signals:
    void copyProfileDataAccepted(int width, int height, bool scaleUp);

protected:
    void showEvent(QShowEvent *event);

private slots:
    void on_buttonBox_accepted();
    void on_maxHeightOrMaxWidthChanged();

private:
    Ui::AddCopyProfileWindow *ui;
    QIntValidator intValidator;
};

#endif // ADDCOPYPROFILEWINDOW_H
