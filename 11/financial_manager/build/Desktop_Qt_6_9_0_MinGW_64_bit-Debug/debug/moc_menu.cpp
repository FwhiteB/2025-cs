/****************************************************************************
** Meta object code from reading C++ file 'menu.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../menu.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN4MenuE_t {};
} // unnamed namespace

template <> constexpr inline auto Menu::qt_create_metaobjectdata<qt_meta_tag_ZN4MenuE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Menu",
        "to_add_record",
        "",
        "to_delete_record",
        "to_edit_record",
        "to_generate_report",
        "to_get_help",
        "to_load_from_file",
        "to_save_to_file",
        "to_view_record",
        "leave_program"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'to_add_record'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'to_delete_record'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'to_edit_record'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'to_generate_report'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'to_get_help'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'to_load_from_file'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'to_save_to_file'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'to_view_record'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'leave_program'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Menu, qt_meta_tag_ZN4MenuE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Menu::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4MenuE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4MenuE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4MenuE_t>.metaTypes,
    nullptr
} };

void Menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Menu *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->to_add_record(); break;
        case 1: _t->to_delete_record(); break;
        case 2: _t->to_edit_record(); break;
        case 3: _t->to_generate_report(); break;
        case 4: _t->to_get_help(); break;
        case 5: _t->to_load_from_file(); break;
        case 6: _t->to_save_to_file(); break;
        case 7: _t->to_view_record(); break;
        case 8: _t->leave_program(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Menu::*)()>(_a, &Menu::to_add_record, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Menu::*)()>(_a, &Menu::to_delete_record, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Menu::*)()>(_a, &Menu::to_edit_record, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Menu::*)()>(_a, &Menu::to_generate_report, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Menu::*)()>(_a, &Menu::to_get_help, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Menu::*)()>(_a, &Menu::to_load_from_file, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Menu::*)()>(_a, &Menu::to_save_to_file, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Menu::*)()>(_a, &Menu::to_view_record, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Menu::*)()>(_a, &Menu::leave_program, 8))
            return;
    }
}

const QMetaObject *Menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Menu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4MenuE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Menu::to_add_record()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Menu::to_delete_record()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Menu::to_edit_record()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Menu::to_generate_report()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Menu::to_get_help()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Menu::to_load_from_file()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Menu::to_save_to_file()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Menu::to_view_record()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Menu::leave_program()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
