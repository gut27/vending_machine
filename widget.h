#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void changeMoney(int n);
    void able();
    int money {0}; //int money=0;parameter constructor int money asignedoperator??
    //int &r; is not build
    //int &r { money};

private slots:
    void on_pb10_clicked();

    void on_pb50_clicked();

    void on_pb100_clicked();

    void on_pb500_clicked();

    void on_pbCofee_clicked();

    void on_pbTea_clicked();

    void on_pbCoke_clicked();

    void on_reset_clicked();

    void on_lcdNumber_3_overflow();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
