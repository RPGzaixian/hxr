#ifndef PACKAGE_H
#define PACKAGE_H

#include <QWidget>

namespace Ui {
class package;
}

class package : public QWidget
{
    Q_OBJECT

public:
    explicit package(QWidget *parent = nullptr);
    void flash();
    ~package();

private:
    Ui::package *ui;
};

#endif // PACKAGE_H
