// SortListNodes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"ListNodeInput.h"
#include"SortListNodes.h"
#include"ListNodeOutput.h"

int main()
{
	SingleListInput SLI;
	ListNode *H =SLI.Input();
	SortListNodes SLN;
	H = SLN.SortList(H);
	ListNodeOutput LNO;
	LNO.ListOutput(H);
	exit(0);
    return 0;
}

