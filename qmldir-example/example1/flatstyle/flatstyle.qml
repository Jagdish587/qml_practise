import QtQuick 2.12
import QtQuick.Controls 2.12
import Theme 1.0

ApplicationWindow {
    id: window
    visible: true
    minimumWidth: 360
    height: 480

    title: qsTr("Flat Style")

    Theme {
        id: mytheme
    }

    Component.onCompleted: {
        console.log("Hello New Jagdish flastyle loaded " + mytheme.myname)
    }
}
