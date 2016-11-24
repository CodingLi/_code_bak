// oplView.h : CoplView 类的接口
//


#pragma once
#include "OpenGL.h"

class CoplView : public CView
{
protected: // 仅从序列化创建
	CoplView();
	DECLARE_DYNCREATE(CoplView)

// 属性
public:
	CoplDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CoplView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
private:
	COpenGL opengl;
	bool begin;
	HGLRC hRC;
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // oplView.cpp 中的调试版本
inline CoplDoc* CoplView::GetDocument() const
   { return reinterpret_cast<CoplDoc*>(m_pDocument); }
#endif

