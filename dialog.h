#pragma once

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class dialog;
}
QT_END_NAMESPACE

class dialog : public QWidget
{
    Q_OBJECT

public:
    explicit dialog(QWidget *parent = nullptr);
    virtual ~dialog() override;

private:
    Ui::dialog *ui;
};
