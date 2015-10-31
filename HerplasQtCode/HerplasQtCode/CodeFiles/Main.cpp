/*
@Copyright: Copyright ® 2015 LeLe570929726. All rights reserved.

@Project: HerplasQt - Code
@Intro: Qt is a powerful and easy framwork. It is also cross-platform. But it's UI editing and coding is not very friendly.
                  So, this project is present! In IDE utility, you can generate UI easily. Of course, it's visualized editing. Then, IDE
				  can make an UI file. In coding utility, you can analyze the UI file and make the UI automatically in program. It
				  includes Event System and Factory System and many other utilities.
@Licence: This project is open-source. And it follow GNU Lesser General Public License v3. You can modify and
                         distribute freely as long as you follow the license.
*/
/*
@Author: LeLe570929726
@Last Change Time: 2015/10/31 10:04
*/

/*
@Intro: Includes
*/
#include <QApplication>

/*
@Type: Function

@Name: main
@Paramter: argc - Parameter size
                             argv - Parameter test
@Return: none
@Intro: Program's entry
*/
int main(int argc, char *argv[]) {
	// Create app object
	QApplication a(argc, argv);

	// Into event loop
	return a.exec();
}