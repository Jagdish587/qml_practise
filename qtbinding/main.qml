import QtQuick 2.3
import QtQuick.Window 2.2
import QtQuick.Controls 2.12

Window {
    visible: true

    width: 600
    height: 600

    Rectangle {
        id: earseme
        width: 75
        height: width * 2
        x: 50
        y: 50
        color: "yellow"
        radius: 4

        Component.onCompleted: {
           earseme.height =  Qt.binding(function() { return earseme.width * 2 })
        }

        MouseArea
        {
            anchors.fill: parent
            onClicked: {

               earseme.width = 50

                console.log("height = "+height)

            }
        }

    }

}
