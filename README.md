!!!!!!!!!Unustasin username-i ja emaili õigeks seada!!!!!!!!!!!

Jooksutamiseks:
1) catkin_make
2) roslaunch five_wheeler speed_runner.launch

Speed publisher saadab konstantselt (1Hz) liikumis informatsiooni "topicule" nimega "cmd_vel", kuhu r2d2_fake_controller on "subscribe"nud.
Fake controller transleerib selle vastavalt vajadusele odom struktuuri.
Rviz kuulab TransformBroadcasteri sõnumeid. Saadud informatsiooni põhjal liigutatakse vastavat frame-i (milleks hetkel on odom).

Ma panin meelega ainult otse liikumise.

Tegin ka diagrammi, kuid see on nii algeline, et pole mõtet seda vaadata.
