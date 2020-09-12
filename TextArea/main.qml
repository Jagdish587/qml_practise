import QtQuick 2.3
import QtQuick.Window 2.2
import QtQuick.Controls 2.12

Window {
    visible: true

    width: 600
    height: 600




    Rectangle {
        id: childrenRect
        width: 200
        height: 200
        visible: true
        color: "yellow"
        anchors.centerIn: parent

        ScrollView {
            id: view
            anchors.fill: parent
            visible: true
            ScrollBar.vertical.policy: ScrollBar.AlwaysOn
             ScrollBar.horizontal.policy: ScrollBar.AlwaysOn

            TextArea {
                text: "TextArea\n...\n...\n...\n...\n...\n...\n"
            }
        }
    }





}
