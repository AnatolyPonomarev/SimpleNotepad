#ifndef TEXTPAD_H
#define TEXTPAD_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Textpad; }
QT_END_NAMESPACE

class Textpad : public QMainWindow
{
    Q_OBJECT

public:
    Textpad(QWidget *parent = nullptr);
    ~Textpad();

private slots:
private slots:
      void newDocument();
      void open();
      void save();
      void exit();

private:
    Ui::Textpad *ui;
};
#endif // TEXTPAD_H
