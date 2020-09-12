import QtQuick 2.3
import QtQuick.Window 2.2
import QtQuick.Controls 2.12

Window {
    visible: true

    width: 600
    height: 600

    LineEdit {
        id: lineedit
        anchors.centerIn: parent
    }

    Text {
        id: name
        text: lineedit.text


    }

    Rectangle {
        id: earseme
        width: 75
        height: 30
        x: 50
        y: 50
        color: "yellow"
        radius: 4


        Text {
            id: cleartext
            text: qsTr("click to erase")
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                console.log("earser clicked ")
                lineedit.text = ""
            }
        }
    }

}
