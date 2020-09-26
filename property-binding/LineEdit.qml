import QtQuick 2.0

Rectangle {
    id: myrect

   width: 150
   height: 150
   color: "grey"
   radius: 4

   property alias text: textinput.text

   TextInput {
       id: textinput
       text: ""
       focus: true
       anchors.horizontalCenter: parent.horizontalCenter
       anchors.verticalCenter: parent.verticalCenter


   }
}
