#ifndef STARTWINDOW_H
#define STARTWINDOW_H

#include <QDebug>
#include <QMainWindow>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui { class Startwindow; }
QT_END_NAMESPACE

class Startwindow : public QMainWindow
{
    Q_OBJECT

public:
    Startwindow(QWidget *parent = nullptr);
    ~Startwindow();

    void setScore1(int p_score1) { if (p_score1 >= 0) this->m_score1 = p_score1; };
    void setScore2(int p_score2) { if (p_score2 >= 0) this->m_score2 = p_score2; };
    void setScore3(int p_score3) { if (p_score3 >= 0) this->m_score3 = p_score3; };

    int getScore1() { return this->m_score1; };
    int getScore2() { return this->m_score2; };
    int getScore3() { return this->m_score3; };

private slots:
    void on_btn_startgame_released();

    void on_btn_exit_released();

private:
    Ui::Startwindow *ui;

    int m_score1;
    int m_score2;
    int m_score3;
};
#endif // STARTWINDOW_H
