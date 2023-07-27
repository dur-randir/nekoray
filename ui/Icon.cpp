#include "Icon.hpp"

#include "main/NekoGui.hpp"

#include <QPainter>

QPixmap Icon::GetTrayIcon(Icon::TrayIconStatus status) {
    QPixmap pixmap;

    // software embedded icon
    if (status == TrayIconStatus::NONE) {
        auto pixmap_read = QPixmap(":/neko/nekoray.png");
        if (!pixmap_read.isNull()) pixmap = pixmap_read;
    } else {
        auto pixmap_read = QPixmap(":/neko/nekobox.png");
        if (!pixmap_read.isNull()) pixmap = pixmap_read;
    }

    return pixmap;
}

QPixmap Icon::GetMaterialIcon(const QString &name) {
    QPixmap pixmap(":/icon/material/" + name + ".svg");
    return pixmap;
}
