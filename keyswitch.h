#ifndef KEYSWITCH_H
#define KEYSWITCH_H

#include <QDialog>

namespace Ui {
class Keyswitch;
}

class Keyswitch : public QDialog
{
    Q_OBJECT

public:
    explicit Keyswitch(QWidget *parent = nullptr);
    ~Keyswitch();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Keyswitch *ui;
};

#endif // KEYSWITCH_H
