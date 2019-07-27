#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox> //not equal root<>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeMoney(int n){
    money += n;
    ui ->lcdNumber->display(money);

}
void Widget::able(){
    if(money < 100){ui->pbCofee->setEnabled(false);}//ui->pbCofee->setEnabled(true);
    if(money < 150){ui->pbTea->setEnabled(false);}//ui->pbTea->setEnabled(true);
    if(money < 200){ui->pbCoke->setEnabled(false);}//ui->pbCoke->setEnabled(true);
    if(money >= 100){ui->pbCofee->setEnabled(true);}//ui->pbCofee->setEnabled(true);
    if(money >= 150){ui->pbTea->setEnabled(true);}//ui->pbTea->setEnabled(true);
    if(money >= 200){ui->pbCoke->setEnabled(true);}
}

void Widget::on_pb10_clicked()
{
    changeMoney(10);
    able();
   //ui->pbCoke->setEnabled(false);
   // QMessageBox msg;
   // msg.information(nullptr,"title","text-how many print do it googling c++ have str QString study googling");//write c++nullptr
}

void Widget::on_pb50_clicked()
{
    changeMoney(50); able();
}

void Widget::on_pb100_clicked()
{
   changeMoney(100); able();
}

void Widget::on_pb500_clicked()
{
    changeMoney(500); able();
}

void Widget::on_pbCofee_clicked()
{

    changeMoney(-100);able();

}

void Widget::on_pbTea_clicked()
{
    changeMoney(-150);able();
}

void Widget::on_pbCoke_clicked()
{
    changeMoney(-200);able();
}

void Widget::on_reset_clicked(){
    int fh,h,ft,t;

    fh = money / 500;
    ui ->lcdNumber_3->display(fh);
    money = money % 500;
    h = money / 100;
    ui ->lcdNumber_2->display(h);
    money = money % 100;
    ft = money / 50;
    ui ->lcdNumber_5->display(ft);
    money = money % 50;
    t = money / 10;
    ui ->lcdNumber_4->display(t);
    //QMessageBox msg;
   // msg.informativeText(nullptr,"title","500:%d",&fh,"100:,50:,10:");
    money = 0;
    ui ->lcdNumber->display(money);
    //ui->pbCoke->setEnabled(false);
   //return money;
    able();


}
