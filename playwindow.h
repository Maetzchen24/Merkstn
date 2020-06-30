#ifndef PLAYWINDOW_H
#define PLAYWINDOW_H

#include <QPaintEvent>
#include <QDialog>
#include <QDateTime>
#include <QElapsedTimer>
#include <QTimeEdit>

namespace Ui {
class playwindow;
}

class playwindow : public QDialog
{
    Q_OBJECT

public:
    explicit playwindow(QWidget *parent = nullptr);
    ~playwindow();

    //Setter boxes
    void setBox1(QString p_image){ if (p_image != 0) this->m_box1 = p_image; };
    void setBox2(QString p_image){ if (p_image != 0) this->m_box2 = p_image; };
    void setBox3(QString p_image){ if (p_image != 0) this->m_box3 = p_image; };
    void setBox4(QString p_image){ if (p_image != 0) this->m_box4 = p_image; };
    void setBox5(QString p_image){ if (p_image != 0) this->m_box5 = p_image; };
    void setBox6(QString p_image){ if (p_image != 0) this->m_box6 = p_image; };
    void setBox7(QString p_image){ if (p_image != 0) this->m_box7 = p_image; };
    void setBox8(QString p_image){ if (p_image != 0) this->m_box8 = p_image; };
    void setBox9(QString p_image){ if (p_image != 0) this->m_box9 = p_image; };
    void setBox10(QString p_image){ if (p_image != 0) this->m_box10 = p_image; };
    void setBox11(QString p_image){ if (p_image != 0) this->m_box11 = p_image; };
    void setBox12(QString p_image){ if (p_image != 0) this->m_box12 = p_image; };
    void setBox13(QString p_image){ if (p_image != 0) this->m_box13 = p_image; };
    void setBox14(QString p_image){ if (p_image != 0) this->m_box14 = p_image; };
    void setBox15(QString p_image){ if (p_image != 0) this->m_box15 = p_image; };
    void setBox16(QString p_image){ if (p_image != 0) this->m_box16 = p_image; };
    void setBox17(QString p_image){ if (p_image != 0) this->m_box17 = p_image; };
    void setBox18(QString p_image){ if (p_image != 0) this->m_box18 = p_image; };
    void setBox19(QString p_image){ if (p_image != 0) this->m_box19 = p_image; };
    void setBox20(QString p_image){ if (p_image != 0) this->m_box20 = p_image; };
    void setBox21(QString p_image){ if (p_image != 0) this->m_box21 = p_image; };
    void setBox22(QString p_image){ if (p_image != 0) this->m_box22 = p_image; };
    void setBox23(QString p_image){ if (p_image != 0) this->m_box23 = p_image; };
    void setBox24(QString p_image){ if (p_image != 0) this->m_box24 = p_image; };

    //Getter boxes
    QString getBox1() { return this->m_box1; };
    QString getBox2() { return this->m_box2; };
    QString getBox3() { return this->m_box3; };
    QString getBox4() { return this->m_box4; };
    QString getBox5() { return this->m_box5; };
    QString getBox6() { return this->m_box6; };
    QString getBox7() { return this->m_box7; };
    QString getBox8() { return this->m_box8; };
    QString getBox9() { return this->m_box9; };
    QString getBox10() { return this->m_box10; };
    QString getBox11() { return this->m_box11; };
    QString getBox12() { return this->m_box12; };
    QString getBox13() { return this->m_box13; };
    QString getBox14() { return this->m_box14; };
    QString getBox15() { return this->m_box15; };
    QString getBox16() { return this->m_box16; };
    QString getBox17() { return this->m_box17; };
    QString getBox18() { return this->m_box18; };
    QString getBox19() { return this->m_box19; };
    QString getBox20() { return this->m_box20; };
    QString getBox21() { return this->m_box21; };
    QString getBox22() { return this->m_box22; };
    QString getBox23() { return this->m_box23; };
    QString getBox24() { return this->m_box24; };

    //Counter methods
    void setCounterPlusOne(){ this->m_counter += 1; };
    void setCounterNull(){ this->m_counter = 0; };
    int getCounter(){ return this->m_counter; };

    //Opened boxes setter
    void setOpenedBox1(int p_box) { this->m_saveOpenedBox1 = p_box; };
    void setOpenedBox2(int p_box) { this->m_saveopenedBox2 = p_box; };
    //Opened boxes getter
    int getOpenedBox1() { return this->m_saveOpenedBox1; };
    int getOpenedBox2() { return this->m_saveopenedBox2; };

    //Get last opened box image
    QString getLastOpendBoxImg()
    {
        if (getOpenedBox1() == 1)
        {
            return getBox1();
        }
        else if (getOpenedBox1() == 2)
        {
            return getBox2();
        }
        else if (getOpenedBox1() == 3)
        {
            return getBox3();
        }
        else if (getOpenedBox1() == 4)
        {
            return getBox4();
        }
        else if (getOpenedBox1() == 5)
        {
            return getBox5();
        }
        else if (getOpenedBox1() == 6)
        {
            return getBox6();
        }
        else if (getOpenedBox1() == 7)
        {
            return getBox7();
        }
        else if (getOpenedBox1() == 8)
        {
            return getBox8();
        }
        else if (getOpenedBox1() == 9)
        {
            return getBox9();
        }
        else if (getOpenedBox1() == 10)
        {
            return getBox10();
        }
        else if (getOpenedBox1() == 11)
        {
            return getBox11();
        }
        else if (getOpenedBox1() == 12)
        {
            return getBox12();
        }
        else if (getOpenedBox1() == 13)
        {
            return getBox13();
        }
        else if (getOpenedBox1() == 14)
        {
            return getBox14();
        }
        else if (getOpenedBox1() == 15)
        {
            return getBox15();
        }
        else if (getOpenedBox1() == 16)
        {
            return getBox16();
        }
        else if (getOpenedBox1() == 17)
        {
            return getBox17();
        }
        else if (getOpenedBox1() == 18)
        {
            return getBox18();
        }
        else if (getOpenedBox1() == 19)
        {
            return getBox19();
        }
        else if (getOpenedBox1() == 20)
        {
            return getBox20();
        }
        else if (getOpenedBox1() == 21)
        {
            return getBox21();
        }
        else if (getOpenedBox1() == 22)
        {
            return getBox22();
        }
        else if (getOpenedBox1() == 23)
        {
            return getBox23();
        }
        else if (getOpenedBox1() == 24)
        {
            return getBox24();
        }
        else return 0;
        }

    //Hide opened boxes
    void hideOpenBoxes();

    //Set box enable
    void setAnable(int p_box);

    //Save opened box
    void saveOpenedBox(int p_box);

    void setCounterTriesNull() { this->m_counterTries = 0; };
    void setCounterTriesPlus(){ this->m_counterTries += 1; };
    int getCounterTires() { return this->m_counterTries; };

    void allEnable();

    void setAble(int, int);


    void setCounterOpenBoxesNull() { this->m_counterOpenBoxes = 0; };
    void setCounterOpenBoxesPlus() { this->m_counterOpenBoxes += 1; };
    int getCounterOpenBoxes()  { return this->m_counterOpenBoxes; };

private slots:
    void on_btn_1_released();

    void on_btn_2_released();

    void on_btn_3_released();

    void on_btn_4_released();

    void on_btn_5_released();

    void on_btn_6_released();

    void on_btn_7_released();

    void on_btn_8_released();

    void on_btn_9_released();

    void on_btn_10_released();

    void on_btn_11_released();

    void on_btn_12_released();

    void on_btn_13_released();

    void on_btn_14_released();

    void on_btn_15_released();

    void on_btn_16_released();

    void on_btn_17_released();

    void on_btn_18_released();

    void on_btn_19_released();

    void on_btn_20_released();

    void on_btn_21_released();

    void on_btn_22_released();

    void on_btn_23_released();

    void on_btn_24_released();


    void on_btn_exitGp_released();

public slots:
    void start(void)
    {
        m_StartTime = QDateTime::currentDateTime();
        m_Running = true;
    }

    void stop(void)
    {
        m_Running = false;
    }

private:
    Ui::playwindow *ui;

     QString m_box1;
     QString m_box2;
     QString m_box3;
     QString m_box4;
     QString m_box5;
     QString m_box6;
     QString m_box7;
     QString m_box8;
     QString m_box9;
     QString m_box11;
     QString m_box10;
     QString m_box12;
     QString m_box13;
     QString m_box14;
     QString m_box15;
     QString m_box16;
     QString m_box17;
     QString m_box18;
     QString m_box19;
     QString m_box20;
     QString m_box21;
     QString m_box22;
     QString m_box23;
     QString m_box24;

     int m_counter = 0;
     int m_counterTries = 0;

     int m_saveOpenedBox1 = 0;
     int m_saveopenedBox2 = 0;

     bool m_Running;
     QDateTime m_StartTime;

     int m_counterOpenBoxes = 0;
};

#endif // PLAYWINDOW_H
