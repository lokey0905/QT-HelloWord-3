#include "designwidget.h"
#include "ui_designwidget.h"

designWidget::designWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::designWidget)
{
    ui->setupUi(this);
}

designWidget::~designWidget()
{
    delete ui;
}
