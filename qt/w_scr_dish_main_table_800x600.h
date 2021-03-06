#ifndef W_SCR_DISH_MAIN_TABLE_800X600_H
#define W_SCR_DISH_MAIN_TABLE_800X600_H

#include <QDialog>
#include "w_scr_dish_main.h"
#include "w_scr_dish_pay_widget.h"
#include "w_m_member_telcoming_table.h"

class lds_roundeddialog_rect_pop;
namespace Ui {
class w_scr_dish_main_table_800x600;
}

class w_scr_dish_main_table_800x600 : public w_scr_dish_main
{
    Q_OBJECT

public:
    explicit w_scr_dish_main_table_800x600(const QString &ch_tableno, const QString &ch_billno, const QString &orderSn,
                                           QWidget *parent = 0,
                                           const w_m_member_telComing_table::telComingData &member_from_tel = w_m_member_telComing_table::telComingData());
    virtual ~w_scr_dish_main_table_800x600();
protected slots:
    virtual void menuhide();
    virtual void updateTakebillState();
    virtual void updateTakebillDesc();
    virtual void retranslateView();
    virtual void loadData();
    virtual void updatequitDish(const QModelIndex &current, const QModelIndex &/*previous*/) ;
    virtual void updatememberchecked();
private:
    QPointer<lds_roundeddialog_rect_pop>menu_special;
    QString orderSn;
private slots:
    void tofunctionshow();
    void tochangeTableShowFormat();
    void tochangeMemberShowFormat();
    void to_input_vch_waiter();
    void to_input_int_person();
    void to_input_vch_memo();

    void to_menu_special_reject();
    void to_switch_print_reprint();
    void toreprint();
    
    void toReadMember();
private:
    void changeTableShowFormat();
    void changeMemberShowFormat();
private:
    Ui::w_scr_dish_main_table_800x600 *ui;
    int table_format_index;
    int member_format_index;
};

#endif // W_SCR_DISH_MAIN_TABLE_800X600_H
