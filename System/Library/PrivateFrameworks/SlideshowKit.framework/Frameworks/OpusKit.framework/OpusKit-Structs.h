/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct SCNVector3 {
	float x;
	float y;
	float z;
} SCNVector3;

typedef struct _NSZone* NSZoneRef;

typedef struct CGImage* CGImageRef;

typedef struct {
	CGSize center;
	CGSize span;
} SCD_Struct_OK4;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct SCNVector4 {
	float x;
	float y;
	float z;
	float w;
} SCNVector4;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct CATransform3D {
	double m11;
	double m12;
	double m13;
	double m14;
	double m21;
	double m22;
	double m23;
	double m24;
	double m31;
	double m32;
	double m33;
	double m34;
	double m41;
	double m42;
	double m43;
	double m44;
} CATransform3D;

typedef struct OpaqueJSValue* OpaqueJSValueRef;

typedef struct UIOffset {
	double horizontal;
	double vertical;
} UIOffset;

typedef union {
	UIOffset offsetFromCenter;
	CGPoint anchorPoint;
} SCD_Union_OK12;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	id field1;
	id field2;
	double field3;
	CGSize field4;
	CGSize field5;
	float field6;
	CGSize field7;
	CGPoint field8;
	CGPoint field9;
	double field10;
	CGPoint field11;
	CGAffineTransform field12;
	BOOL field13;
	double field14;
} SCD_Struct_OK14;

typedef struct CGContext* CGContextRef;

typedef struct {
	unsigned long long startState;
	CGPoint startPoint;
	CGPoint lastPoint;
	unsigned long long endState;
} SCD_Struct_OK16;
