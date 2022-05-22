/********************************************************************************
** Form generated from reading UI file 'textentrydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTENTRYDIALOG_H
#define UI_TEXTENTRYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_TextEntryDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTreeWidget *questTreeWidget;

    void setupUi(QDialog *TextEntryDialog)
    {
        if (TextEntryDialog->objectName().isEmpty())
            TextEntryDialog->setObjectName(QStringLiteral("TextEntryDialog"));
        TextEntryDialog->resize(498, 340);
        buttonBox = new QDialogButtonBox(TextEntryDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 290, 401, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        label = new QLabel(TextEntryDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 191, 16));
        questTreeWidget = new QTreeWidget(TextEntryDialog);
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
        questTreeWidget->setGeometry(QRect(20, 40, 461, 231));
        questTreeWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
        questTreeWidget->setItemsExpandable(true);
        questTreeWidget->header()->setVisible(false);

        retranslateUi(TextEntryDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TextEntryDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TextEntryDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TextEntryDialog);
    } // setupUi

    void retranslateUi(QDialog *TextEntryDialog)
    {
        TextEntryDialog->setWindowTitle(QApplication::translate("TextEntryDialog", "Dialog", 0));
        label->setText(QApplication::translate("TextEntryDialog", "Hover over text to see the dialogue", 0));
        QTreeWidgetItem *___qtreewidgetitem = questTreeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("TextEntryDialog", "New Column", 0));

        const bool __sortingEnabled = questTreeWidget->isSortingEnabled();
        questTreeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = questTreeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("TextEntryDialog", "Main quests", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = questTreeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("TextEntryDialog", "Parallel quests", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = questTreeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("TextEntryDialog", "Expert quests", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = questTreeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("TextEntryDialog", "Time rift quests", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = questTreeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QApplication::translate("TextEntryDialog", "Teacher quests", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = questTreeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QApplication::translate("TextEntryDialog", "Training quests", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = questTreeWidget->topLevelItem(6);
        ___qtreewidgetitem7->setText(0, QApplication::translate("TextEntryDialog", "Fu quests", 0));
        QTreeWidgetItem *___qtreewidgetitem8 = questTreeWidget->topLevelItem(7);
        ___qtreewidgetitem8->setText(0, QApplication::translate("TextEntryDialog", "Legend Patrol quests", 0));
        QTreeWidgetItem *___qtreewidgetitem9 = questTreeWidget->topLevelItem(8);
        ___qtreewidgetitem9->setText(0, QApplication::translate("TextEntryDialog", "Raid quests", 0));
        QTreeWidgetItem *___qtreewidgetitem10 = questTreeWidget->topLevelItem(9);
        ___qtreewidgetitem10->setText(0, QApplication::translate("TextEntryDialog", "Frieza siege quests", 0));
        QTreeWidgetItem *___qtreewidgetitem11 = questTreeWidget->topLevelItem(10);
        ___qtreewidgetitem11->setText(0, QApplication::translate("TextEntryDialog", "Hero Colosseum (main quests)", 0));
        QTreeWidgetItem *___qtreewidgetitem12 = questTreeWidget->topLevelItem(11);
        ___qtreewidgetitem12->setText(0, QApplication::translate("TextEntryDialog", "Hero Colosseum (misc quests)", 0));
        QTreeWidgetItem *___qtreewidgetitem13 = questTreeWidget->topLevelItem(12);
        ___qtreewidgetitem13->setText(0, QApplication::translate("TextEntryDialog", "Hero Colosseum (free battle)", 0));
        questTreeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class TextEntryDialog: public Ui_TextEntryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTENTRYDIALOG_H
