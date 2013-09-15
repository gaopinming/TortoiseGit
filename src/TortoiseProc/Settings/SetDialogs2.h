// TortoiseGit - a Windows shell extension for easy version control

// Copyright (C) 2011-2013 - TortoiseGit
// Copyright (C) 2003-2008, 2013 - TortoiseSVN

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
#pragma once
#include "SettingsPropPage.h"
#include "Tooltip.h"
#include "registry.h"
#include "afxwin.h"


/**
 * \ingroup TortoiseProc
 * Settings page responsible for dialog settings.
 */
class CSetDialogs2 : public ISettingsPropPage
{
	DECLARE_DYNAMIC(CSetDialogs2)

public:
	CSetDialogs2();
	virtual ~CSetDialogs2();

	UINT GetIconID() {return IDI_DIALOGS;}

// Dialog Data
	enum { IDD = IDD_SETTINGSDIALOGS2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL OnApply();
	afx_msg void OnChange();
	afx_msg void OnCbnSelchangeAutoclosecombo();
	afx_msg void OnBnClickedBrowsecheckoutpath();

private:
	CToolTips		m_tooltips;
	CRegDWORD		m_regUseRecycleBin;
	BOOL			m_bUseRecycleBin;
	CRegDWORD		m_regAutoClose;
	DWORD_PTR		m_dwAutoClose;
	CComboBox		m_cAutoClose;
	CRegDWORD		m_regAutocompletion;
	BOOL			m_bAutocompletion;
	CRegDWORD		m_regAutocompletionTimeout;
	DWORD			m_dwAutocompletionTimeout;
	CRegDWORD		m_regMaxHistory;
	DWORD			m_dwMaxHistory;
	CRegDWORD		m_regAutoSelect;
	BOOL			m_bAutoSelect;
};