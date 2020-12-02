#ifndef TELAPRINCIPAL_H
#define TELAPRINCIPAL_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class TelaPrincipal; }
QT_END_NAMESPACE

class TelaPrincipal : public QWidget
{
    Q_OBJECT

public:
    TelaPrincipal(QWidget *parent = nullptr);
    ~TelaPrincipal();
    //

private:
    Ui::TelaPrincipal *ui;
};
#endif // TELAPRINCIPAL_H
