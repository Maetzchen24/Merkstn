#include "playwindow.h"
#include "ui_playwindow.h"
#include <QDateTime>
#include <QtGlobal>
#include <QtMsgHandler>
#include <QTimer>
#include <QLabel>
#include <QTime>
#include <QElapsedTimer>
#include "QRandomGenerator"
#include "FurtherFunctions.h"
#include "QPixmap"
#include "QDebug"
#include "QPainter"
#include "QStyleOption"
#include <time.h>
#include <stdlib.h>
#include "randomnum.h"
#include "boxes.h"
#include "startwindow.h"
#include <QMessageBox>

playwindow::playwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::playwindow)
{
    ui->setupUi(this);

    this->setFixedSize(this->size());
    this->setWindowTitle("MEMORY");
    this->setStyleSheet("background-image: url(:/MemoSingleObjects/backgroundWidget3.png)");
    this->ui->btn_exitGp->setStyleSheet("background: rgba(0,0,0,50)");
    this->ui->lbl_stopwatch->setStyleSheet("QLabel {background: rgba(255,255,255,0); color: rgb(213, 216, 220);}");
    this->ui->lbl_tries->setStyleSheet("QLabel {background: rgba(255,255,255,0); color: rgb(213, 216, 220);}");

    //Counter-tries
    setCounterNull();

    QString bIamge = "background-image: url(:/MemoSingleObjects/backgroundsquare.jfif)";
    this->ui->btn_1->setStyleSheet(bIamge);
    this->ui->btn_2->setStyleSheet(bIamge);
    this->ui->btn_3->setStyleSheet(bIamge);
    this->ui->btn_4->setStyleSheet(bIamge);
    this->ui->btn_5->setStyleSheet(bIamge);
    this->ui->btn_6->setStyleSheet(bIamge);
    this->ui->btn_7->setStyleSheet(bIamge);
    this->ui->btn_8->setStyleSheet(bIamge);
    this->ui->btn_9->setStyleSheet(bIamge);
    this->ui->btn_10->setStyleSheet(bIamge);
    this->ui->btn_11->setStyleSheet(bIamge);
    this->ui->btn_12->setStyleSheet(bIamge);
    this->ui->btn_13->setStyleSheet(bIamge);
    this->ui->btn_14->setStyleSheet(bIamge);
    this->ui->btn_15->setStyleSheet(bIamge);
    this->ui->btn_16->setStyleSheet(bIamge);
    this->ui->btn_17->setStyleSheet(bIamge);
    this->ui->btn_18->setStyleSheet(bIamge);
    this->ui->btn_19->setStyleSheet(bIamge);
    this->ui->btn_20->setStyleSheet(bIamge);
    this->ui->btn_21->setStyleSheet(bIamge);
    this->ui->btn_22->setStyleSheet(bIamge);
    this->ui->btn_23->setStyleSheet(bIamge);
    this->ui->btn_24->setStyleSheet(bIamge);

    //Box empty = false
    bool settedBox1;
    settedBox1 = false;
    bool settedBox2;
    settedBox2 = false;
    bool settedBox3;
    settedBox3 = false;
    bool settedBox4;
    settedBox4= false;
    bool settedBox5;
    settedBox5 = false;
    bool settedBox6;
    settedBox6 = false;
    bool settedBox7;
    settedBox7 = false;
    bool settedBox8;
    settedBox8 = false;
    bool settedBox9;
    settedBox9 = false;
    bool settedBox10;
    settedBox10 = false;
    bool settedBox11;
    settedBox11 = false;
    bool settedBox12;
    settedBox12 = false;
    bool settedBox13;
    settedBox13 = false;
    bool settedBox14;
    settedBox14 = false;
    bool settedBox15;
    settedBox15 = false;
    bool settedBox16;
    settedBox16 = false;
    bool settedBox17;
    settedBox17 = false;
    bool settedBox18;
    settedBox18 = false;
    bool settedBox19;
    settedBox19 = false;
    bool settedBox20;
    settedBox20 = false;
    bool settedBox21;
    settedBox21 = false;
    bool settedBox22;
    settedBox22 = false;
    bool settedBox23;
    settedBox23 = false;
    bool settedBox24;
    settedBox24 = false;

    //Image counter
    int countImg1 = 0;
    int countImg2 = 0;
    int countImg3 = 0;
    int countImg4 = 0;
    int countImg5 = 0;
    int countImg6 = 0;
    int countImg7 = 0;
    int countImg8 = 0;
    int countImg9 = 0;
    int countImg10 = 0;
    int countImg11 = 0;
    int countImg12 = 0;

    //Needed for loop break;
    bool allSetted;
    allSetted = false;

    qsrand(time(NULL));

    while(allSetted == false)
    {
        int low = 1;
        int highBox = 24;

        QString image;

        int randNumBox1 = 0;
        int randNumBox2 = 0;

        //Image 1
        if (countImg1 <= 1)
        {
            //Image set
            image = "background-image: url(:/MemoSingleObjects/apple.jpg)";

            //Two random boxes
            randNumBox1 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 1:::::::::: " << randNumBox1;
            randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 2:::::::::: " << randNumBox2;
            //If box1 has same num as box2
            while(randNumBox1 == randNumBox2)
            {
                randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            }
            qDebug() << "Zufallszahl nach while:::::::::: " << randNumBox2;

            //Setting image to box1
            if (randNumBox1 == 1 && settedBox1 == false )
            {
                this->setBox1(image);
                //Box is filled
                countImg1++;
                settedBox1 = true;
            }
            else if(randNumBox1 == 2 && settedBox2 == false )
            {
                this->setBox2(image);
                countImg1++;
                settedBox2 = true;
            }
            else if(randNumBox1 == 3 && settedBox3 == false )
            {
                this->setBox3(image);
                countImg1++;
                settedBox3 = true;
            }
            else if(randNumBox1 == 4  && settedBox4 == false )
            {
                this->setBox4(image);
                countImg1++;
                settedBox4 = true;
            }
            else if(randNumBox1 == 5 && settedBox5 == false )
            {
                this->setBox5(image);
                countImg1++;
                settedBox5 = true;
            }
            else if(randNumBox1 == 6 && settedBox6 == false )
            {
                this->setBox6(image);
                countImg1++;
                settedBox6 = true;
            }
            else if(randNumBox1 == 7 && settedBox7 == false )
            {
                this->setBox7(image);
                countImg1++;
                settedBox7 = true;
            }
            else if(randNumBox1 == 8 && settedBox8 == false )
            {
                this->setBox8(image);
                countImg1++;
                settedBox8 = true;
            }
            else if(randNumBox1 == 9 && settedBox9 == false )
            {
                this->setBox9(image);
                countImg1++;
                settedBox9 = true;
            }
            else if(randNumBox1 == 10 && settedBox10 == false )
            {
                this->setBox10(image);
                countImg1++;
                settedBox10 = true;
            }
            else if(randNumBox1 == 11 && settedBox11 == false )
            {
                this->setBox11(image);
                countImg1++;
                settedBox11 = true;
            }
            else if(randNumBox1 == 12 && settedBox12 == false )
            {
                this->setBox12(image);
                countImg1++;
                settedBox12 = true;
            }
            else if(randNumBox1 == 13 && settedBox13 == false )
            {
               this->setBox13(image);
                countImg1++;
                settedBox13 = true;
            }
            else if(randNumBox1 == 14 && settedBox14 == false )
            {
                this->setBox14(image);
                countImg1++;
                settedBox14 = true;
            }
            else if(randNumBox1 == 15 && settedBox15 == false )
            {
                this->setBox15(image);
                countImg1++;
                settedBox15 = true;
            }
            else if(randNumBox1 == 16 && settedBox16 == false )
            {
                this->setBox16(image);
                countImg1++;
                settedBox16 = true;
            }
            else if(randNumBox1 == 17 && settedBox17 == false )
            {
                this->setBox17(image);
                countImg1++;
                settedBox17 = true;
            }
            else if(randNumBox1 == 18 && settedBox18 == false )
            {
                this->setBox18(image);
                countImg1++;
                settedBox18 = true;
            }
            else if(randNumBox1 == 19 && settedBox19 == false )
            {
               this->setBox19(image);
                countImg1++;
                settedBox19 = true;
            }
            else if(randNumBox1 == 20 && settedBox20 == false )
            {
                this->setBox20(image);
                countImg1++;
                settedBox20 = true;
            }
            else if(randNumBox1 == 21 && settedBox21 == false )
            {
               this->setBox21(image);
                countImg1++;
                settedBox21 = true;
            }
            else if(randNumBox1 == 22 && settedBox22 == false )
            {
                this->setBox22(image);
                countImg1++;
                settedBox22 = true;
            }
            else if(randNumBox1 == 23 && settedBox23 == false )
            {
                this->setBox23(image);
                countImg1++;
                settedBox23 = true;
            }
            else if(randNumBox1 == 24 && settedBox24 == false )
            {
                this->setBox24(image);
                countImg1++;
                settedBox24 = true;
            }
            else if(randNumBox1)
            {
                qInfo("Box image already setted");
            }
            else
            {
                qInfo("Error setting image to box");
            }

             qDebug() << "counter img 1::::::::::: " << countImg1;

             //check counter again
            if(countImg1 <= 1)
            {

                //Setting image to box2
                if (randNumBox2 == 1 && settedBox1 == false )
                {
                   this->setBox1(image);
                    countImg1++;
                   //Box is filled
                   settedBox1 = true;
                }
                else if(randNumBox2 == 2 && settedBox2 == false )
                {
                    this->setBox2(image);
                    countImg1++;
                    settedBox2 = true;
                }
                else if(randNumBox2 == 3 && settedBox3 == false )
                {
                    this->setBox3(image);
                    countImg1++;
                    settedBox3 = true;
                }
                else if(randNumBox2 == 4  && settedBox4 == false )
                {
                    this->setBox4(image);
                    countImg1++;
                    settedBox4 = true;
                }
                else if(randNumBox2 == 5 && settedBox5 == false )
                {
                    this->setBox5(image);
                    countImg1++;
                    settedBox5 = true;
                }
                else if(randNumBox2 == 6 && settedBox6 == false )
                {
                    this->setBox6(image);
                    countImg1++;
                    settedBox6 = true;
                }
                else if(randNumBox2 == 7 && settedBox7 == false )
                {
                    this->setBox7(image);
                    countImg1++;
                    settedBox7 = true;
                }
                else if(randNumBox2 == 8 && settedBox8 == false )
                {
                    this->setBox8(image);
                    countImg1++;
                    settedBox8 = true;
                }
                else if(randNumBox2 == 9 && settedBox9 == false )
                {
                    this->setBox9(image);
                    countImg1++;
                    settedBox9 = true;
                }
                else if(randNumBox2 == 10 && settedBox10 == false )
                {
                    this->setBox10(image);
                    countImg1++;
                    settedBox10 = true;
                }
                else if(randNumBox2 == 11 && settedBox11 == false )
                {
                    this->setBox11(image);
                    countImg1++;
                    settedBox11 = true;
                }
                else if(randNumBox2 == 12 && settedBox12 == false )
                {
                    this->setBox12(image);
                    countImg1++;
                    settedBox12 = true;
                }
                else if(randNumBox2 == 13 && settedBox13 == false )
                {
                    this->setBox13(image);
                    countImg1++;
                    settedBox13 = true;
                }
                else if(randNumBox2 == 14 && settedBox14 == false )
                {
                    this->setBox14(image);
                    countImg1++;
                    settedBox14 = true;
                }
                else if(randNumBox2 == 15 && settedBox15 == false )
                {
                    this->setBox15(image);
                    countImg1++;
                    settedBox15 = true;
                }
                else if(randNumBox2 == 16 && settedBox16 == false )
                {
                    this->setBox16(image);
                    countImg1++;
                    settedBox16 = true;
                }
                else if(randNumBox2 == 17 && settedBox17 == false )
                {
                   this->setBox17(image);
                    countImg1++;
                    settedBox17 = true;
                }
                else if(randNumBox2 == 18 && settedBox18 == false )
                {
                    this->setBox18(image);
                    countImg1++;
                    settedBox18 = true;
                }
                else if(randNumBox2 == 19 && settedBox19 == false )
                {
                    this->setBox19(image);
                    countImg1++;
                    settedBox19 = true;
                }
                else if(randNumBox2 == 20 && settedBox20 == false )
                {
                   this->setBox20(image);
                    countImg1++;
                    settedBox20 = true;
                }
                else if(randNumBox2 == 21 && settedBox21 == false )
                {
                    this->setBox21(image);
                    countImg1++;
                    settedBox21 = true;
                }
                else if(randNumBox2 == 22 && settedBox22 == false )
                {
                    this->setBox22(image);
                    countImg1++;
                    settedBox22 = true;
                }
                else if(randNumBox2 == 23 && settedBox23 == false )
                {
                    this->setBox23(image);
                    countImg1++;
                    settedBox23 = true;
                }
                else if(randNumBox2 == 24 && settedBox24 == false )
                {
                    this->setBox24(image);
                    countImg1++;
                    settedBox24 = true;
                }
                else if(randNumBox2)
                {
                    qInfo("Box image already setted");
                }
                else
                {
                    qInfo("Error setting image to box");
                }

                qDebug() << "counter img 1::::::::::: " << countImg1;
            }
         }

        //Image 2
        if (countImg2 <= 1)
        {
            //Image set
            image = "background-image: url(:/MemoSingleObjects/bird.jpg)";

            //Two random boxes
            randNumBox1 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 1:::::::::: " << randNumBox1;
            randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 2:::::::::: " << randNumBox2;
            //If box1 has same num as box2
            while(randNumBox1 == randNumBox2)
            {
                randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            }
            qDebug() << "Zufallszahl nach while:::::::::: " << randNumBox2;

            //Setting image to box1
            if (randNumBox1 == 1 && settedBox1 == false )
            {
                this->setBox1(image);
                //Box is filled
                countImg2++;
                settedBox1 = true;
            }
            else if(randNumBox1 == 2 && settedBox2 == false )
            {
               this->setBox2(image);
                countImg2++;
                settedBox2 = true;
            }
            else if(randNumBox1 == 3 && settedBox3 == false )
            {
                this->setBox3(image);
                countImg2++;
                settedBox3 = true;
            }
            else if(randNumBox1 == 4  && settedBox4 == false )
            {
                this->setBox4(image);
                countImg2++;
                settedBox4 = true;
            }
            else if(randNumBox1 == 5 && settedBox5 == false )
            {
                this->setBox5(image);
                countImg2++;
                settedBox5 = true;
            }
            else if(randNumBox1 == 6 && settedBox6 == false )
            {
                this->setBox6(image);
                countImg2++;
                settedBox6 = true;
            }
            else if(randNumBox1 == 7 && settedBox7 == false )
            {
                this->setBox7(image);
                countImg2++;
                settedBox7 = true;
            }
            else if(randNumBox1 == 8 && settedBox8 == false )
            {
                this->setBox8(image);
                countImg2++;
                settedBox8 = true;
            }
            else if(randNumBox1 == 9 && settedBox9 == false )
            {
                this->setBox9(image);
                countImg2++;
                settedBox9 = true;
            }
            else if(randNumBox1 == 10 && settedBox10 == false )
            {
                this->setBox10(image);
                countImg2++;
                settedBox10 = true;
            }
            else if(randNumBox1 == 11 && settedBox11 == false )
            {
                this->setBox11(image);
                countImg2++;
                settedBox11 = true;
            }
            else if(randNumBox1 == 12 && settedBox12 == false )
            {
                this->setBox12(image);
                countImg2++;
                settedBox12 = true;
            }
            else if(randNumBox1 == 13 && settedBox13 == false )
            {
                this->setBox13(image);
                countImg2++;
                settedBox13 = true;
            }
            else if(randNumBox1 == 14 && settedBox14 == false )
            {
                this->setBox14(image);
                countImg2++;
                settedBox14 = true;
            }
            else if(randNumBox1 == 15 && settedBox15 == false )
            {
                this->setBox15(image);
                countImg2++;
                settedBox15 = true;
            }
            else if(randNumBox1 == 16 && settedBox16 == false )
            {
                this->setBox16(image);
                countImg2++;
                settedBox16 = true;
            }
            else if(randNumBox1 == 17 && settedBox17 == false )
            {
                this->setBox17(image);
                countImg2++;
                settedBox17 = true;
            }
            else if(randNumBox1 == 18 && settedBox18 == false )
            {
                this->setBox18(image);
                countImg2++;
                settedBox18 = true;
            }
            else if(randNumBox1 == 19 && settedBox19 == false )
            {
                this->setBox19(image);
                countImg2++;
                settedBox19 = true;
            }
            else if(randNumBox1 == 20 && settedBox20 == false )
            {
                this->setBox20(image);
                countImg2++;
                settedBox20 = true;
            }
            else if(randNumBox1 == 21 && settedBox21 == false )
            {
                this->setBox21(image);
                countImg2++;
                settedBox21 = true;
            }
            else if(randNumBox1 == 22 && settedBox22 == false )
            {
                this->setBox22(image);
                countImg2++;
                settedBox22 = true;
            }
            else if(randNumBox1 == 23 && settedBox23 == false )
            {
                this->setBox23(image);
                countImg2++;
                settedBox23 = true;
            }
            else if(randNumBox1 == 24 && settedBox24 == false )
            {
               this->setBox24(image);
                countImg2++;
                settedBox24 = true;
            }
            else if(randNumBox1)
            {
                qInfo("Box image already setted");
            }
            else
            {
                qInfo("Error setting image to box");
            }

            qDebug() << "counter img 2::::::::::: " << countImg2;

            //check counter again
           if(countImg2 <= 1)
           {

                //Setting image to box2
                if (randNumBox2 == 1 && settedBox1 == false )
                {
                   this->setBox1(image);
                    countImg2++;
                   //Box is filled
                   settedBox1 = true;
                }
                else if(randNumBox2 == 2 && settedBox2 == false )
                {
                    this->setBox2(image);
                    countImg2++;
                    settedBox2 = true;
                }
                else if(randNumBox2 == 3 && settedBox3 == false )
                {
                    this->setBox3(image);
                    countImg2++;
                    settedBox3 = true;
                }
                else if(randNumBox2 == 4  && settedBox4 == false )
                {
                    this->setBox4(image);
                    countImg2++;
                    settedBox4 = true;
                }
                else if(randNumBox2 == 5 && settedBox5 == false )
                {
                   this->setBox5(image);
                    countImg2++;
                    settedBox5 = true;
                }
                else if(randNumBox2 == 6 && settedBox6 == false )
                {
                    this->setBox6(image);
                    countImg2++;
                    settedBox6 = true;
                }
                else if(randNumBox2 == 7 && settedBox7 == false )
                {
                    this->setBox7(image);
                    countImg2++;
                    settedBox7 = true;
                }
                else if(randNumBox2 == 8 && settedBox8 == false )
                {
                    this->setBox8(image);
                    countImg2++;
                    settedBox8 = true;
                }
                else if(randNumBox2 == 9 && settedBox9 == false )
                {
                   this->setBox9(image);
                    countImg2++;
                    settedBox9 = true;
                }
                else if(randNumBox2 == 10 && settedBox10 == false )
                {
                   this->setBox10(image);
                    countImg2++;
                    settedBox10 = true;
                }
                else if(randNumBox2 == 11 && settedBox11 == false )
                {
                    this->setBox11(image);
                    countImg2++;
                    settedBox11 = true;
                }
                else if(randNumBox2 == 12 && settedBox12 == false )
                {
                    this->setBox12(image);
                    countImg2++;
                    settedBox12 = true;
                }
                else if(randNumBox2 == 13 && settedBox13 == false )
                {
                    this->setBox13(image);
                    countImg2++;
                    settedBox13 = true;
                }
                else if(randNumBox2 == 14 && settedBox14 == false )
                {
                    this->setBox14(image);
                    countImg2++;
                    settedBox14 = true;
                }
                else if(randNumBox2 == 15 && settedBox15 == false )
                {
                   this->setBox15(image);
                    countImg2++;
                    settedBox15 = true;
                }
                else if(randNumBox2 == 16 && settedBox16 == false )
                {
                    this->setBox16(image);
                    countImg2++;
                    settedBox16 = true;
                }
                else if(randNumBox2 == 17 && settedBox17 == false )
                {
                    this->setBox17(image);
                    countImg2++;
                    settedBox17 = true;
                }
                else if(randNumBox2 == 18 && settedBox18 == false )
                {
                   this->setBox18(image);
                    countImg2++;
                    settedBox18 = true;
                }
                else if(randNumBox2 == 19 && settedBox19 == false )
                {
                    this->setBox19(image);
                    countImg2++;
                    settedBox19 = true;
                }
                else if(randNumBox2 == 20 && settedBox20 == false )
                {
                    this->setBox20(image);
                    countImg2++;
                    settedBox20 = true;
                }
                else if(randNumBox2 == 21 && settedBox21 == false )
                {
                    this->setBox21(image);
                    countImg2++;
                    settedBox21 = true;
                }
                else if(randNumBox2 == 22 && settedBox22 == false )
                {
                    this->setBox22(image);
                    countImg2++;
                    settedBox22 = true;
                }
                else if(randNumBox2 == 23 && settedBox23 == false )
                {
                    this->setBox23(image);
                    countImg2++;
                    settedBox23 = true;
                }
                else if(randNumBox2 == 24 && settedBox24 == false )
                {
                    this->setBox24(image);
                    countImg2++;
                    settedBox24 = true;
                }
                else if(randNumBox2)
                {
                    qInfo("Box image already setted");
                }
                else
                {
                    qInfo("Error setting image to box");
                }

                qDebug() << "counter img 2::::::::::: " << countImg2;
            }
         }

        //Image 3
        if (countImg3 <= 1)
        {
            //Image set
            image = "background-image: url(:/MemoSingleObjects/cat.jpg)";

            //Two random boxes
            randNumBox1 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 1:::::::::: " << randNumBox1;
            randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 2:::::::::: " << randNumBox2;
            //If box1 has same num as box2
            while(randNumBox1 == randNumBox2)
            {
                randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            }
            qDebug() << "Zufallszahl nach while:::::::::: " << randNumBox2;

            //Setting image to box1
            if (randNumBox1 == 1 && settedBox1 == false )
            {
                this->setBox1(image);
                //Box is filled
                countImg3++;
                settedBox1 = true;
            }
            else if(randNumBox1 == 2 && settedBox2 == false )
            {
                this->setBox2(image);
                countImg3++;
                settedBox2 = true;
            }
            else if(randNumBox1 == 3 && settedBox3 == false )
            {
               this->setBox3(image);
                countImg3++;
                settedBox3 = true;
            }
            else if(randNumBox1 == 4  && settedBox4 == false )
            {
               this->setBox4(image);
                countImg3++;
                settedBox4 = true;
            }
            else if(randNumBox1 == 5 && settedBox5 == false )
            {
                this->setBox5(image);
                countImg3++;
                settedBox5 = true;
            }
            else if(randNumBox1 == 6 && settedBox6 == false )
            {
               this->setBox6(image);
                countImg3++;
                settedBox6 = true;
            }
            else if(randNumBox1 == 7 && settedBox7 == false )
            {
                this->setBox7(image);
                countImg3++;
                settedBox7 = true;
            }
            else if(randNumBox1 == 8 && settedBox8 == false )
            {
                this->setBox8(image);
                countImg3++;
                settedBox8 = true;
            }
            else if(randNumBox1 == 9 && settedBox9 == false )
            {
                this->setBox9(image);
                countImg3++;
                settedBox9 = true;
            }
            else if(randNumBox1 == 10 && settedBox10 == false )
            {
                this->setBox10(image);
                countImg3++;
                settedBox10 = true;
            }
            else if(randNumBox1 == 11 && settedBox11 == false )
            {
                this->setBox11(image);
                countImg3++;
                settedBox11 = true;
            }
            else if(randNumBox1 == 12 && settedBox12 == false )
            {
                this->setBox12(image);
                countImg3++;
                settedBox12 = true;
            }
            else if(randNumBox1 == 13 && settedBox13 == false )
            {
                this->setBox13(image);
                countImg3++;
                settedBox13 = true;
            }
            else if(randNumBox1 == 14 && settedBox14 == false )
            {
                this->setBox14(image);
                countImg3++;
                settedBox14 = true;
            }
            else if(randNumBox1 == 15 && settedBox15 == false )
            {
                this->setBox15(image);
                countImg3++;
                settedBox15 = true;
            }
            else if(randNumBox1 == 16 && settedBox16 == false )
            {
                this->setBox16(image);
                countImg3++;
                settedBox16 = true;
            }
            else if(randNumBox1 == 17 && settedBox17 == false )
            {
               this->setBox17(image);
                countImg3++;
                settedBox17 = true;
            }
            else if(randNumBox1 == 18 && settedBox18 == false )
            {
                this->setBox18(image);
                countImg3++;
                settedBox18 = true;
            }
            else if(randNumBox1 == 19 && settedBox19 == false )
            {
                this->setBox19(image);
                countImg3++;
                settedBox19 = true;
            }
            else if(randNumBox1 == 20 && settedBox20 == false )
            {
                this->setBox20(image);
                countImg3++;
                settedBox20 = true;
            }
            else if(randNumBox1 == 21 && settedBox21 == false )
            {
                this->setBox21(image);
                countImg3++;
                settedBox21 = true;
            }
            else if(randNumBox1 == 22 && settedBox22 == false )
            {
                this->setBox22(image);
                countImg3++;
                settedBox22 = true;
            }
            else if(randNumBox1 == 23 && settedBox23 == false )
            {
                this->setBox23(image);
                countImg3++;
                settedBox23 = true;
            }
            else if(randNumBox1 == 24 && settedBox24 == false )
            {
                this->setBox24(image);
                countImg3++;
                settedBox24 = true;
            }
            else if(randNumBox1)
            {
                qInfo("Box image already setted");
            }
            else
            {
                qInfo("Error setting image to box");
            }

            qDebug() << "counter img 3::::::::::: " << countImg3;

            //check counter again
           if(countImg3 <= 1)
           {

                //Setting image to box2
                if (randNumBox2 == 1 && settedBox1 == false )
                {
                   this->setBox1(image);
                    countImg3++;
                   //Box is filled
                   settedBox1 = true;
                }
                else if(randNumBox2 == 2 && settedBox2 == false )
                {
                    this->setBox2(image);
                    countImg3++;
                    settedBox2 = true;
                }
                else if(randNumBox2 == 3 && settedBox3 == false )
                {
                   this->setBox3(image);
                    countImg3++;
                    settedBox3 = true;
                }
                else if(randNumBox2 == 4  && settedBox4 == false )
                {
                    this->setBox4(image);
                    countImg3++;
                    settedBox4 = true;
                }
                else if(randNumBox2 == 5 && settedBox5 == false )
                {
                   this->setBox5(image);
                    countImg3++;
                    settedBox5 = true;
                }
                else if(randNumBox2 == 6 && settedBox6 == false )
                {
                   this->setBox6(image);
                    countImg3++;
                    settedBox6 = true;
                }
                else if(randNumBox2 == 7 && settedBox7 == false )
                {
                    this->setBox7(image);
                    countImg3++;
                    settedBox7 = true;
                }
                else if(randNumBox2 == 8 && settedBox8 == false )
                {
                    this->setBox8(image);
                    countImg3++;
                    settedBox8 = true;
                }
                else if(randNumBox2 == 9 && settedBox9 == false )
                {
                   this->setBox9(image);
                    countImg3++;
                    settedBox9 = true;
                }
                else if(randNumBox2 == 10 && settedBox10 == false )
                {
                   this->setBox10(image);
                    countImg3++;
                    settedBox10 = true;
                }
                else if(randNumBox2 == 11 && settedBox11 == false )
                {
                    this->setBox11(image);
                    countImg3++;
                    settedBox11 = true;
                }
                else if(randNumBox2 == 12 && settedBox12 == false )
                {
                   this->setBox12(image);
                    countImg3++;
                    settedBox12 = true;
                }
                else if(randNumBox2 == 13 && settedBox13 == false )
                {
                    this->setBox13(image);
                    countImg3++;
                    settedBox13 = true;
                }
                else if(randNumBox2 == 14 && settedBox14 == false )
                {
                    this->setBox14(image);
                    countImg3++;
                    settedBox14 = true;
                }
                else if(randNumBox2 == 15 && settedBox15 == false )
                {
                    this->setBox15(image);
                    countImg3++;
                    settedBox15 = true;
                }
                else if(randNumBox2 == 16 && settedBox16 == false )
                {
                    this->setBox16(image);
                    countImg3++;
                    settedBox16 = true;
                }
                else if(randNumBox2 == 17 && settedBox17 == false )
                {
                   this->setBox17(image);
                    countImg3++;
                    settedBox17 = true;
                }
                else if(randNumBox2 == 18 && settedBox18 == false )
                {
                    this->setBox18(image);
                    countImg3++;
                    settedBox18 = true;
                }
                else if(randNumBox2 == 19 && settedBox19 == false )
                {
                    this->setBox19(image);
                    countImg3++;
                    settedBox19 = true;
                }
                else if(randNumBox2 == 20 && settedBox20 == false )
                {
                    this->setBox20(image);
                    countImg3++;
                    settedBox20 = true;
                }
                else if(randNumBox2 == 21 && settedBox21 == false )
                {
                    this->setBox21(image);
                    countImg3++;
                    settedBox21 = true;
                }
                else if(randNumBox2 == 22 && settedBox22 == false )
                {
                    this->setBox22(image);
                    countImg3++;
                    settedBox22 = true;
                }
                else if(randNumBox2 == 23 && settedBox23 == false )
                {
                    this->setBox23(image);
                    countImg3++;
                    settedBox23 = true;
                }
                else if(randNumBox2 == 24 && settedBox24 == false )
                {
                    this->setBox24(image);
                    countImg3++;
                    settedBox24 = true;
                }
                else if(randNumBox2)
                {
                    qInfo("Box image already setted");
                }
                else
                {
                    qInfo("Error setting image to box");
                }
                qDebug() << "counter img 3::::::::::: " << countImg3;
             }
         }


        //Image 4
        if (countImg4 <= 1)
        {
            //Image set
            image = "background-image: url(:/MemoSingleObjects/coffee.jpg)";

            //Two random boxes
            randNumBox1 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 1:::::::::: " << randNumBox1;
            randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 2:::::::::: " << randNumBox2;
            //If box1 has same num as box2
            while(randNumBox1 == randNumBox2)
            {
                randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            }
            qDebug() << "Zufallszahl nach while:::::::::: " << randNumBox2;

            //Setting image to box1
            if (randNumBox1 == 1 && settedBox1 == false )
            {
                this->setBox1(image);
                //Box is filled
                countImg4++;
                settedBox1 = true;
            }
            else if(randNumBox1 == 2 && settedBox2 == false )
            {
                this->setBox2(image);
                countImg4++;
                settedBox2 = true;
            }
            else if(randNumBox1 == 3 && settedBox3 == false )
            {
                this->setBox3(image);
                countImg4++;
                settedBox3 = true;
            }
            else if(randNumBox1 == 4  && settedBox4 == false )
            {
               this->setBox4(image);
                countImg4++;
                settedBox4 = true;
            }
            else if(randNumBox1 == 5 && settedBox5 == false )
            {
               this->setBox5(image);
                countImg4++;
                settedBox5 = true;
            }
            else if(randNumBox1 == 6 && settedBox6 == false )
            {
                this->setBox6(image);
                countImg4++;
                settedBox6 = true;
            }
            else if(randNumBox1 == 7 && settedBox7 == false )
            {
                this->setBox7(image);
                countImg4++;
                settedBox7 = true;
            }
            else if(randNumBox1 == 8 && settedBox8 == false )
            {
                this->setBox8(image);
                countImg4++;
                settedBox8 = true;
            }
            else if(randNumBox1 == 9 && settedBox9 == false )
            {
                this->setBox9(image);
                countImg4++;
                settedBox9 = true;
            }
            else if(randNumBox1 == 10 && settedBox10 == false )
            {
               this->setBox10(image);
                countImg4++;
                settedBox10 = true;
            }
            else if(randNumBox1 == 11 && settedBox11 == false )
            {
                this->setBox11(image);
                countImg4++;
                settedBox11 = true;
            }
            else if(randNumBox1 == 12 && settedBox12 == false )
            {
               this->setBox12(image);
                countImg4++;
                settedBox12 = true;
            }
            else if(randNumBox1 == 13 && settedBox13 == false )
            {
                this->setBox13(image);
                countImg4++;
                settedBox13 = true;
            }
            else if(randNumBox1 == 14 && settedBox14 == false )
            {
                this->setBox14(image);
                countImg4++;
                settedBox14 = true;
            }
            else if(randNumBox1 == 15 && settedBox15 == false )
            {
                this->setBox15(image);
                countImg4++;
                settedBox15 = true;
            }
            else if(randNumBox1 == 16 && settedBox16 == false )
            {
                this->setBox16(image);
                countImg4++;
                settedBox16 = true;
            }
            else if(randNumBox1 == 17 && settedBox17 == false )
            {
                this->setBox17(image);
                countImg4++;
                settedBox17 = true;
            }
            else if(randNumBox1 == 18 && settedBox18 == false )
            {
               this->setBox18(image);
                countImg4++;
                settedBox18 = true;
            }
            else if(randNumBox1 == 19 && settedBox19 == false )
            {
                this->setBox19(image);
                countImg4++;
                settedBox19 = true;
            }
            else if(randNumBox1 == 20 && settedBox20 == false )
            {
                this->setBox20(image);
                countImg4++;
                settedBox20 = true;
            }
            else if(randNumBox1 == 21 && settedBox21 == false )
            {
                this->setBox21(image);
                countImg4++;
                settedBox21 = true;
            }
            else if(randNumBox1 == 22 && settedBox22 == false )
            {
                this->setBox22(image);
                countImg4++;
                settedBox22 = true;
            }
            else if(randNumBox1 == 23 && settedBox23 == false )
            {
               this->setBox23(image);
                countImg4++;
                settedBox23 = true;
            }
            else if(randNumBox1 == 24 && settedBox24 == false )
            {
                this->setBox24(image);
                countImg4++;
                settedBox24 = true;
            }
            else if(randNumBox1)
            {
                qInfo("Box image already setted");
            }
            else
            {
                qInfo("Error setting image to box");
            }
            qDebug() << "counter img 4::::::::::: " << countImg4;

            //check counter again
           if(countImg4 <= 1)
           {
                //Setting image to box2
                if (randNumBox2 == 1 && settedBox1 == false )
                {
                   this->setBox1(image);
                    countImg4++;
                   //Box is filled
                   settedBox1 = true;
                }
                else if(randNumBox2 == 2 && settedBox2 == false )
                {
                   this->setBox2(image);
                    countImg4++;
                    settedBox2 = true;
                }
                else if(randNumBox2 == 3 && settedBox3 == false )
                {
                    this->setBox3(image);
                    countImg4++;
                    settedBox3 = true;
                }
                else if(randNumBox2 == 4  && settedBox4 == false )
                {
                    this->setBox4(image);
                    countImg4++;
                    settedBox4 = true;
                }
                else if(randNumBox2 == 5 && settedBox5 == false )
                {
                    this->setBox5(image);
                    countImg4++;
                    settedBox5 = true;
                }
                else if(randNumBox2 == 6 && settedBox6 == false )
                {
                    this->setBox6(image);
                    countImg4++;
                    settedBox6 = true;
                }
                else if(randNumBox2 == 7 && settedBox7 == false )
                {
                    this->setBox7(image);
                    countImg4++;
                    settedBox7 = true;
                }
                else if(randNumBox2 == 8 && settedBox8 == false )
                {
                    this->setBox8(image);
                    countImg4++;
                    settedBox8 = true;
                }
                else if(randNumBox2 == 9 && settedBox9 == false )
                {
                    this->setBox9(image);
                    countImg4++;
                    settedBox9 = true;
                }
                else if(randNumBox2 == 10 && settedBox10 == false )
                {
                    this->setBox10(image);
                    countImg4++;
                    settedBox10 = true;
                }
                else if(randNumBox2 == 11 && settedBox11 == false )
                {
                    this->setBox11(image);
                    countImg4++;
                    settedBox11 = true;
                }
                else if(randNumBox2 == 12 && settedBox12 == false )
                {
                    this->setBox12(image);
                    countImg4++;
                    settedBox12 = true;
                }
                else if(randNumBox2 == 13 && settedBox13 == false )
                {
                   this->setBox13(image);
                    countImg4++;
                    settedBox13 = true;
                }
                else if(randNumBox2 == 14 && settedBox14 == false )
                {
                    this->setBox14(image);
                    countImg4++;
                    settedBox14 = true;
                }
                else if(randNumBox2 == 15 && settedBox15 == false )
                {
                    this->setBox15(image);
                    countImg4++;
                    settedBox15 = true;
                }
                else if(randNumBox2 == 16 && settedBox16 == false )
                {
                    this->setBox16(image);
                    countImg4++;
                    settedBox16 = true;
                }
                else if(randNumBox2 == 17 && settedBox17 == false )
                {
                    this->setBox17(image);
                    countImg4++;
                    settedBox17 = true;
                }
                else if(randNumBox2 == 18 && settedBox18 == false )
                {
                    this->setBox18(image);
                    countImg4++;
                    settedBox18 = true;
                }
                else if(randNumBox2 == 19 && settedBox19 == false )
                {
                    this->setBox19(image);
                    countImg4++;
                    settedBox19 = true;
                }
                else if(randNumBox2 == 20 && settedBox20 == false )
                {
                    this->setBox20(image);
                    countImg4++;
                    settedBox20 = true;
                }
                else if(randNumBox2 == 21 && settedBox21 == false )
                {
                    this->setBox21(image);
                    countImg4++;
                    settedBox21 = true;
                }
                else if(randNumBox2 == 22 && settedBox22 == false )
                {
                    this->setBox22(image);
                    countImg4++;
                    settedBox22 = true;
                }
                else if(randNumBox2 == 23 && settedBox23 == false )
                {
                    this->setBox23(image);
                    countImg4++;
                    settedBox23 = true;
                }
                else if(randNumBox2 == 24 && settedBox24 == false )
                {
                    this->setBox24(image);
                    countImg4++;
                    settedBox24 = true;
                }
                else if(randNumBox2)
                {
                    qInfo("Box image already setted");
                }
                else
                {
                    qInfo("Error setting image to box");
                }
                qDebug() << "counter img 4::::::::::: " << countImg4;
             }
         }



        //Image 5
        if (countImg5 <= 1)
        {
            //Image set
            image = "background-image: url(:/MemoSingleObjects/dog.jpg)";

            //Two random boxes
            randNumBox1 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 1:::::::::: " << randNumBox1;
            randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 2:::::::::: " << randNumBox2;
            //If box1 has same num as box2
            while(randNumBox1 == randNumBox2)
            {
                randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            }
            qDebug() << "Zufallszahl nach while:::::::::: " << randNumBox2;

            //Setting image to box1
            if (randNumBox1 == 1 && settedBox1 == false )
            {
                this->setBox1(image);
                //Box is filled
                countImg5++;
                settedBox1 = true;
            }
            else if(randNumBox1 == 2 && settedBox2 == false )
            {
                this->setBox2(image);
                countImg5++;
                settedBox2 = true;
            }
            else if(randNumBox1 == 3 && settedBox3 == false )
            {
                this->setBox3(image);
                countImg5++;
                settedBox3 = true;
            }
            else if(randNumBox1 == 4  && settedBox4 == false )
            {
                this->setBox4(image);
                countImg5++;
                settedBox4 = true;
            }
            else if(randNumBox1 == 5 && settedBox5 == false )
            {
                this->setBox5(image);
                countImg5++;
                settedBox5 = true;
            }
            else if(randNumBox1 == 6 && settedBox6 == false )
            {
                this->setBox6(image);
                countImg5++;
                settedBox6 = true;
            }
            else if(randNumBox1 == 7 && settedBox7 == false )
            {
                this->setBox7(image);
                countImg5++;
                settedBox7 = true;
            }
            else if(randNumBox1 == 8 && settedBox8 == false )
            {
                this->setBox8(image);
                countImg5++;
                settedBox8 = true;
            }
            else if(randNumBox1 == 9 && settedBox9 == false )
            {
                this->setBox9(image);
                countImg5++;
                settedBox9 = true;
            }
            else if(randNumBox1 == 10 && settedBox10 == false )
            {
                this->setBox10(image);
                countImg5++;
                settedBox10 = true;
            }
            else if(randNumBox1 == 11 && settedBox11 == false )
            {
                this->setBox11(image);
                countImg5++;
                settedBox11 = true;
            }
            else if(randNumBox1 == 12 && settedBox12 == false )
            {
                this->setBox12(image);
                countImg5++;
                settedBox12 = true;
            }
            else if(randNumBox1 == 13 && settedBox13 == false )
            {
                this->setBox13(image);
                countImg5++;
                settedBox13 = true;
            }
            else if(randNumBox1 == 14 && settedBox14 == false )
            {
                this->setBox14(image);
                countImg5++;
                settedBox14 = true;
            }
            else if(randNumBox1 == 15 && settedBox15 == false )
            {
                this->setBox15(image);
                countImg5++;
                settedBox15 = true;
            }
            else if(randNumBox1 == 16 && settedBox16 == false )
            {
                this->setBox16(image);
                countImg5++;
                settedBox16 = true;
            }
            else if(randNumBox1 == 17 && settedBox17 == false )
            {
                this->setBox17(image);
                countImg5++;
                settedBox17 = true;
            }
            else if(randNumBox1 == 18 && settedBox18 == false )
            {
                this->setBox18(image);
                countImg5++;
                settedBox18 = true;
            }
            else if(randNumBox1 == 19 && settedBox19 == false )
            {
                this->setBox19(image);
                countImg5++;
                settedBox19 = true;
            }
            else if(randNumBox1 == 20 && settedBox20 == false )
            {
                this->setBox20(image);
                countImg5++;
                settedBox20 = true;
            }
            else if(randNumBox1 == 21 && settedBox21 == false )
            {
                this->setBox21(image);
                countImg5++;
                settedBox21 = true;
            }
            else if(randNumBox1 == 22 && settedBox22 == false )
            {
                this->setBox22(image);
                countImg5++;
                settedBox22 = true;
            }
            else if(randNumBox1 == 23 && settedBox23 == false )
            {
                this->setBox23(image);
                countImg5++;
                settedBox23 = true;
            }
            else if(randNumBox1 == 24 && settedBox24 == false )
            {
                this->setBox24(image);
                countImg5++;
                settedBox24 = true;
            }
            else if(randNumBox1)
            {
                qInfo("Box image already setted");
            }
            else
            {
                qInfo("Error setting image to box");
            }
            qDebug() << "counter img 5::::::::::: " << countImg5;

            //check counter again
           if(countImg5 <= 1)
           {
                //Setting image to box2
                if (randNumBox2 == 1 && settedBox1 == false )
                {
                   this->setBox1(image);
                    countImg5++;
                   //Box is filled
                   settedBox1 = true;
                }
                else if(randNumBox2 == 2 && settedBox2 == false )
                {
                    this->setBox2(image);
                    countImg5++;
                    settedBox2 = true;
                }
                else if(randNumBox2 == 3 && settedBox3 == false )
                {
                    this->setBox3(image);
                    countImg5++;
                    settedBox3 = true;
                }
                else if(randNumBox2 == 4  && settedBox4 == false )
                {
                    this->setBox4(image);
                    countImg5++;
                    settedBox4 = true;
                }
                else if(randNumBox2 == 5 && settedBox5 == false )
                {
                    this->setBox5(image);
                    countImg5++;
                    settedBox5 = true;
                }
                else if(randNumBox2 == 6 && settedBox6 == false )
                {
                    this->setBox6(image);
                    countImg5++;
                    settedBox6 = true;
                }
                else if(randNumBox2 == 7 && settedBox7 == false )
                {
                   this->setBox7(image);
                    countImg5++;
                    settedBox7 = true;
                }
                else if(randNumBox2 == 8 && settedBox8 == false )
                {
                    this->setBox8(image);
                    countImg5++;
                    settedBox8 = true;
                }
                else if(randNumBox2 == 9 && settedBox9 == false )
                {
                    this->setBox9(image);
                    countImg5++;
                    settedBox9 = true;
                }
                else if(randNumBox2 == 10 && settedBox10 == false )
                {
                    this->setBox10(image);
                    countImg5++;
                    settedBox10 = true;
                }
                else if(randNumBox2 == 11 && settedBox11 == false )
                {
                    this->setBox11(image);
                    countImg5++;
                    settedBox11 = true;
                }
                else if(randNumBox2 == 12 && settedBox12 == false )
                {
                    this->setBox12(image);
                    countImg5++;
                    settedBox12 = true;
                }
                else if(randNumBox2 == 13 && settedBox13 == false )
                {
                    this->setBox13(image);
                    countImg5++;
                    settedBox13 = true;
                }
                else if(randNumBox2 == 14 && settedBox14 == false )
                {
                    this->setBox14(image);
                    countImg5++;
                    settedBox14 = true;
                }
                else if(randNumBox2 == 15 && settedBox15 == false )
                {
                    this->setBox15(image);
                    countImg5++;
                    settedBox15 = true;
                }
                else if(randNumBox2 == 16 && settedBox16 == false )
                {
                    this->setBox16(image);
                    countImg5++;
                    settedBox16 = true;
                }
                else if(randNumBox2 == 17 && settedBox17 == false )
                {
                    this->setBox17(image);
                    countImg5++;
                    settedBox17 = true;
                }
                else if(randNumBox2 == 18 && settedBox18 == false )
                {
                    this->setBox18(image);
                    countImg5++;
                    settedBox18 = true;
                }
                else if(randNumBox2 == 19 && settedBox19 == false )
                {
                    this->setBox19(image);
                    countImg5++;
                    settedBox19 = true;
                }
                else if(randNumBox2 == 20 && settedBox20 == false )
                {
                    this->setBox20(image);
                    countImg5++;
                    settedBox20 = true;
                }
                else if(randNumBox2 == 21 && settedBox21 == false )
                {
                    this->setBox21(image);
                    countImg5++;
                    settedBox21 = true;
                }
                else if(randNumBox2 == 22 && settedBox22 == false )
                {
                    this->setBox22(image);
                    countImg5++;
                    settedBox22 = true;
                }
                else if(randNumBox2 == 23 && settedBox23 == false )
                {
                    this->setBox23(image);
                    countImg5++;
                    settedBox23 = true;
                }
                else if(randNumBox2 == 24 && settedBox24 == false )
                {
                    this->setBox24(image);
                    countImg5++;
                    settedBox24 = true;
                }
                else if(randNumBox2)
                {
                    qInfo("Box image already setted");
                }
                else
                {
                    qInfo("Error setting image to box");
                }
                qDebug() << "counter img 5::::::::::: " << countImg5;
            }
         }


        //Image 6
        if (countImg6 <= 1)
        {
            //Image set
            image = "background-image: url(:/MemoSingleObjects/earth.jpg)";

            //Two random boxes
            randNumBox1 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 1:::::::::: " << randNumBox1;
            randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 2:::::::::: " << randNumBox2;
            //If box1 has same num as box2
            while(randNumBox1 == randNumBox2)
            {
                randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            }
            qDebug() << "Zufallszahl nach while:::::::::: " << randNumBox2;

            //Setting image to box1
            if (randNumBox1 == 1 && settedBox1 == false )
            {
                this->setBox1(image);
                //Box is filled
                countImg6++;
                settedBox1 = true;
            }
            else if(randNumBox1 == 2 && settedBox2 == false )
            {
                this->setBox2(image);
                countImg6++;
                settedBox2 = true;
            }
            else if(randNumBox1 == 3 && settedBox3 == false )
            {
                this->setBox3(image);
                countImg6++;
                settedBox3 = true;
            }
            else if(randNumBox1 == 4  && settedBox4 == false )
            {
                this->setBox4(image);
                countImg6++;
                settedBox4 = true;
            }
            else if(randNumBox1 == 5 && settedBox5 == false )
            {
                this->setBox5(image);
                countImg6++;
                settedBox5 = true;
            }
            else if(randNumBox1 == 6 && settedBox6 == false )
            {
               this->setBox6(image);
                countImg6++;
                settedBox6 = true;
            }
            else if(randNumBox1 == 7 && settedBox7 == false )
            {
               this->setBox7(image);
                countImg6++;
                settedBox7 = true;
            }
            else if(randNumBox1 == 8 && settedBox8 == false )
            {
                this->setBox8(image);
                countImg6++;
                settedBox8 = true;
            }
            else if(randNumBox1 == 9 && settedBox9 == false )
            {
                this->setBox9(image);
                countImg6++;
                settedBox9 = true;
            }
            else if(randNumBox1 == 10 && settedBox10 == false )
            {
                this->setBox10(image);
                countImg6++;
                settedBox10 = true;
            }
            else if(randNumBox1 == 11 && settedBox11 == false )
            {
                this->setBox11(image);
                countImg6++;
                settedBox11 = true;
            }
            else if(randNumBox1 == 12 && settedBox12 == false )
            {
                this->setBox12(image);
                countImg6++;
                settedBox12 = true;
            }
            else if(randNumBox1 == 13 && settedBox13 == false )
            {
                this->setBox13(image);
                countImg6++;
                settedBox13 = true;
            }
            else if(randNumBox1 == 14 && settedBox14 == false )
            {
                this->setBox14(image);
                countImg6++;
                settedBox14 = true;
            }
            else if(randNumBox1 == 15 && settedBox15 == false )
            {
                this->setBox15(image);
                countImg6++;
                settedBox15 = true;
            }
            else if(randNumBox1 == 16 && settedBox16 == false )
            {
                this->setBox16(image);
                countImg6++;
                settedBox16 = true;
            }
            else if(randNumBox1 == 17 && settedBox17 == false )
            {
                this->setBox17(image);
                countImg6++;
                settedBox17 = true;
            }
            else if(randNumBox1 == 18 && settedBox18 == false )
            {
                this->setBox18(image);
                countImg6++;
                settedBox18 = true;
            }
            else if(randNumBox1 == 19 && settedBox19 == false )
            {
                this->setBox19(image);
                countImg6++;
                settedBox19 = true;
            }
            else if(randNumBox1 == 20 && settedBox20 == false )
            {
               this->setBox20(image);
                countImg6++;
                settedBox20 = true;
            }
            else if(randNumBox1 == 21 && settedBox21 == false )
            {
                this->setBox21(image);
                countImg6++;
                settedBox21 = true;
            }
            else if(randNumBox1 == 22 && settedBox22 == false )
            {
                this->setBox22(image);
                countImg6++;
                settedBox22 = true;
            }
            else if(randNumBox1 == 23 && settedBox23 == false )
            {
                this->setBox23(image);
                countImg6++;
                settedBox23 = true;
            }
            else if(randNumBox1 == 24 && settedBox24 == false )
            {
                this->setBox24(image);
                countImg6++;
                settedBox24 = true;
            }
            else if(randNumBox1)
            {
                qInfo("Box image already setted");
            }
            else
            {
                qInfo("Error setting image to box");
            }
            qDebug() << "counter img 6::::::::::: " << countImg6;

            //check counter again
           if(countImg6 <= 1)
           {
                //Setting image to box2
                if (randNumBox2 == 1 && settedBox1 == false )
                {
                   this->setBox1(image);
                    countImg6++;
                   //Box is filled
                   settedBox1 = true;
                }
                else if(randNumBox2 == 2 && settedBox2 == false )
                {
                    this->setBox2(image);
                    countImg6++;
                    settedBox2 = true;
                }
                else if(randNumBox2 == 3 && settedBox3 == false )
                {
                    this->setBox3(image);
                    countImg6++;
                    settedBox3 = true;
                }
                else if(randNumBox2 == 4  && settedBox4 == false )
                {
                    this->setBox4(image);
                    countImg6++;
                    settedBox4 = true;
                }
                else if(randNumBox2 == 5 && settedBox5 == false )
                {
                    this->setBox5(image);
                    countImg6++;
                    settedBox5 = true;
                }
                else if(randNumBox2 == 6 && settedBox6 == false )
                {
                    this->setBox6(image);
                    countImg6++;
                    settedBox6 = true;
                }
                else if(randNumBox2 == 7 && settedBox7 == false )
                {
                    this->setBox7(image);
                    countImg6++;
                    settedBox7 = true;
                }
                else if(randNumBox2 == 8 && settedBox8 == false )
                {
                    this->setBox8(image);
                    countImg6++;
                    settedBox8 = true;
                }
                else if(randNumBox2 == 9 && settedBox9 == false )
                {
                    this->setBox9(image);
                    countImg6++;
                    settedBox9 = true;
                }
                else if(randNumBox2 == 10 && settedBox10 == false )
                {
                    this->setBox10(image);
                    countImg6++;
                    settedBox10 = true;
                }
                else if(randNumBox2 == 11 && settedBox11 == false )
                {
                    this->setBox11(image);
                    countImg6++;
                    settedBox11 = true;
                }
                else if(randNumBox2 == 12 && settedBox12 == false )
                {
                    this->setBox12(image);
                    countImg6++;
                    settedBox12 = true;
                }
                else if(randNumBox2 == 13 && settedBox13 == false )
                {
                    this->setBox13(image);
                    countImg6++;
                    settedBox13 = true;
                }
                else if(randNumBox2 == 14 && settedBox14 == false )
                {
                    this->setBox14(image);
                    countImg6++;
                    settedBox14 = true;
                }
                else if(randNumBox2 == 15 && settedBox15 == false )
                {
                    this->setBox15(image);
                    countImg6++;
                    settedBox15 = true;
                }
                else if(randNumBox2 == 16 && settedBox16 == false )
                {
                    this->setBox16(image);
                    countImg6++;
                    settedBox16 = true;
                }
                else if(randNumBox2 == 17 && settedBox17 == false )
                {
                    this->setBox17(image);
                    countImg6++;
                    settedBox17 = true;
                }
                else if(randNumBox2 == 18 && settedBox18 == false )
                {
                    this->setBox18(image);
                    countImg6++;
                    settedBox18 = true;
                }
                else if(randNumBox2 == 19 && settedBox19 == false )
                {
                    this->setBox19(image);
                    countImg6++;
                    settedBox19 = true;
                }
                else if(randNumBox2 == 20 && settedBox20 == false )
                {
                   this->setBox20(image);
                    countImg6++;
                    settedBox20 = true;
                }
                else if(randNumBox2 == 21 && settedBox21 == false )
                {
                    this->setBox21(image);
                    countImg6++;
                    settedBox21 = true;
                }
                else if(randNumBox2 == 22 && settedBox22 == false )
                {
                    this->setBox22(image);
                    countImg6++;
                    settedBox22 = true;
                }
                else if(randNumBox2 == 23 && settedBox23 == false )
                {
                    this->setBox23(image);
                    countImg6++;
                    settedBox23 = true;
                }
                else if(randNumBox2 == 24 && settedBox24 == false )
                {
                    this->setBox24(image);
                    countImg6++;
                    settedBox24 = true;
                }
                else if(randNumBox2)
                {
                    qInfo("Box image already setted");
                }
                else
                {
                    qInfo("Error setting image to box");
                }
                qDebug() << "counter img 6::::::::::: " << countImg6;
             }
         }


        //Image 7
        if (countImg7 <= 1)
        {
            //Image set
            image = "background-image: url(:/MemoSingleObjects/football.jpg)";

            //Two random boxes
            randNumBox1 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 1:::::::::: " << randNumBox1;
            randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 2:::::::::: " << randNumBox2;
            //If box1 has same num as box2
            while(randNumBox1 == randNumBox2)
            {
                randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            }
            qDebug() << "Zufallszahl nach while:::::::::: " << randNumBox2;

            //Setting image to box1
            if (randNumBox1 == 1 && settedBox1 == false )
            {
                this->setBox1(image);
                //Box is filled
                countImg7++;
                settedBox1 = true;
            }
            else if(randNumBox1 == 2 && settedBox2 == false )
            {
                this->setBox2(image);
                countImg7++;
                settedBox2 = true;
            }
            else if(randNumBox1 == 3 && settedBox3 == false )
            {
                this->setBox3(image);
                countImg7++;
                settedBox3 = true;
            }
            else if(randNumBox1 == 4  && settedBox4 == false )
            {
                this->setBox4(image);
                countImg7++;
                settedBox4 = true;
            }
            else if(randNumBox1 == 5 && settedBox5 == false )
            {
                this->setBox5(image);
                countImg7++;
                settedBox5 = true;
            }
            else if(randNumBox1 == 6 && settedBox6 == false )
            {
                this->setBox6(image);
                countImg7++;
                settedBox6 = true;
            }
            else if(randNumBox1 == 7 && settedBox7 == false )
            {
                this->setBox7(image);
                countImg7++;
                settedBox7 = true;
            }
            else if(randNumBox1 == 8 && settedBox8 == false )
            {
                this->setBox8(image);
                countImg7++;
                settedBox8 = true;
            }
            else if(randNumBox1 == 9 && settedBox9 == false )
            {
                this->setBox9(image);
                countImg7++;
                settedBox9 = true;
            }
            else if(randNumBox1 == 10 && settedBox10 == false )
            {
                this->setBox10(image);
                countImg7++;
                settedBox10 = true;
            }
            else if(randNumBox1 == 11 && settedBox11 == false )
            {
                this->setBox11(image);
                countImg7++;
                settedBox11 = true;
            }
            else if(randNumBox1 == 12 && settedBox12 == false )
            {
                this->setBox12(image);
                countImg7++;
                settedBox12 = true;
            }
            else if(randNumBox1 == 13 && settedBox13 == false )
            {
                this->setBox13(image);
                countImg7++;
                settedBox13 = true;
            }
            else if(randNumBox1 == 14 && settedBox14 == false )
            {
                this->setBox14(image);
                countImg7++;
                settedBox14 = true;
            }
            else if(randNumBox1 == 15 && settedBox15 == false )
            {
                this->setBox15(image);
                countImg7++;
                settedBox15 = true;
            }
            else if(randNumBox1 == 16 && settedBox16 == false )
            {
                this->setBox16(image);
                countImg7++;
                settedBox16 = true;
            }
            else if(randNumBox1 == 17 && settedBox17 == false )
            {
                this->setBox17(image);
                countImg7++;
                settedBox17 = true;
            }
            else if(randNumBox1 == 18 && settedBox18 == false )
            {
                this->setBox18(image);
                countImg7++;
                settedBox18 = true;
            }
            else if(randNumBox1 == 19 && settedBox19 == false )
            {
                this->setBox19(image);
                countImg7++;
                settedBox19 = true;
            }
            else if(randNumBox1 == 20 && settedBox20 == false )
            {
                this->setBox20(image);
                countImg7++;
                settedBox20 = true;
            }
            else if(randNumBox1 == 21 && settedBox21 == false )
            {
                this->setBox21(image);
                countImg7++;
                settedBox21 = true;
            }
            else if(randNumBox1 == 22 && settedBox22 == false )
            {
                this->setBox22(image);
                countImg7++;
                settedBox22 = true;
            }
            else if(randNumBox1 == 23 && settedBox23 == false )
            {
                this->setBox23(image);
                countImg7++;
                settedBox23 = true;
            }
            else if(randNumBox1 == 24 && settedBox24 == false )
            {
                this->setBox24(image);
                countImg7++;
                settedBox24 = true;
            }
            else if(randNumBox1)
            {
                qInfo("Box image already setted");
            }
            else
            {
                qInfo("Error setting image to box");
            }
            qDebug() << "counter img 7::::::::::: " << countImg7;

            //check counter again
           if(countImg7 <= 1)
           {
                //Setting image to box2
                if (randNumBox2 == 1 && settedBox1 == false )
                {
                   this->setBox1(image);
                    countImg7++;
                   //Box is filled
                   settedBox1 = true;
                }
                else if(randNumBox2 == 2 && settedBox2 == false )
                {
                    this->setBox2(image);
                    countImg7++;
                    settedBox2 = true;
                }
                else if(randNumBox2 == 3 && settedBox3 == false )
                {
                    this->setBox3(image);
                    countImg7++;
                    settedBox3 = true;
                }
                else if(randNumBox2 == 4  && settedBox4 == false )
                {
                    this->setBox4(image);
                    countImg7++;
                    settedBox4 = true;
                }
                else if(randNumBox2 == 5 && settedBox5 == false )
                {
                    this->setBox5(image);
                    countImg7++;
                    settedBox5 = true;
                }
                else if(randNumBox2 == 6 && settedBox6 == false )
                {
                    this->setBox6(image);
                    countImg7++;
                    settedBox6 = true;
                }
                else if(randNumBox2 == 7 && settedBox7 == false )
                {
                    this->setBox7(image);
                    countImg7++;
                    settedBox7 = true;
                }
                else if(randNumBox2 == 8 && settedBox8 == false )
                {
                    this->setBox8(image);
                    countImg7++;
                    settedBox8 = true;
                }
                else if(randNumBox2 == 9 && settedBox9 == false )
                {
                    this->setBox9(image);
                    countImg7++;
                    settedBox9 = true;
                }
                else if(randNumBox2 == 10 && settedBox10 == false )
                {
                    this->setBox10(image);
                    countImg7++;
                    settedBox10 = true;
                }
                else if(randNumBox2 == 11 && settedBox11 == false )
                {
                    this->setBox11(image);
                    countImg7++;
                    settedBox11 = true;
                }
                else if(randNumBox2 == 12 && settedBox12 == false )
                {
                    this->setBox12(image);
                    countImg7++;
                    settedBox12 = true;
                }
                else if(randNumBox2 == 13 && settedBox13 == false )
                {
                    this->setBox13(image);
                    countImg7++;
                    settedBox13 = true;
                }
                else if(randNumBox2 == 14 && settedBox14 == false )
                {
                    this->setBox14(image);
                    countImg7++;
                    settedBox14 = true;
                }
                else if(randNumBox2 == 15 && settedBox15 == false )
                {
                    this->setBox15(image);
                    countImg7++;
                    settedBox15 = true;
                }
                else if(randNumBox2 == 16 && settedBox16 == false )
                {
                    this->setBox16(image);
                    countImg7++;
                    settedBox16 = true;
                }
                else if(randNumBox2 == 17 && settedBox17 == false )
                {
                    this->setBox17(image);
                    countImg7++;
                    settedBox17 = true;
                }
                else if(randNumBox2 == 18 && settedBox18 == false )
                {
                    this->setBox18(image);
                    countImg7++;
                    settedBox18 = true;
                }
                else if(randNumBox2 == 19 && settedBox19 == false )
                {
                    this->setBox19(image);
                    countImg7++;
                    settedBox19 = true;
                }
                else if(randNumBox2 == 20 && settedBox20 == false )
                {
                    this->setBox20(image);
                    countImg7++;
                    settedBox20 = true;
                }
                else if(randNumBox2 == 21 && settedBox21 == false )
                {
                    this->setBox21(image);
                    countImg7++;
                    settedBox21 = true;
                }
                else if(randNumBox2 == 22 && settedBox22 == false )
                {
                    this->setBox22(image);
                    countImg7++;
                    settedBox22 = true;
                }
                else if(randNumBox2 == 23 && settedBox23 == false )
                {
                    this->setBox23(image);
                    countImg7++;
                    settedBox23 = true;
                }
                else if(randNumBox2 == 24 && settedBox24 == false )
                {
                    this->setBox24(image);
                    countImg7++;
                    settedBox24 = true;
                }
                else if(randNumBox2)
                {
                    qInfo("Box image already setted");
                }
                else
                {
                    qInfo("Error setting image to box");
                }
                 qDebug() << "counter img 7::::::::::: " << countImg7;
             }
         }



        //Image 8
        if (countImg8 <= 1)
        {
            //Image set
            image = "background-image: url(:/MemoSingleObjects/glasses.jpg)";

            //Two random boxes
            randNumBox1 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 1:::::::::: " << randNumBox1;
            randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 2:::::::::: " << randNumBox2;
            //If box1 has same num as box2
            while(randNumBox1 == randNumBox2)
            {
                randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            }
            qDebug() << "Zufallszahl nach while:::::::::: " << randNumBox2;

            //Setting image to box1
            if (randNumBox1 == 1 && settedBox1 == false )
            {
                this->setBox1(image);
                //Box is filled
                countImg8++;
                settedBox1 = true;
            }
            else if(randNumBox1 == 2 && settedBox2 == false )
            {
                this->setBox2(image);
                countImg8++;
                settedBox2 = true;
            }
            else if(randNumBox1 == 3 && settedBox3 == false )
            {
                this->setBox3(image);
                countImg8++;
                settedBox3 = true;
            }
            else if(randNumBox1 == 4  && settedBox4 == false )
            {
                this->setBox4(image);
                countImg8++;
                settedBox4 = true;
            }
            else if(randNumBox1 == 5 && settedBox5 == false )
            {
                this->setBox5(image);
                countImg8++;
                settedBox5 = true;
            }
            else if(randNumBox1 == 6 && settedBox6 == false )
            {
                this->setBox6(image);
                countImg8++;
                settedBox6 = true;
            }
            else if(randNumBox1 == 7 && settedBox7 == false )
            {
                this->setBox7(image);
                countImg8++;
                settedBox7 = true;
            }
            else if(randNumBox1 == 8 && settedBox8 == false )
            {
                this->setBox8(image);
                countImg8++;
                settedBox8 = true;
            }
            else if(randNumBox1 == 9 && settedBox9 == false )
            {
                this->setBox9(image);
                countImg8++;
                settedBox9 = true;
            }
            else if(randNumBox1 == 10 && settedBox10 == false )
            {
                this->setBox10(image);
                countImg8++;
                settedBox10 = true;
            }
            else if(randNumBox1 == 11 && settedBox11 == false )
            {
                this->setBox11(image);
                countImg8++;
                settedBox11 = true;
            }
            else if(randNumBox1 == 12 && settedBox12 == false )
            {
                this->setBox12(image);
                countImg8++;
                settedBox12 = true;
            }
            else if(randNumBox1 == 13 && settedBox13 == false )
            {
                this->setBox13(image);
                countImg8++;
                settedBox13 = true;
            }
            else if(randNumBox1 == 14 && settedBox14 == false )
            {
                this->setBox14(image);
                countImg8++;
                settedBox14 = true;
            }
            else if(randNumBox1 == 15 && settedBox15 == false )
            {
                this->setBox15(image);
                countImg8++;
                settedBox15 = true;
            }
            else if(randNumBox1 == 16 && settedBox16 == false )
            {
                this->setBox16(image);
                countImg8++;
                settedBox16 = true;
            }
            else if(randNumBox1 == 17 && settedBox17 == false )
            {
                this->setBox16(image);
                countImg8++;
                settedBox17 = true;
            }
            else if(randNumBox1 == 18 && settedBox18 == false )
            {
                this->setBox18(image);
                countImg8++;
                settedBox18 = true;
            }
            else if(randNumBox1 == 19 && settedBox19 == false )
            {
                this->setBox19(image);
                countImg8++;
                settedBox19 = true;
            }
            else if(randNumBox1 == 20 && settedBox20 == false )
            {
                this->setBox20(image);
                countImg8++;
                settedBox20 = true;
            }
            else if(randNumBox1 == 21 && settedBox21 == false )
            {
                this->setBox21(image);
                countImg8++;
                settedBox21 = true;
            }
            else if(randNumBox1 == 22 && settedBox22 == false )
            {
                this->setBox22(image);
                countImg8++;
                settedBox22 = true;
            }
            else if(randNumBox1 == 23 && settedBox23 == false )
            {
                this->setBox23(image);
                countImg8++;
                settedBox23 = true;
            }
            else if(randNumBox1 == 24 && settedBox24 == false )
            {
                this->setBox24(image);
                countImg8++;
                settedBox24 = true;
            }
            else if(randNumBox1)
            {
                qInfo("Box image already setted");
            }
            else
            {
                qInfo("Error setting image to box");
            }
             qDebug() << "counter img 8::::::::::: " << countImg8;

             //check counter again
            if(countImg8 <= 1)
            {
                //Setting image to box2
                if (randNumBox2 == 1 && settedBox1 == false )
                {
                   this->setBox1(image);
                    countImg8++;
                   //Box is filled
                   settedBox1 = true;
                }
                else if(randNumBox2 == 2 && settedBox2 == false )
                {
                    this->setBox2(image);
                    countImg8++;
                    settedBox2 = true;
                }
                else if(randNumBox2 == 3 && settedBox3 == false )
                {
                    this->setBox3(image);
                    countImg8++;
                    settedBox3 = true;
                }
                else if(randNumBox2 == 4  && settedBox4 == false )
                {
                    this->setBox4(image);
                    countImg8++;
                    settedBox4 = true;
                }
                else if(randNumBox2 == 5 && settedBox5 == false )
                {
                    this->setBox5(image);
                    countImg8++;
                    settedBox5 = true;
                }
                else if(randNumBox2 == 6 && settedBox6 == false )
                {
                    this->setBox6(image);
                    countImg8++;
                    settedBox6 = true;
                }
                else if(randNumBox2 == 7 && settedBox7 == false )
                {
                    this->setBox7(image);
                    countImg8++;
                    settedBox7 = true;
                }
                else if(randNumBox2 == 8 && settedBox8 == false )
                {
                    this->setBox8(image);
                    countImg8++;
                    settedBox8 = true;
                }
                else if(randNumBox2 == 9 && settedBox9 == false )
                {
                    this->setBox9(image);
                    countImg8++;
                    settedBox9 = true;
                }
                else if(randNumBox2 == 10 && settedBox10 == false )
                {
                    this->setBox10(image);
                    countImg8++;
                    settedBox10 = true;
                }
                else if(randNumBox2 == 11 && settedBox11 == false )
                {
                    this->setBox11(image);
                    countImg8++;
                    settedBox11 = true;
                }
                else if(randNumBox2 == 12 && settedBox12 == false )
                {
                    this->setBox12(image);
                    countImg8++;
                    settedBox12 = true;
                }
                else if(randNumBox2 == 13 && settedBox13 == false )
                {
                   this->setBox13(image);
                    countImg8++;
                    settedBox13 = true;
                }
                else if(randNumBox2 == 14 && settedBox14 == false )
                {
                    this->setBox14(image);
                    countImg8++;
                    settedBox14 = true;
                }
                else if(randNumBox2 == 15 && settedBox15 == false )
                {
                    this->setBox15(image);
                    countImg8++;
                    settedBox15 = true;
                }
                else if(randNumBox2 == 16 && settedBox16 == false )
                {
                    this->setBox16(image);
                    countImg8++;
                    settedBox16 = true;
                }
                else if(randNumBox2 == 17 && settedBox17 == false )
                {
                    this->setBox17(image);
                    countImg8++;
                    settedBox17 = true;
                }
                else if(randNumBox2 == 18 && settedBox18 == false )
                {
                    this->setBox18(image);
                    countImg8++;
                    settedBox18 = true;
                }
                else if(randNumBox2 == 19 && settedBox19 == false )
                {
                    this->setBox19(image);
                    countImg8++;
                    settedBox19 = true;
                }
                else if(randNumBox2 == 20 && settedBox20 == false )
                {
                    this->setBox20(image);
                    countImg8++;
                    settedBox20 = true;
                }
                else if(randNumBox2 == 21 && settedBox21 == false )
                {
                    this->setBox21(image);
                    countImg8++;
                    settedBox21 = true;
                }
                else if(randNumBox2 == 22 && settedBox22 == false )
                {
                    this->setBox22(image);
                    countImg8++;
                    settedBox22 = true;
                }
                else if(randNumBox2 == 23 && settedBox23 == false )
                {
                    this->setBox23(image);
                    countImg8++;
                    settedBox23 = true;
                }
                else if(randNumBox2 == 24 && settedBox24 == false )
                {
                    this->setBox24(image);
                    countImg8++;
                    settedBox24 = true;
                }
                else if(randNumBox2)
                {
                    qInfo("Box image already setted");
                }
                else
                {
                    qInfo("Error setting image to box");
                }
                 qDebug() << "counter img 8::::::::::: " << countImg8;
             }
         }



        //Image 9
        if (countImg9 <= 1)
        {
            //Image set
            image = "background-image: url(:/MemoSingleObjects/present.jpg)";

            //Two random boxes
            randNumBox1 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 1:::::::::: " << randNumBox1;
            randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 2:::::::::: " << randNumBox2;
            //If box1 has same num as box2
            while(randNumBox1 == randNumBox2)
            {
                randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            }
            qDebug() << "Zufallszahl nach while:::::::::: " << randNumBox2;

            //Setting image to box1
            if (randNumBox1 == 1 && settedBox1 == false )
            {
                this->setBox1(image);
                //Box is filled
                countImg9++;
                settedBox1 = true;
            }
            else if(randNumBox1 == 2 && settedBox2 == false )
            {
                this->setBox2(image);
                countImg9++;
                settedBox2 = true;
            }
            else if(randNumBox1 == 3 && settedBox3 == false )
            {
                this->setBox3(image);
                countImg9++;
                settedBox3 = true;
            }
            else if(randNumBox1 == 4  && settedBox4 == false )
            {
                this->setBox4(image);
                countImg9++;
                settedBox4 = true;
            }
            else if(randNumBox1 == 5 && settedBox5 == false )
            {
                this->setBox5(image);
                countImg9++;
                settedBox5 = true;
            }
            else if(randNumBox1 == 6 && settedBox6 == false )
            {
                this->setBox6(image);
                countImg9++;
                settedBox6 = true;
            }
            else if(randNumBox1 == 7 && settedBox7 == false )
            {
                this->setBox7(image);
                countImg9++;
                settedBox7 = true;
            }
            else if(randNumBox1 == 8 && settedBox8 == false )
            {
                this->setBox8(image);
                countImg9++;
                settedBox8 = true;
            }
            else if(randNumBox1 == 9 && settedBox9 == false )
            {
                this->setBox9(image);
                countImg9++;
                settedBox9 = true;
            }
            else if(randNumBox1 == 10 && settedBox10 == false )
            {
                this->setBox10(image);
                countImg9++;
                settedBox10 = true;
            }
            else if(randNumBox1 == 11 && settedBox11 == false )
            {
                this->setBox11(image);
                countImg9++;
                settedBox11 = true;
            }
            else if(randNumBox1 == 12 && settedBox12 == false )
            {
                this->setBox12(image);
                countImg9++;
                settedBox12 = true;
            }
            else if(randNumBox1 == 13 && settedBox13 == false )
            {
                this->setBox13(image);
                countImg9++;
                settedBox13 = true;
            }
            else if(randNumBox1 == 14 && settedBox14 == false )
            {
                this->setBox14(image);
                countImg9++;
                settedBox14 = true;
            }
            else if(randNumBox1 == 15 && settedBox15 == false )
            {
                this->setBox15(image);
                countImg9++;
                settedBox15 = true;
            }
            else if(randNumBox1 == 16 && settedBox16 == false )
            {
                this->setBox16(image);
                countImg9++;
                settedBox16 = true;
            }
            else if(randNumBox1 == 17 && settedBox17 == false )
            {
                this->setBox17(image);
                countImg9++;
                settedBox17 = true;
            }
            else if(randNumBox1 == 18 && settedBox18 == false )
            {
                this->setBox18(image);
                countImg9++;
                settedBox18 = true;
            }
            else if(randNumBox1 == 19 && settedBox19 == false )
            {
                this->setBox19(image);
                countImg9++;
                settedBox19 = true;
            }
            else if(randNumBox1 == 20 && settedBox20 == false )
            {
                this->setBox20(image);
                countImg9++;
                settedBox20 = true;
            }
            else if(randNumBox1 == 21 && settedBox21 == false )
            {
                this->setBox21(image);
                countImg9++;
                settedBox21 = true;
            }
            else if(randNumBox1 == 22 && settedBox22 == false )
            {
                this->setBox22(image);
                countImg9++;
                settedBox22 = true;
            }
            else if(randNumBox1 == 23 && settedBox23 == false )
            {
                this->setBox23(image);
                countImg9++;
                settedBox23 = true;
            }
            else if(randNumBox1 == 24 && settedBox24 == false )
            {
                this->setBox24(image);
                countImg9++;
                settedBox24 = true;
            }
            else if(randNumBox1)
            {
                qInfo("Box image already setted");
            }
            else
            {
                qInfo("Error setting image to box");
            }
             qDebug() << "counter img 9::::::::::: " << countImg9;

             //check counter again
            if(countImg9 <= 1)
            {
                //Setting image to box2
                if (randNumBox2 == 1 && settedBox1 == false )
                {
                   this->setBox1(image);
                    countImg9++;
                   //Box is filled
                   settedBox1 = true;
                }
                else if(randNumBox2 == 2 && settedBox2 == false )
                {
                    this->setBox2(image);
                    countImg9++;
                    settedBox2 = true;
                }
                else if(randNumBox2 == 3 && settedBox3 == false )
                {
                    this->setBox3(image);
                    countImg9++;
                    settedBox3 = true;
                }
                else if(randNumBox2 == 4  && settedBox4 == false )
                {
                    this->setBox4(image);
                    countImg9++;
                    settedBox4 = true;
                }
                else if(randNumBox2 == 5 && settedBox5 == false )
                {
                    this->setBox5(image);
                    countImg9++;
                    settedBox5 = true;
                }
                else if(randNumBox2 == 6 && settedBox6 == false )
                {
                    this->setBox6(image);
                    countImg9++;
                    settedBox6 = true;
                }
                else if(randNumBox2 == 7 && settedBox7 == false )
                {
                    this->setBox7(image);
                    countImg9++;
                    settedBox7 = true;
                }
                else if(randNumBox2 == 8 && settedBox8 == false )
                {
                    this->setBox8(image);
                    countImg9++;
                    settedBox8 = true;
                }
                else if(randNumBox2 == 9 && settedBox9 == false )
                {
                    this->setBox9(image);
                    countImg9++;
                    settedBox9 = true;
                }
                else if(randNumBox2 == 10 && settedBox10 == false )
                {
                    this->setBox10(image);
                    countImg9++;
                    settedBox10 = true;
                }
                else if(randNumBox2 == 11 && settedBox11 == false )
                {
                   this->setBox11(image);
                    countImg9++;
                    settedBox11 = true;
                }
                else if(randNumBox2 == 12 && settedBox12 == false )
                {
                    this->setBox12(image);
                    countImg9++;
                    settedBox12 = true;
                }
                else if(randNumBox2 == 13 && settedBox13 == false )
                {
                    this->setBox13(image);
                    countImg9++;
                    settedBox13 = true;
                }
                else if(randNumBox2 == 14 && settedBox14 == false )
                {
                    this->setBox14(image);
                    countImg9++;
                    settedBox14 = true;
                }
                else if(randNumBox2 == 15 && settedBox15 == false )
                {
                    this->setBox15(image);
                    countImg9++;
                    settedBox15 = true;
                }
                else if(randNumBox2 == 16 && settedBox16 == false )
                {
                    this->setBox16(image);
                    countImg9++;
                    settedBox16 = true;
                }
                else if(randNumBox2 == 17 && settedBox17 == false )
                {
                    this->setBox17(image);
                    countImg9++;
                    settedBox17 = true;
                }
                else if(randNumBox2 == 18 && settedBox18 == false )
                {
                    this->setBox18(image);
                    countImg9++;
                    settedBox18 = true;
                }
                else if(randNumBox2 == 19 && settedBox19 == false )
                {
                    this->setBox19(image);
                    countImg9++;
                    settedBox19 = true;
                }
                else if(randNumBox2 == 20 && settedBox20 == false )
                {
                    this->setBox20(image);
                    countImg9++;
                    settedBox20 = true;
                }
                else if(randNumBox2 == 21 && settedBox21 == false )
                {
                    this->setBox21(image);
                    countImg9++;
                    settedBox21 = true;
                }
                else if(randNumBox2 == 22 && settedBox22 == false )
                {
                    this->setBox22(image);
                    countImg9++;
                    settedBox22 = true;
                }
                else if(randNumBox2 == 23 && settedBox23 == false )
                {
                    this->setBox23(image);
                    countImg9++;
                    settedBox23 = true;
                }
                else if(randNumBox2 == 24 && settedBox24 == false )
                {
                    this->setBox24(image);
                    countImg9++;
                    settedBox24 = true;
                }
                else if(randNumBox2)
                {
                    qInfo("Box image already setted");
                }
                else
                {
                    qInfo("Error setting image to box");
                }
                 qDebug() << "counter img 9::::::::::: " << countImg9;
             }
         }



        //Image 10
        if (countImg10 <= 1)
        {
            //Image set
            image = "background-image: url(:/MemoSingleObjects/sandwich.jpg)";

            //Two random boxes
            randNumBox1 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 1:::::::::: " << randNumBox1;
            randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 2:::::::::: " << randNumBox2;
            //If box1 has same num as box2
            while(randNumBox1 == randNumBox2)
            {
                randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            }
            qDebug() << "Zufallszahl nach while:::::::::: " << randNumBox2;

            //Setting image to box1
            if (randNumBox1 == 1 && settedBox1 == false )
            {
                this->setBox1(image);
                //Box is filled
                countImg10++;
                settedBox1 = true;
            }
            else if(randNumBox1 == 2 && settedBox2 == false )
            {
                this->setBox2(image);
                countImg10++;
                settedBox2 = true;
            }
            else if(randNumBox1 == 3 && settedBox3 == false )
            {
                this->setBox3(image);
                countImg10++;
                settedBox3 = true;
            }
            else if(randNumBox1 == 4  && settedBox4 == false )
            {
                this->setBox4(image);
                countImg10++;
                settedBox4 = true;
            }
            else if(randNumBox1 == 5 && settedBox5 == false )
            {
                this->setBox5(image);
                countImg10++;
                settedBox5 = true;
            }
            else if(randNumBox1 == 6 && settedBox6 == false )
            {
                this->setBox6(image);
                countImg10++;
                settedBox6 = true;
            }
            else if(randNumBox1 == 7 && settedBox7 == false )
            {
                this->setBox7(image);
                countImg10++;
                settedBox7 = true;
            }
            else if(randNumBox1 == 8 && settedBox8 == false )
            {
                this->setBox8(image);
                countImg10++;
                settedBox8 = true;
            }
            else if(randNumBox1 == 9 && settedBox9 == false )
            {
                this->setBox9(image);
                countImg10++;
                settedBox9 = true;
            }
            else if(randNumBox1 == 10 && settedBox10 == false )
            {
                this->setBox10(image);
                countImg10++;
                settedBox10 = true;
            }
            else if(randNumBox1 == 11 && settedBox11 == false )
            {
                this->setBox11(image);
                countImg10++;
                settedBox11 = true;
            }
            else if(randNumBox1 == 12 && settedBox12 == false )
            {
                this->setBox12(image);
                countImg10++;
                settedBox12 = true;
            }
            else if(randNumBox1 == 13 && settedBox13 == false )
            {
                this->setBox13(image);
                countImg10++;
                settedBox13 = true;
            }
            else if(randNumBox1 == 14 && settedBox14 == false )
            {
                this->setBox14(image);
                countImg10++;
                settedBox14 = true;
            }
            else if(randNumBox1 == 15 && settedBox15 == false )
            {
                this->setBox15(image);
                countImg10++;
                settedBox15 = true;
            }
            else if(randNumBox1 == 16 && settedBox16 == false )
            {
                this->setBox16(image);
                countImg10++;
                settedBox16 = true;
            }
            else if(randNumBox1 == 17 && settedBox17 == false )
            {
                this->setBox17(image);
                countImg10++;
                settedBox17 = true;
            }
            else if(randNumBox1 == 18 && settedBox18 == false )
            {
                this->setBox18(image);
                countImg10++;
                settedBox18 = true;
            }
            else if(randNumBox1 == 19 && settedBox19 == false )
            {
                this->setBox19(image);
                countImg10++;
                settedBox19 = true;
            }
            else if(randNumBox1 == 20 && settedBox20 == false )
            {
                this->setBox20(image);
                countImg10++;
                settedBox20 = true;
            }
            else if(randNumBox1 == 21 && settedBox21 == false )
            {
                this->setBox21(image);
                countImg10++;
                settedBox21 = true;
            }
            else if(randNumBox1 == 22 && settedBox22 == false )
            {
                this->setBox22(image);
                countImg10++;
                settedBox22 = true;
            }
            else if(randNumBox1 == 23 && settedBox23 == false )
            {
                this->setBox23(image);
                countImg10++;
                settedBox23 = true;
            }
            else if(randNumBox1 == 24 && settedBox24 == false )
            {
                this->setBox24(image);
                countImg10++;
                settedBox24 = true;
            }
            else if(randNumBox1)
            {
                qInfo("Box image already setted");
            }
            else
            {
                qInfo("Error setting image to box");
            }
             qDebug() << "counter img 10::::::::::: " << countImg10;

             //check counter again
            if(countImg10 <= 1)
            {
                //Setting image to box2
                if (randNumBox2 == 1 && settedBox1 == false )
                {
                   this->setBox1(image);
                    countImg10++;
                   //Box is filled
                   settedBox1 = true;
                }
                else if(randNumBox2 == 2 && settedBox2 == false )
                {
                    this->setBox2(image);
                    countImg10++;
                    settedBox2 = true;
                }
                else if(randNumBox2 == 3 && settedBox3 == false )
                {
                    this->setBox3(image);
                    countImg10++;
                    settedBox3 = true;
                }
                else if(randNumBox2 == 4  && settedBox4 == false )
                {
                    this->setBox4(image);
                    countImg10++;
                    settedBox4 = true;
                }
                else if(randNumBox2 == 5 && settedBox5 == false )
                {
                    this->setBox5(image);
                    countImg10++;
                    settedBox5 = true;
                }
                else if(randNumBox2 == 6 && settedBox6 == false )
                {
                    this->setBox6(image);
                    countImg10++;
                    settedBox6 = true;
                }
                else if(randNumBox2 == 7 && settedBox7 == false )
                {
                    this->setBox7(image);
                    countImg10++;
                    settedBox7 = true;
                }
                else if(randNumBox2 == 8 && settedBox8 == false )
                {
                    this->setBox8(image);
                    countImg10++;
                    settedBox8 = true;
                }
                else if(randNumBox2 == 9 && settedBox9 == false )
                {
                    this->setBox9(image);
                    countImg10++;
                    settedBox9 = true;
                }
                else if(randNumBox2 == 10 && settedBox10 == false )
                {
                    this->setBox10(image);
                    countImg10++;
                    settedBox10 = true;
                }
                else if(randNumBox2 == 11 && settedBox11 == false )
                {
                    this->setBox11(image);
                    countImg10++;
                    settedBox11 = true;
                }
                else if(randNumBox2 == 12 && settedBox12 == false )
                {
                    this->setBox12(image);
                    countImg10++;
                    settedBox12 = true;
                }
                else if(randNumBox2 == 13 && settedBox13 == false )
                {
                    this->setBox13(image);
                    countImg10++;
                    settedBox13 = true;
                }
                else if(randNumBox2 == 14 && settedBox14 == false )
                {
                    this->setBox14(image);
                    countImg10++;
                    settedBox14 = true;
                }
                else if(randNumBox2 == 15 && settedBox15 == false )
                {
                    this->setBox15(image);
                    countImg10++;
                    settedBox15 = true;
                }
                else if(randNumBox2 == 16 && settedBox16 == false )
                {
                    this->setBox16(image);
                    countImg10++;
                    settedBox16 = true;
                }
                else if(randNumBox2 == 17 && settedBox17 == false )
                {
                    this->setBox17(image);
                    countImg10++;
                    settedBox17 = true;
                }
                else if(randNumBox2 == 18 && settedBox18 == false )
                {
                    this->setBox18(image);
                    countImg10++;
                    settedBox18 = true;
                }
                else if(randNumBox2 == 19 && settedBox19 == false )
                {
                    this->setBox19(image);
                    countImg10++;
                    settedBox19 = true;
                }
                else if(randNumBox2 == 20 && settedBox20 == false )
                {
                    this->setBox20(image);
                    countImg10++;
                    settedBox20 = true;
                }
                else if(randNumBox2 == 21 && settedBox21 == false )
                {
                    this->setBox21(image);
                    countImg10++;
                    settedBox21 = true;
                }
                else if(randNumBox2 == 22 && settedBox22 == false )
                {
                    this->setBox22(image);
                    countImg10++;
                    settedBox22 = true;
                }
                else if(randNumBox2 == 23 && settedBox23 == false )
                {
                    this->setBox23(image);
                    countImg10++;
                    settedBox23 = true;
                }
                else if(randNumBox2 == 24 && settedBox24 == false )
                {
                    this->setBox24(image);
                    countImg10++;
                    settedBox24 = true;
                }
                else if(randNumBox2)
                {
                    qInfo("Box image already setted");
                }
                else
                {
                    qInfo("Error setting image to box");
                }
                 qDebug() << "counter img 10::::::::::: " << countImg10;
             }
         }

        //Image 11
        if (countImg11 <= 1)
        {
            //Image set
            image = "background-image: url(:/MemoSingleObjects/tree.jpg)";

            //Two random boxes
            randNumBox1 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 1:::::::::: " << randNumBox1;
            randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 2:::::::::: " << randNumBox2;
            //If box1 has same num as box2
            while(randNumBox1 == randNumBox2)
            {
                randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            }
            qDebug() << "Zufallszahl nach while:::::::::: " << randNumBox2;

            //Setting image to box1
            if (randNumBox1 == 1 && settedBox1 == false )
            {
                this->setBox1(image);
                //Box is filled
                countImg11++;
                settedBox1 = true;
            }
            else if(randNumBox1 == 2 && settedBox2 == false )
            {
                this->setBox2(image);
                countImg11++;
                settedBox2 = true;
            }
            else if(randNumBox1 == 3 && settedBox3 == false )
            {
                this->setBox3(image);
                countImg11++;
                settedBox3 = true;
            }
            else if(randNumBox1 == 4  && settedBox4 == false )
            {
                this->setBox4(image);
                countImg11++;
                settedBox4 = true;
            }
            else if(randNumBox1 == 5 && settedBox5 == false )
            {
                this->setBox5(image);
                countImg11++;
                settedBox5 = true;
            }
            else if(randNumBox1 == 6 && settedBox6 == false )
            {
                this->setBox6(image);
                countImg11++;
                settedBox6 = true;
            }
            else if(randNumBox1 == 7 && settedBox7 == false )
            {
                this->setBox7(image);
                countImg11++;
                settedBox7 = true;
            }
            else if(randNumBox1 == 8 && settedBox8 == false )
            {
                this->setBox8(image);
                countImg11++;
                settedBox8 = true;
            }
            else if(randNumBox1 == 9 && settedBox9 == false )
            {
                this->setBox9(image);
                countImg11++;
                settedBox9 = true;
            }
            else if(randNumBox1 == 10 && settedBox10 == false )
            {
               this->setBox10(image);
                countImg11++;
                settedBox10 = true;
            }
            else if(randNumBox1 == 11 && settedBox11 == false )
            {
                this->setBox11(image);
                countImg11++;
                settedBox11 = true;
            }
            else if(randNumBox1 == 12 && settedBox12 == false )
            {
                this->setBox12(image);
                countImg11++;
                settedBox12 = true;
            }
            else if(randNumBox1 == 13 && settedBox13 == false )
            {
                this->setBox13(image);
                countImg11++;
                settedBox13 = true;
            }
            else if(randNumBox1 == 14 && settedBox14 == false )
            {
                this->setBox14(image);
                countImg11++;
                settedBox14 = true;
            }
            else if(randNumBox1 == 15 && settedBox15 == false )
            {
                this->setBox15(image);
                countImg11++;
                settedBox15 = true;
            }
            else if(randNumBox1 == 16 && settedBox16 == false )
            {
                this->setBox16(image);
                countImg11++;
                settedBox16 = true;
            }
            else if(randNumBox1 == 17 && settedBox17 == false )
            {
                this->setBox17(image);
                countImg11++;
                settedBox17 = true;
            }
            else if(randNumBox1 == 18 && settedBox18 == false )
            {
                this->setBox18(image);
                countImg11++;
                settedBox18 = true;
            }
            else if(randNumBox1 == 19 && settedBox19 == false )
            {
                this->setBox19(image);
                countImg11++;
                settedBox19 = true;
            }
            else if(randNumBox1 == 20 && settedBox20 == false )
            {
                this->setBox20(image);
                countImg11++;
                settedBox20 = true;
            }
            else if(randNumBox1 == 21 && settedBox21 == false )
            {
                this->setBox21(image);
                countImg11++;
                settedBox21 = true;
            }
            else if(randNumBox1 == 22 && settedBox22 == false )
            {
                this->setBox22(image);
                countImg11++;
                settedBox22 = true;
            }
            else if(randNumBox1 == 23 && settedBox23 == false )
            {
                this->setBox23(image);
                countImg11++;
                settedBox23 = true;
            }
            else if(randNumBox1 == 24 && settedBox24 == false )
            {
                this->setBox24(image);
                countImg11++;
                settedBox24 = true;
            }
            else if(randNumBox1)
            {
                qInfo("Box image already setted");
            }
            else
            {
                qInfo("Error setting image to box");
            }
             qDebug() << "counter img 11::::::::::: " << countImg11;

             //check counter again
            if(countImg11 <= 1)
            {
                //Setting image to box2
                if (randNumBox2 == 1 && settedBox1 == false )
                {
                   this->setBox1(image);
                    countImg11++;
                   //Box is filled
                   settedBox1 = true;
                }
                else if(randNumBox2 == 2 && settedBox2 == false )
                {
                    this->setBox2(image);
                    countImg11++;
                    settedBox2 = true;
                }
                else if(randNumBox2 == 3 && settedBox3 == false )
                {
                    this->setBox3(image);
                    countImg11++;
                    settedBox3 = true;
                }
                else if(randNumBox2 == 4  && settedBox4 == false )
                {
                    this->setBox4(image);
                    countImg11++;
                    settedBox4 = true;
                }
                else if(randNumBox2 == 5 && settedBox5 == false )
                {
                    this->setBox5(image);
                    countImg11++;
                    settedBox5 = true;
                }
                else if(randNumBox2 == 6 && settedBox6 == false )
                {
                    this->setBox6(image);
                    countImg11++;
                    settedBox6 = true;
                }
                else if(randNumBox2 == 7 && settedBox7 == false )
                {
                    this->setBox7(image);
                    countImg11++;
                    settedBox7 = true;
                }
                else if(randNumBox2 == 8 && settedBox8 == false )
                {
                    this->setBox8(image);
                    countImg11++;
                    settedBox8 = true;
                }
                else if(randNumBox2 == 9 && settedBox9 == false )
                {
                    this->setBox9(image);
                    countImg11++;
                    settedBox9 = true;
                }
                else if(randNumBox2 == 10 && settedBox10 == false )
                {
                    this->setBox10(image);
                    countImg11++;
                    settedBox10 = true;
                }
                else if(randNumBox2 == 11 && settedBox11 == false )
                {
                    this->setBox11(image);
                    countImg11++;
                    settedBox11 = true;
                }
                else if(randNumBox2 == 12 && settedBox12 == false )
                {
                    this->setBox12(image);
                    countImg11++;
                    settedBox12 = true;
                }
                else if(randNumBox2 == 13 && settedBox13 == false )
                {
                    this->setBox13(image);
                    countImg11++;
                    settedBox13 = true;
                }
                else if(randNumBox2 == 14 && settedBox14 == false )
                {
                    this->setBox14(image);
                    countImg11++;
                    settedBox14 = true;
                }
                else if(randNumBox2 == 15 && settedBox15 == false )
                {
                    this->setBox15(image);
                    countImg11++;
                    settedBox15 = true;
                }
                else if(randNumBox2 == 16 && settedBox16 == false )
                {
                    this->setBox16(image);
                    countImg11++;
                    settedBox16 = true;
                }
                else if(randNumBox2 == 17 && settedBox17 == false )
                {
                    this->setBox17(image);
                    countImg11++;
                    settedBox17 = true;
                }
                else if(randNumBox2 == 18 && settedBox18 == false )
                {
                    this->setBox18(image);
                    countImg11++;
                    settedBox18 = true;
                }
                else if(randNumBox2 == 19 && settedBox19 == false )
                {
                    this->setBox19(image);
                    countImg11++;
                    settedBox19 = true;
                }
                else if(randNumBox2 == 20 && settedBox20 == false )
                {
                    this->setBox20(image);
                    countImg11++;
                    settedBox20 = true;
                }
                else if(randNumBox2 == 21 && settedBox21 == false )
                {
                    this->setBox21(image);
                    countImg11++;
                    settedBox21 = true;
                }
                else if(randNumBox2 == 22 && settedBox22 == false )
                {
                    this->setBox22(image);
                    countImg11++;
                    settedBox22 = true;
                }
                else if(randNumBox2 == 23 && settedBox23 == false )
                {
                    this->setBox23(image);
                    countImg11++;
                    settedBox23 = true;
                }
                else if(randNumBox2 == 24 && settedBox24 == false )
                {
                    this->setBox24(image);
                    countImg11++;
                    settedBox24 = true;
                }
                else if(randNumBox2)
                {
                    qInfo("Box image already setted");
                }
                else
                {
                    qInfo("Error setting image to box");
                }
                 qDebug() << "counter img 11::::::::::: " << countImg11;
             }
         }


        //Image 12
        if (countImg12 <= 1)
        {
            //Image set
            image = "background-image: url(:/MemoSingleObjects/whiteboard.jpg)";

            //Two random boxes
            randNumBox1 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 1:::::::::: " << randNumBox1;
            randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            qDebug() << "Zuf box 2:::::::::: " << randNumBox2;
            //If box1 has same num as box2
            while(randNumBox1 == randNumBox2)
            {
                randNumBox2 = qrand() % ((highBox + 1) - low) + low;
            }
            qDebug() << "Zufallszahl nach while:::::::::: " << randNumBox2;

            //Setting image to box1
            if (randNumBox1 == 1 && settedBox1 == false )
            {
                this->setBox1(image);
                //Box is filled
                countImg12++;
                settedBox1 = true;
            }
            else if(randNumBox1 == 2 && settedBox2 == false )
            {
                this->setBox2(image);
                countImg12++;
                settedBox2 = true;
            }
            else if(randNumBox1 == 3 && settedBox3 == false )
            {
                this->setBox3(image);
                countImg12++;
                settedBox3 = true;
            }
            else if(randNumBox1 == 4  && settedBox4 == false )
            {
                this->setBox4(image);
                countImg12++;
                settedBox4 = true;
            }
            else if(randNumBox1 == 5 && settedBox5 == false )
            {
                this->setBox5(image);
                countImg12++;
                settedBox5 = true;
            }
            else if(randNumBox1 == 6 && settedBox6 == false )
            {
                this->setBox6(image);
                countImg12++;
                settedBox6 = true;
            }
            else if(randNumBox1 == 7 && settedBox7 == false )
            {
                this->setBox7(image);
                countImg12++;
                settedBox7 = true;
            }
            else if(randNumBox1 == 8 && settedBox8 == false )
            {
                this->setBox8(image);
                countImg12++;
                settedBox8 = true;
            }
            else if(randNumBox1 == 9 && settedBox9 == false )
            {
                this->setBox9(image);
                countImg12++;
                settedBox9 = true;
            }
            else if(randNumBox1 == 10 && settedBox10 == false )
            {
                this->setBox10(image);
                countImg12++;
                settedBox10 = true;
            }
            else if(randNumBox1 == 11 && settedBox11 == false )
            {
                this->setBox11(image);
                countImg12++;
                settedBox11 = true;
            }
            else if(randNumBox1 == 12 && settedBox12 == false )
            {
                this->setBox12(image);
                countImg12++;
                settedBox12 = true;
            }
            else if(randNumBox1 == 13 && settedBox13 == false )
            {
                this->setBox13(image);
                countImg12++;
                settedBox13 = true;
            }
            else if(randNumBox1 == 14 && settedBox14 == false )
            {
                this->setBox14(image);
                countImg12++;
                settedBox14 = true;
            }
            else if(randNumBox1 == 15 && settedBox15 == false )
            {
                this->setBox15(image);
                countImg12++;
                settedBox15 = true;
            }
            else if(randNumBox1 == 16 && settedBox16 == false )
            {
                this->setBox16(image);
                countImg12++;
                settedBox16 = true;
            }
            else if(randNumBox1 == 17 && settedBox17 == false )
            {
                this->setBox17(image);
                countImg12++;
                settedBox17 = true;
            }
            else if(randNumBox1 == 18 && settedBox18 == false )
            {
                this->setBox18(image);
                countImg12++;
                settedBox18 = true;
            }
            else if(randNumBox1 == 19 && settedBox19 == false )
            {
                this->setBox19(image);
                countImg12++;
                settedBox19 = true;
            }
            else if(randNumBox1 == 20 && settedBox20 == false )
            {
                this->setBox20(image);
                countImg12++;
                settedBox20 = true;
            }
            else if(randNumBox1 == 21 && settedBox21 == false )
            {
                this->setBox21(image);
                countImg12++;
                settedBox21 = true;
            }
            else if(randNumBox1 == 22 && settedBox22 == false )
            {
                this->setBox22(image);
                countImg12++;
                settedBox22 = true;
            }
            else if(randNumBox1 == 23 && settedBox23 == false )
            {
                this->setBox23(image);
                countImg12++;
                settedBox23 = true;
            }
            else if(randNumBox1 == 24 && settedBox24 == false )
            {
                this->setBox24(image);
                countImg12++;
                settedBox24 = true;
            }
            else if(randNumBox1)
            {
                qInfo("Box image already setted");
            }
            else
            {
                qInfo("Error setting image to box");
            }
             qDebug() << "counter img 12::::::::::: " << countImg12;

             //check counter again
            if(countImg12 <= 1)
            {
                //Setting image to box2
                if (randNumBox2 == 1 && settedBox1 == false )
                {
                   this->setBox1(image);
                    countImg12++;
                   //Box is filled
                   settedBox1 = true;
                }
                else if(randNumBox2 == 2 && settedBox2 == false )
                {
                    this->setBox2(image);
                    countImg12++;
                    settedBox2 = true;
                }
                else if(randNumBox2 == 3 && settedBox3 == false )
                {
                    this->setBox3(image);
                    countImg12++;
                    settedBox3 = true;
                }
                else if(randNumBox2 == 4  && settedBox4 == false )
                {
                    this->setBox4(image);
                    countImg12++;
                    settedBox4 = true;
                }
                else if(randNumBox2 == 5 && settedBox5 == false )
                {
                    this->setBox5(image);
                    countImg12++;
                    settedBox5 = true;
                }
                else if(randNumBox2 == 6 && settedBox6 == false )
                {
                    this->setBox6(image);
                    countImg12++;
                    settedBox6 = true;
                }
                else if(randNumBox2 == 7 && settedBox7 == false )
                {
                    this->setBox7(image);
                    countImg12++;
                    settedBox7 = true;
                }
                else if(randNumBox2 == 8 && settedBox8 == false )
                {
                    this->setBox8(image);
                    countImg12++;
                    settedBox8 = true;
                }
                else if(randNumBox2 == 9 && settedBox9 == false )
                {
                    this->setBox9(image);
                    countImg12++;
                    settedBox9 = true;
                }
                else if(randNumBox2 == 10 && settedBox10 == false )
                {
                    this->setBox10(image);
                    countImg12++;
                    settedBox10 = true;
                }
                else if(randNumBox2 == 11 && settedBox11 == false )
                {
                    this->setBox11(image);
                    countImg12++;
                    settedBox11 = true;
                }
                else if(randNumBox2 == 12 && settedBox12 == false )
                {
                    this->setBox12(image);
                    countImg12++;
                    settedBox12 = true;
                }
                else if(randNumBox2 == 13 && settedBox13 == false )
                {
                    this->setBox13(image);
                    countImg12++;
                    settedBox13 = true;
                }
                else if(randNumBox2 == 14 && settedBox14 == false )
                {
                    this->setBox14(image);
                    countImg12++;
                    settedBox14 = true;
                }
                else if(randNumBox2 == 15 && settedBox15 == false )
                {
                    this->setBox15(image);
                    countImg12++;
                    settedBox15 = true;
                }
                else if(randNumBox2 == 16 && settedBox16 == false )
                {
                    this->setBox16(image);
                    countImg12++;
                    settedBox16 = true;
                }
                else if(randNumBox2 == 17 && settedBox17 == false )
                {
                    this->setBox17(image);
                    countImg12++;
                    settedBox17 = true;
                }
                else if(randNumBox2 == 18 && settedBox18 == false )
                {
                    this->setBox18(image);
                    countImg12++;
                    settedBox18 = true;
                }
                else if(randNumBox2 == 19 && settedBox19 == false )
                {
                    this->setBox19(image);
                    countImg12++;
                    settedBox19 = true;
                }
                else if(randNumBox2 == 20 && settedBox20 == false )
                {
                    this->setBox20(image);
                    countImg12++;
                    settedBox20 = true;
                }
                else if(randNumBox2 == 21 && settedBox21 == false )
                {
                    this->setBox21(image);
                    countImg12++;
                    settedBox21 = true;
                }
                else if(randNumBox2 == 22 && settedBox22 == false )
                {
                    this->setBox22(image);
                    countImg12++;
                    settedBox22 = true;
                }
                else if(randNumBox2 == 23 && settedBox23 == false )
                {
                    this->setBox23(image);
                    countImg12++;
                    settedBox23 = true;
                }
                else if(randNumBox2 == 24 && settedBox24 == false )
                {
                    this->setBox24(image);
                    countImg12++;
                    settedBox24 = true;
                }
                else if(randNumBox2)
                {
                    qInfo("Box image already setted");
                }
                else
                {
                    qInfo("Error setting image to box");
                }
                qDebug() << "counter img 12::::::::::: " << countImg12;
             }
         }


        //If all true are all boxes setted
        if (settedBox1 == true &&
                settedBox2 == true &&
                settedBox3 == true &&
                settedBox4 == true &&
                settedBox5 == true &&
                settedBox6 == true &&
                settedBox7 == true &&
                settedBox8 == true &&
                settedBox9 == true &&
                settedBox10 == true &&
                settedBox11 == true &&
                settedBox12 == true &&
                settedBox13 == true &&
                settedBox14 == true &&
                settedBox15 == true &&
                settedBox16 == true &&
                settedBox18 == true &&
                settedBox19 == true &&
                settedBox20 == true &&
                settedBox21 == true &&
                settedBox22 == true &&
                settedBox23 == true &&
                settedBox24 == true)
        {
            //To break loop
            allSetted = true;
        }

        qDebug() << "Box1:::::::" << settedBox1;
        qDebug() << "Box2:::::::" << settedBox2;
        qDebug() << "Box3:::::::" << settedBox3;
        qDebug() << "Box4:::::::" << settedBox4;
        qDebug() << "Box5:::::::" << settedBox5;
        qDebug() << "Box6:::::::" << settedBox6;
        qDebug() << "Box7:::::::" << settedBox7;
        qDebug() << "Box8:::::::" << settedBox8;
        qDebug() << "Box9:::::::" << settedBox9;
        qDebug() << "Box10:::::::" << settedBox10;
        qDebug() << "Box11:::::::" << settedBox11;
        qDebug() << "Box12:::::::" << settedBox12;
        qDebug() << "Box13:::::::" << settedBox13;
        qDebug() << "Box14:::::::" << settedBox14;
        qDebug() << "Box15:::::::" << settedBox15;
        qDebug() << "Box16:::::::" << settedBox16;
        qDebug() << "Box17:::::::" << settedBox17;
        qDebug() << "Box18:::::::" << settedBox18;
        qDebug() << "Box19:::::::" << settedBox19;
        qDebug() << "Box20:::::::" << settedBox20;
        qDebug() << "Box21:::::::" << settedBox21;
        qDebug() << "Box22:::::::" << settedBox22;
        qDebug() << "Box23:::::::" << settedBox23;
        qDebug() << "Box24:::::::" << settedBox24;

        qDebug() << "counter img 1::::::::::: " << countImg1;
        qDebug() << "counter img 2::::::::::: " << countImg2;
        qDebug() << "counter img 3::::::::::: " << countImg3;
        qDebug() << "counter img 4::::::::::: " << countImg4;
        qDebug() << "counter img 5::::::::::: " << countImg5;
        qDebug() << "counter img 6::::::::::: " << countImg6;
        qDebug() << "counter img 7::::::::::: " << countImg7;
        qDebug() << "counter img 8::::::::::: " << countImg8;
        qDebug() << "counter img 9::::::::::: " << countImg9;
        qDebug() << "counter img 10::::::::::: " << countImg10;
        qDebug() << "counter img 11::::::::::: " << countImg11;
        qDebug() << "counter img 12::::::::::: " << countImg12;
    }


    //Set Stopwatch

    startTimer(0);
    bool mRunning = true;
    QDateTime StartTime= QDateTime::currentDateTime();;


            if(mRunning)
            {
                qint64 ms = StartTime.msecsTo(QDateTime::currentDateTime());
                int h = ms / 1000 / 60 / 60;
                int m = (ms / 1000 / 60) - (h * 60);
                int s = (ms / 1000) - (m * 60);
                ms = ms - (s * 1000);
                QString diff = QString("%1:%2:%3:%4").arg(h).arg(m).arg(s).arg(ms);
                this->ui->lbl_stopwatch->setText(diff);
            }

}

playwindow::~playwindow()
{
    delete ui;
}

void playwindow::hideOpenBoxes()
{
     QString hideImg = "background-image: url(:/MemoSingleObjects/backgroundsquare.jfif)";
    //Opend box 1
    if (this->getOpenedBox1() == 1)
    {
        this->ui->btn_1->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 2)
    {
        this->ui->btn_2->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 3)
    {
        this->ui->btn_3->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 4)
    {
        this->ui->btn_4->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 5)
    {
        this->ui->btn_5->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 6)
    {
        this->ui->btn_6->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 7)
    {
        this->ui->btn_7->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 8)
    {
        this->ui->btn_8->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 9)
    {
        this->ui->btn_9->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 10)
    {
        this->ui->btn_10->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 11)
    {
        this->ui->btn_11->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 12)
    {
        this->ui->btn_12->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 13)
    {
        this->ui->btn_13->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 14)
    {
        this->ui->btn_14->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 15)
    {
        this->ui->btn_15->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 16)
    {
        this->ui->btn_16->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 17)
    {
        this->ui->btn_17->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 18)
    {
        this->ui->btn_18->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 19)
    {
        this->ui->btn_19->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 20)
    {
        this->ui->btn_20->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 21)
    {
        this->ui->btn_21->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 22)
    {
        this->ui->btn_22->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 23)
    {
        this->ui->btn_23->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox1() == 24)
    {
        this->ui->btn_24->setStyleSheet(hideImg);
    }


     //Opend box 2
    if (this->getOpenedBox2() == 1)
    {
        this->ui->btn_1->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 2)
    {
        this->ui->btn_2->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 3)
    {
        this->ui->btn_3->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 4)
    {
        this->ui->btn_4->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 5)
    {
        this->ui->btn_5->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 6)
    {
        this->ui->btn_6->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 7)
    {
        this->ui->btn_7->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 8)
    {
        this->ui->btn_8->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 9)
    {
        this->ui->btn_9->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 10)
    {
        this->ui->btn_10->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 11)
    {
        this->ui->btn_11->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 12)
    {
        this->ui->btn_12->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 13)
    {
        this->ui->btn_13->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 14)
    {
        this->ui->btn_14->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 15)
    {
        this->ui->btn_15->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 16)
    {
        this->ui->btn_16->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 17)
    {
        this->ui->btn_17->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 18)
    {
        this->ui->btn_18->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 19)
    {
        this->ui->btn_19->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 20)
    {
        this->ui->btn_20->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 21)
    {
        this->ui->btn_21->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 22)
    {
        this->ui->btn_22->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 23)
    {
        this->ui->btn_23->setStyleSheet(hideImg);
    }
    else if (this->getOpenedBox2() == 24)
    {
        this->ui->btn_24->setStyleSheet(hideImg);
    }

    //Set counter null
    this->setCounterNull();
}

void playwindow::setAnable(int p_box)
{
    //Set own box anable
    if (p_box == 1)
    {
        this->ui->btn_1->setEnabled(false);
    }
    else if (p_box == 2)
    {
        this->ui->btn_2->setEnabled(false);
    }
    else if (p_box == 3)
    {
        this->ui->btn_3->setEnabled(false);
    }
    else if (p_box == 4)
    {
        this->ui->btn_4->setEnabled(false);
    }
    else if (p_box == 5)
    {
        this->ui->btn_5->setEnabled(false);
    }
    else if (p_box == 6)
    {
        this->ui->btn_6->setEnabled(false);
    }
    else if (p_box == 7)
    {
        this->ui->btn_7->setEnabled(false);
    }
    else if (p_box == 8)
    {
        this->ui->btn_8->setEnabled(false);
    }
    else if (p_box == 9)
    {
        this->ui->btn_9->setEnabled(false);
    }
    else if (p_box == 10)
    {
        this->ui->btn_10->setEnabled(false);
    }
    else if (p_box == 11)
    {
        this->ui->btn_11->setEnabled(false);
    }
    else if (p_box == 12)
    {
        this->ui->btn_12->setEnabled(false);
    }
    else if (p_box == 13)
    {
        this->ui->btn_13->setEnabled(false);
    }
    else if (p_box == 14)
    {
        this->ui->btn_14->setEnabled(false);
    }
    else if (p_box == 15)
    {
        this->ui->btn_15->setEnabled(false);
    }
    else if (p_box == 16)
    {
        this->ui->btn_16->setEnabled(false);
    }
    else if (p_box == 17)
    {
        this->ui->btn_17->setEnabled(false);
    }
    else if (p_box == 18)
    {
        this->ui->btn_18->setEnabled(false);
    }
    else if (p_box == 19)
    {
        this->ui->btn_19->setEnabled(false);
    }
    else if (p_box == 20)
    {
        this->ui->btn_20->setEnabled(false);
    }
    else if (p_box == 21)
    {
        this->ui->btn_21->setEnabled(false);
    }
    else if (p_box == 22)
    {
        this->ui->btn_22->setEnabled(false);
    }
    else if (p_box == 23)
    {
        this->ui->btn_23->setEnabled(false);
    }
    else if (p_box == 24)
    {
        this->ui->btn_24->setEnabled(false);
    }

    //If num then the same num of box, set that box enable
    if (this->getOpenedBox1() == 1)
    {
        this->ui->btn_1->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 2)
    {
        this->ui->btn_2->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 3)
    {
        this->ui->btn_3->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 4)
    {
        this->ui->btn_4->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 5)
    {
        this->ui->btn_5->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 6)
    {
        this->ui->btn_6->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 7)
    {
        this->ui->btn_7->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 8)
    {
        this->ui->btn_8->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 9)
    {
        this->ui->btn_9->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 10)
    {
        this->ui->btn_10->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 11)
    {
        this->ui->btn_11->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 12)
    {
        this->ui->btn_12->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 13)
    {
        this->ui->btn_13->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 14)
    {
        this->ui->btn_14->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 15)
    {
        this->ui->btn_15->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 16)
    {
        this->ui->btn_16->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 17)
    {
        this->ui->btn_17->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 18)
    {
        this->ui->btn_18->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 19)
    {
        this->ui->btn_19->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 20)
    {
        this->ui->btn_20->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 21)
    {
        this->ui->btn_21->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 22)
    {
        this->ui->btn_22->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 23)
    {
        this->ui->btn_23->setEnabled(false);
    }
    else if (this->getOpenedBox1() == 24)
    {
        this->ui->btn_24->setEnabled(false);
    }

    //Set on saved boxes to null
    this->setOpenedBox1(0);
    this->setOpenedBox2(0);
}

void playwindow::saveOpenedBox(int p_box)
{
    //Save this opened box
    if (this->getCounter() == 1)
    {
        //Save in 1 if empty
        this->setOpenedBox1(p_box);
    }
    else if (this->getCounter() == 2)
    {
        //Save in 2 if 1 full
        this->setOpenedBox2(p_box);
    }
}

//Box releases
void playwindow::on_btn_1_released()
{
    //if two boxes opened
    if(this->getCounter() >= 2)
    {
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_1->setStyleSheet(this->getBox1());

    //Save this opened box
    saveOpenedBox(1);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox1() == image)
            {
                setAnable(1);
            }
        }
     }
    allEnable();
}

void playwindow::on_btn_2_released()
{
    //if two boxes opened
    if(this->getCounter() >= 2)
    {
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_2->setStyleSheet(this->getBox2());

    //Save this opened box
    saveOpenedBox(2);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox2() == image)
            {
                setAnable(2);
            }
        }
     }
    allEnable();
}

void playwindow::on_btn_3_released()
{

    //if two boxes opened
    if(this->getCounter() >= 2)
    {
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_3->setStyleSheet(this->getBox3());

    //Save this opened box
    saveOpenedBox(3);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox3() == image)
            {
                setAnable(3);
            }
        }
     }
    allEnable();
}

void playwindow::on_btn_4_released()
{
    //if two boxes opened
    if(this->getCounter() >= 2)
    {
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_4->setStyleSheet(this->getBox4());

    //Save this opened box
    saveOpenedBox(4);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox4() == image)
            {
                setAnable(4);
            }
        }
     }
    allEnable();
}

void playwindow::on_btn_5_released()
{
    //if two boxes opened
    if(this->getCounter() >= 2)
    {
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_5->setStyleSheet(this->getBox5());

    //Save this opened box
    saveOpenedBox(5);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox5() == image)
            {
                setAnable(5);
            }
        }
     }
    allEnable();
}

void playwindow::on_btn_6_released()
{
    //if two boxes opened
    if(this->getCounter() >= 2)
    {
       hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_6->setStyleSheet(this->getBox6());

    //Save this opened box
    saveOpenedBox(6);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox6() == image)
            {
                setAnable(6);
            }
        }
     }
    allEnable();
}

void playwindow::on_btn_7_released()
{
    //if two boxes opened
    if(this->getCounter() >= 2)
    {
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_7->setStyleSheet(this->getBox7());

    //Save this opened box
    saveOpenedBox(7);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox7() == image)
            {
                setAnable(7);
            }
        }
     }
    allEnable();
}

void playwindow::on_btn_8_released()
{
    //if two boxes opened
    if(this->getCounter() >= 2)
    {
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_8->setStyleSheet(this->getBox8());

    //Save this opened box
    saveOpenedBox(8);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox8() == image)
            {
                setAnable(8);
            }
        }
     }
    allEnable();
}

void playwindow::on_btn_9_released()
{
    //if two boxes opened
    if(this->getCounter() >= 2)
    {     
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_9->setStyleSheet(this->getBox9());

    //Save this opened box
    saveOpenedBox(9);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox9() == image)
            {
                setAnable(9);
            }
        }
     }
    allEnable();
}

void playwindow::on_btn_10_released()
{   
    //if two boxes opened
    if(this->getCounter() >= 2)
    {      
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_10->setStyleSheet(this->getBox10());

    //Save this opened box
    saveOpenedBox(10);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox10() == image)
            {
                setAnable(10);
            }
        }
     }
    allEnable();
}

void playwindow::on_btn_11_released()
{    
    //if two boxes opened
    if(this->getCounter() >= 2)
    {        
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_11->setStyleSheet(this->getBox11());

    //Save this opened box
    saveOpenedBox(11);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox11() == image)
            {
                setAnable(11);
            }
        }
     }
    allEnable();
}

void playwindow::on_btn_12_released()
{
    //if two boxes opened
    if(this->getCounter() >= 2)
    {       
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_12->setStyleSheet(this->getBox12());

    //Save this opened box
    saveOpenedBox(12);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox12() == image)
            {
                setAnable(12);
            }
        }
     }
    allEnable();
}

void playwindow::on_btn_13_released()
{   
    //if two boxes opened
    if(this->getCounter() >= 2)
    {        
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_13->setStyleSheet(this->getBox13());

    //Save this opened box
    saveOpenedBox(13);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox13() == image)
            {
                setAnable(13);
            }          
        }
     }
    allEnable();
}

void playwindow::on_btn_14_released()
{   
    //if two boxes opened
    if(this->getCounter() >= 2)
    {
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_14->setStyleSheet(this->getBox14());

    //Save this opened box
    saveOpenedBox(14);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox14() == image)
            {
                setAnable(14);
            }
        }
     }
    allEnable();
}

void playwindow::on_btn_15_released()
{    
    //if two boxes opened
    if(this->getCounter() >= 2)
    {      
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_15->setStyleSheet(this->getBox15());

    //Save this opened box
    saveOpenedBox(15);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox15() == image)
            {
                setAnable(15);
            }                
        }
     }
    allEnable();
}

void playwindow::on_btn_16_released()
{  
    //if two boxes opened
    if(this->getCounter() >= 2)
    {        
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_16->setStyleSheet(this->getBox16());

    //Save this opened box
    saveOpenedBox(16);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox16() == image)
            {
                setAnable(16);
            }
        }
     }
    allEnable();
}

void playwindow::on_btn_17_released()
{
    //if two boxes opened
    if(this->getCounter() >= 2)
    {
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_17->setStyleSheet(this->getBox17());

    //Save this opened box
    saveOpenedBox(17);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox17() == image)
            {
                setAnable(17);
            }          
        }
     }
    allEnable();
}

void playwindow::on_btn_18_released()
{
    //if two boxes opened
    if(this->getCounter() >= 2)
    {        
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_18->setStyleSheet(this->getBox18());

    //Save this opened box
    saveOpenedBox(18);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox18() == image)
            {
                setAnable(18);
            }
        }
     }
    allEnable();
}

void playwindow::on_btn_19_released()
{  
    //if two boxes opened
    if(this->getCounter() >= 2)
    {       
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_19->setStyleSheet(this->getBox19());

    //Save this opened box
    saveOpenedBox(19);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox19() == image)
            {
                setAnable(19);
            }
        }
     }
    allEnable();
}

void playwindow::on_btn_20_released()
{    
    //if two boxes opened
    if(this->getCounter() >= 2)
    {     
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_20->setStyleSheet(this->getBox20());

    //Save this opened box
    saveOpenedBox(20);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox20() == image)
            {
                setAnable(20);
            }
        }
     }

    allEnable();
}

void playwindow::on_btn_21_released()
{
    //if two boxes opened
    if(this->getCounter() >= 2)
    {      
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_21->setStyleSheet(this->getBox21());

    //Save this opened box
    saveOpenedBox(21);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox21() == image)
            {
                setAnable(21);
            }
        }
     }

    allEnable();
}

void playwindow::on_btn_22_released()
{
    //if two boxes opened
    if(this->getCounter() >= 2)
    {        
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_22->setStyleSheet(this->getBox22());

    //Save this opened box
    saveOpenedBox(22);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox22() == image)
            {
                setAnable(22);
            }
        }
     }
    //If open then disabled
    /*this->ui->btn_22->setEnabled(false);
    qDebug() << "counter open box::::::" << getCounterOpenBoxes();
    if (getCounterOpenBoxes() == 2)
    {
        setAble(getOpenedBox1(), getOpenedBox2());
        setCounterOpenBoxesNull();
    }

    setCounterOpenBoxesPlus();*/

    allEnable();
}

void playwindow::on_btn_23_released()
{
    //if two boxes opened
    if(this->getCounter() >= 2)
    {
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_23->setStyleSheet(this->getBox23());

    //Save this opened box
    saveOpenedBox(23);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set
        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox23() == image)
            {
                setAnable(23);
            }
        }
     }


    //If open then disabled
    if (getCounterOpenBoxes() < 3)
    {
        this->ui->btn_23->setDefault(true);
    }
    else
    {
        setAble(getOpenedBox1(), getOpenedBox2());
        setCounterOpenBoxesNull();
    }
    //Set this button disabled
    setCounterOpenBoxesPlus();

    allEnable();
}

void playwindow::on_btn_24_released()
{    
    //if two boxes opened
    if(this->getCounter() >= 2)
    {      
        hideOpenBoxes();
    }

    //Counter for max shown boxes
    this->setCounterPlusOne();
    //Get random image that is saved in box member
    this->ui->btn_24->setStyleSheet(this->getBox24());

    //Save this opened box
    saveOpenedBox(24);

    //If two boxes are open
    if (getCounter() == 2)
    {
        //Counter plus and set

        setCounterTriesPlus();
        this->ui->lbl_tries->setText(QString::number(getCounterTires()));

        //Check if same image
        //Getting image
        QString image = this->getLastOpendBoxImg();

        //If image equal to first opened box1
        if (this->getOpenedBox1() != this->getOpenedBox2())
        {
            if (this->getBox24() == image)
            {
                setAnable(24);
            }
        }
     }

}


void playwindow::setAble(int p_box1, int p_box2)
{
    qDebug() << "box1::::::" << p_box1;
    qDebug() << "box2::::::" << p_box2;
    if (p_box1 == 1 || p_box2 == 1)
        this->ui->btn_1->setDisabled(false);
    if (p_box1 == 2 || p_box2 == 2)
        this->ui->btn_2->setDisabled(false);
    if (p_box1 == 3 || p_box2 == 3)
        this->ui->btn_3->setDisabled(false);
    if (p_box1 == 4 || p_box2 == 4)
        this->ui->btn_4->setDisabled(false);
    if (p_box1 == 5 || p_box2 == 5)
        this->ui->btn_5->setDisabled(false);
    if (p_box1 == 6 || p_box2 == 6)
        this->ui->btn_6->setDisabled(false);
    if (p_box1 == 7 || p_box2 == 7)
        this->ui->btn_1->setDisabled(false);
    if (p_box1 == 8 || p_box2 == 8)
        this->ui->btn_1->setDisabled(false);
    if (p_box1 == 9 || p_box2 == 9)
        this->ui->btn_1->setDisabled(false);
    if (p_box1 == 10 || p_box2 == 10)
        this->ui->btn_1->setDisabled(false);
    if (p_box1 == 11 || p_box2 == 11)
        this->ui->btn_1->setDisabled(false);
    if (p_box1 == 12 || p_box2 == 12)
        this->ui->btn_1->setEnabled(true);
    if (p_box1 == 13 || p_box2 == 13)
        this->ui->btn_1->setEnabled(true);
    if (p_box1 == 14 || p_box2 == 14)
        this->ui->btn_1->setEnabled(true);
    if (p_box1 == 15 || p_box2 == 15)
        this->ui->btn_1->setEnabled(true);
    if (p_box1 == 16 || p_box2 == 16)
        this->ui->btn_1->setEnabled(true);
    if (p_box1 == 17 || p_box2 == 17)
        this->ui->btn_1->setEnabled(true);
    if (p_box1 == 18 || p_box2 == 18)
        this->ui->btn_1->setEnabled(true);
    if (p_box1 == 19 || p_box2 == 19)
        this->ui->btn_1->setDisabled(false);
    if (p_box1 == 20 || p_box2 == 20)
        this->ui->btn_1->setDisabled(false);
    if (p_box1 == 21 || p_box2 == 21)
        this->ui->btn_1->setDisabled(false);
    if (p_box1 == 22 || p_box2 == 22)
        this->ui->btn_1->setDisabled(false);
    if (p_box1 == 23 || p_box2 == 23)
        this->ui->btn_1->setDisabled(false);
     if (p_box1 == 23 || p_box2 == 23)
        this->ui->btn_1->setDisabled(false);



}

void playwindow::allEnable()
{
    //If all are no more active
    if(!this->ui->btn_1->isEnabled() &&
       !this->ui->btn_2->isEnabled() &&
       !this->ui->btn_4->isEnabled() &&
       !this->ui->btn_5->isEnabled() &&
       !this->ui->btn_6->isEnabled() &&
       !this->ui->btn_7->isEnabled() &&
       !this->ui->btn_8->isEnabled() &&
       !this->ui->btn_9->isEnabled() &&
       !this->ui->btn_10->isEnabled() &&
       !this->ui->btn_11->isEnabled() &&
       !this->ui->btn_12->isEnabled() &&
       !this->ui->btn_13->isEnabled() &&
       !this->ui->btn_14->isEnabled() &&
       !this->ui->btn_15->isEnabled() &&
       !this->ui->btn_16->isEnabled() &&
       !this->ui->btn_17->isEnabled() &&
       !this->ui->btn_18->isEnabled() &&
       !this->ui->btn_19->isEnabled() &&
       !this->ui->btn_20->isEnabled() &&
       !this->ui->btn_21->isEnabled() &&
       !this->ui->btn_22->isEnabled() &&
       !this->ui->btn_23->isEnabled() &&
       !this->ui->btn_24->isEnabled()
       )
    {      
        this->ui->btn_1->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_2->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_3->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_4->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_5->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_6->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_7->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_8->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_9->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_10->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_11->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_12->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_13->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_14->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_15->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_16->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_17->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_18->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_19->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_20->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_21->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_22->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_23->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");
        this->ui->btn_24->setStyleSheet("background: rgba(255,255,255,0); color: rgb(213, 216, 220, 0);");

        QLabel *label =  new QLabel(this);
        QFont font("Arial", 35);
        label->setStyleSheet("QLabel {background: rgba(255,255,255,0); color: rgb(213, 216, 220);}");
        label->setGeometry(0, 0, 680, 300);
        label->setMinimumWidth(100);
        label->setAlignment(Qt::AlignCenter);
        label->setFont(font);
        QString scoreTries = QString::number(getCounterTires());
        label->setText("WELL DONE!\n\nScore " + scoreTries);
        label->show();
    }
}

void playwindow::on_btn_exitGp_released()
{
    //If one is still active
    if(this->ui->btn_1->isEnabled() ||
       this->ui->btn_2->isEnabled() ||
       this->ui->btn_4->isEnabled() ||
       this->ui->btn_5->isEnabled() ||
       this->ui->btn_6->isEnabled() ||
       this->ui->btn_7->isEnabled() ||
       this->ui->btn_8->isEnabled() ||
       this->ui->btn_9->isEnabled() ||
       this->ui->btn_10->isEnabled() ||
       this->ui->btn_11->isEnabled() ||
       this->ui->btn_12->isEnabled() ||
       this->ui->btn_13->isEnabled() ||
       this->ui->btn_14->isEnabled() ||
       this->ui->btn_15->isEnabled() ||
       this->ui->btn_16->isEnabled() ||
       this->ui->btn_17->isEnabled() ||
       this->ui->btn_18->isEnabled() ||
       this->ui->btn_19->isEnabled() ||
       this->ui->btn_20->isEnabled() ||
       this->ui->btn_21->isEnabled() ||
       this->ui->btn_22->isEnabled() ||
       this->ui->btn_23->isEnabled() ||
       this->ui->btn_24->isEnabled()
       )
    {
        //Create message box
        QMessageBox msgBox;
        msgBox.setWindowTitle("MEMORY");
        msgBox.setStyleSheet("background-image: url(:/MemoSingleObjects/backgroundWidget3.png); color: rgb(255,255,255);");
        msgBox.setText("Really want to quit?");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No );
        msgBox.setDefaultButton(QMessageBox::Save);
        int ret = msgBox.exec();
        switch (ret) {
          case QMessageBox::Yes:

               close();
              break;
          case QMessageBox::No:
              break;
          default:
              break;
        }

    }
    else if(!this->ui->btn_1->isEnabled() &&
            !this->ui->btn_2->isEnabled() &&
            !this->ui->btn_4->isEnabled() &&
            !this->ui->btn_5->isEnabled() &&
            !this->ui->btn_6->isEnabled() &&
            !this->ui->btn_7->isEnabled() &&
            !this->ui->btn_8->isEnabled() &&
            !this->ui->btn_9->isEnabled() &&
            !this->ui->btn_10->isEnabled() &&
            !this->ui->btn_11->isEnabled() &&
            !this->ui->btn_12->isEnabled() &&
            !this->ui->btn_13->isEnabled() &&
            !this->ui->btn_14->isEnabled() &&
            !this->ui->btn_15->isEnabled() &&
            !this->ui->btn_16->isEnabled() &&
            !this->ui->btn_17->isEnabled() &&
            !this->ui->btn_18->isEnabled() &&
            !this->ui->btn_19->isEnabled() &&
            !this->ui->btn_20->isEnabled() &&
            !this->ui->btn_21->isEnabled() &&
            !this->ui->btn_22->isEnabled() &&
            !this->ui->btn_23->isEnabled() &&
            !this->ui->btn_24->isEnabled()
            )
    {
        this->accept();
    }
    else
    {
        qDebug() << "Error";
    }
}
