#ifndef JIEMIAN_H
#define JIEMIAN_H

#include <QWidget>

namespace Ui {
class jiemian;
}

class jiemian : public QWidget
{
    Q_OBJECT

public:
    explicit jiemian(QWidget *parent = nullptr);
    ~jiemian();

private:
    Ui::jiemian *ui;
};

#endif // JIEMIAN_H
