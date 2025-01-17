#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QPainter>
#include<QProcess>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
protected:
    void paintEvent(QPaintEvent *event) override; // 重写 paintEvent 方法
private slots:
    // void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
