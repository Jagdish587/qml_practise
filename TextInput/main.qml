import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    //    TextInput {
    //        id: input
    //        color: "#151515"
    //        selectionColor: "green"
    //        font.pixelSize: 16
    //        font.bold: true
    //        width: parent.width - 16
    //        maximumLength: 16
    //        anchors.centerIn: parent
    //        focus: true
    //        text: "hello "
    //        cursorVisible: false
    //    }
    Rectangle {
        id: frame
        width: parent.width
        height: 40
        border.color: "grey"
        border.width: 4
        y: parent.y + 20

        TextInput {
            id: textinput
            anchors.fill: parent
            anchors.margins: 4
            cursorVisible: true
            cursorPosition: 2 // show the cursor at 2nd postion
            text: "abcdjljlsdk"
            // autoScroll: false , this will block text from scrolling if it crosses width
        }
    }
}
