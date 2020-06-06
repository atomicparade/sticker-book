#include <QMutableListIterator>

#include "copyprofilelistmodel.h"

CopyProfileListModel::CopyProfileListModel(QObject *parent) : QAbstractListModel(parent)
{
}

QVariant CopyProfileListModel::data(const QModelIndex &index, int role) const
{
    if (index.row() < 0 || index.row() >= _copyProfiles.length())
    {
        return QVariant();
    }

    switch (role)
    {
    case Qt::DisplayRole:
    case Qt::EditRole:
    case Qt::ToolTipRole:
    case Qt::StatusTipRole:
    case Qt::WhatsThisRole:
    case Qt::AccessibleTextRole:
    case Qt::AccessibleDescriptionRole:
        return _copyProfiles.at(index.row()).name();
        break;
    }

    return QVariant();
}

int CopyProfileListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);

    return _copyProfiles.length();
}

CopyProfile CopyProfileListModel::at(int index)
{
    return _copyProfiles.at(index);
}

void CopyProfileListModel::addCopyProfile(CopyProfile copyProfile)
{
    _copyProfiles.append(copyProfile);
}

void CopyProfileListModel::removeCopyProfile(CopyProfile copyProfile)
{
    _copyProfiles.removeAll(copyProfile);
}
