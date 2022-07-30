#ifndef POSTEROSAPP_H
#define POSTEROSAPP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PosterosApp; }
QT_END_NAMESPACE

class PosterosApp : public QMainWindow
{
    Q_OBJECT

public:
    PosterosApp(QWidget *parent = nullptr);
    ~PosterosApp();

private:
    Ui::PosterosApp *ui;
};
#endif // POSTEROSAPP_H
