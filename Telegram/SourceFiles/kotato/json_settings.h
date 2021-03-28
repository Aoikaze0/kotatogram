/*
This file is part of Kotatogram Desktop,
the unofficial app based on Telegram Desktop.

For license and copyright information please follow this link:
https://github.com/kotatogram/kotatogram-desktop/blob/dev/LEGAL
*/
#pragma once

#include <QtCore/QTimer>

namespace Kotato {
namespace JsonSettings {

class Manager : public QObject {
	Q_OBJECT

public:
	Manager();
	void fill();
	void write(bool force = false);

public Q_SLOTS:
	void writeTimeout();

private:
	void writeDefaultFile();
	void writeCurrentSettings();
	bool readCustomFile();
	void writing();

	QTimer _jsonWriteTimer;

};

void Start();
void Write();
void Finish();

} // namespace JsonSettings
} // namespace Kotato
