/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QTreeWidget *questTreeWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(522, 456);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        questTreeWidget = new QTreeWidget(centralWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        new QTreeWidgetItem(questTreeWidget);
        questTreeWidget->setObjectName(QStringLiteral("questTreeWidget"));
        questTreeWidget->setGeometry(QRect(30, 30, 461, 352));
        questTreeWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
        questTreeWidget->setItemsExpandable(true);
        questTreeWidget->header()->setVisible(false);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 522, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "XV2 Quest Importer", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        QTreeWidgetItem *___qtreewidgetitem = questTreeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "New Column", 0));

        const bool __sortingEnabled = questTreeWidget->isSortingEnabled();
        questTreeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = questTreeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "Main quests", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = questTreeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "Parallel quests", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = questTreeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "Expert quests", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = questTreeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "Time rift quests", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = questTreeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "Teacher quests", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = questTreeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "Training quests", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = questTreeWidget->topLevelItem(6);
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "Fu quests", 0));
        QTreeWidgetItem *___qtreewidgetitem8 = questTreeWidget->topLevelItem(7);
        ___qtreewidgetitem8->setText(0, QApplication::translate("MainWindow", "Legend Patrol quests", 0));
        QTreeWidgetItem *___qtreewidgetitem9 = questTreeWidget->topLevelItem(8);
        ___qtreewidgetitem9->setText(0, QApplication::translate("MainWindow", "Raid quests", 0));
        QTreeWidgetItem *___qtreewidgetitem10 = questTreeWidget->topLevelItem(9);
        ___qtreewidgetitem10->setText(0, QApplication::translate("MainWindow", "Frieza siege quests", 0));
        QTreeWidgetItem *___qtreewidgetitem11 = questTreeWidget->topLevelItem(10);
        ___qtreewidgetitem11->setText(0, QApplication::translate("MainWindow", "Hero Colosseum (main quests)", 0));
        QTreeWidgetItem *___qtreewidgetitem12 = questTreeWidget->topLevelItem(11);
        ___qtreewidgetitem12->setText(0, QApplication::translate("MainWindow", "Hero Colosseum (misc quests)", 0));
        QTreeWidgetItem *___qtreewidgetitem13 = questTreeWidget->topLevelItem(12);
        ___qtreewidgetitem13->setText(0, QApplication::translate("MainWindow", "Hero Colosseum (free battle)", 0));
        QTreeWidgetItem *___qtreewidgetitem14 = questTreeWidget->topLevelItem(13);
        ___qtreewidgetitem14->setText(0, QApplication::translate("MainWindow", "Player Raid Boss", 0));
        QTreeWidgetItem *___qtreewidgetitem15 = questTreeWidget->topLevelItem(14);
        ___qtreewidgetitem15->setText(0, QApplication::translate("MainWindow", "Tournament quests", 0));
        QTreeWidgetItem *___qtreewidgetitem16 = questTreeWidget->topLevelItem(15);
        ___qtreewidgetitem16->setText(0, QApplication::translate("MainWindow", "Crystal Raid", 0));
        QTreeWidgetItem *___qtreewidgetitem17 = questTreeWidget->topLevelItem(16);
        ___qtreewidgetitem17->setText(0, QApplication::translate("MainWindow", "Extra Raid quests", 0));
        QTreeWidgetItem *___qtreewidgetitem18 = questTreeWidget->topLevelItem(17);
        ___qtreewidgetitem18->setText(0, QApplication::translate("MainWindow", "Million Raid quest", 0));
        QTreeWidgetItem *___qtreewidgetitem19 = questTreeWidget->topLevelItem(18);
        ___qtreewidgetitem19->setText(0, QApplication::translate("MainWindow", "Cross Versus", 0));
        QTreeWidgetItem *___qtreewidgetitem20 = questTreeWidget->topLevelItem(19);
        ___qtreewidgetitem20->setText(0, QApplication::translate("MainWindow", "Festival of Universes", 0));
        questTreeWidget->setSortingEnabled(__sortingEnabled);

        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
