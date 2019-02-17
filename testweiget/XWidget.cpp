#include "XWidget.h"



XWidget::XWidget()
{
	connect(this, SIGNAL(Hide()), this, SLOT(hide()));
}


XWidget::~XWidget()
{
}
