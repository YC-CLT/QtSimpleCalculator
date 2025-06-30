#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    expression = "";  // 显式初始化
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_button1_clicked()
{
    expression +="1";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_button2_clicked()
{
    expression += "2";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_button3_clicked()
{
    expression += "3";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_button4_clicked()
{
    expression += "4";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_button5_clicked()
{
    expression += "5";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_button6_clicked()
{
    expression += "6";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_button7_clicked()
{
    expression += "7";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_button8_clicked()
{
    expression += "8";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_button9_clicked()
{
    expression += "9";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_button0_clicked()
{
    expression += "0";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_buttonPlus_clicked()
{
    expression += "+";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_buttonMinus_clicked()
{
    expression += "-";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_buttonMulti_clicked()
{
    expression += "*";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_buttonDiv_clicked()
{
    expression += "/";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_buttonLQ_clicked()
{
    expression += "(";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_buttonRQ_clicked()
{
    expression += ")";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_buttonDot_clicked()
{
    expression += ".";
    ui->mainLineEdit->setText(expression);
}

void Widget::on_buttonC_clicked()
{
    expression.clear();
    ui->mainLineEdit->setText(expression);
}

void Widget::on_buttonDel_clicked()
{
    expression.remove(expression.length() - 1, 1);
    ui->mainLineEdit->setText(expression);
}

void Widget::on_buttonEqual_clicked()
{
    QJSEngine expressionEngine;
    QJSValue result = expressionEngine.evaluate(expression);
    if (result.isError()) {
        ui->mainLineEdit->setText("Error");
        expression.clear();
    } else {
        expression += "=" + result.toString();
        ui->mainLineEdit->setText(expression);
        expression.clear();
    }
}
