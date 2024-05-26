#ifndef REALLYQUIT_H
#define REALLYQUIT_H

#include <QDialog>

namespace Ui {
class ReallyQuit;
}

class ReallyQuit : public QDialog
{
    Q_OBJECT

public:

    explicit ReallyQuit(QWidget *parent = nullptr);
    ~ReallyQuit();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ReallyQuit *ui;
};

#endif // REALLYQUIT_H
