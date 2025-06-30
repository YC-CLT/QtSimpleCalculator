#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include <QJSEngine>

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

private slots:
    void on_button1_clicked();
    void on_button2_clicked();
    void on_button3_clicked();
    void on_button4_clicked();
    void on_button5_clicked();
    void on_button6_clicked();
    void on_button7_clicked();
    void on_button8_clicked();
    void on_button9_clicked();
    void on_button0_clicked();
    void on_buttonPlus_clicked();
    void on_buttonMinus_clicked();
    void on_buttonMulti_clicked();
    void on_buttonDiv_clicked();
    void on_buttonLQ_clicked();
    void on_buttonRQ_clicked();
    void on_buttonDot_clicked();
    void on_buttonC_clicked();
    void on_buttonDel_clicked();
    void on_buttonEqual_clicked();
    
private:
    Ui::Widget *ui;
    QString expression;
    QJSEngine *expressionEngine;  // 可选，如果需要重用引擎

};
#endif // WIDGET_H
