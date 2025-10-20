#ifndef DESIGNWIDGET_H
#define DESIGNWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class designWidget;
}
QT_END_NAMESPACE

class designWidget : public QWidget
{
    Q_OBJECT

public:
    designWidget(QWidget *parent = nullptr);
    ~designWidget();

private:
    Ui::designWidget *ui;
};
#endif // DESIGNWIDGET_H
