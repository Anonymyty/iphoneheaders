/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPathElement.h>

@interface OADQuadBezierToPathElement : OADPathElement {

	OADAdjustPoint mControlPoint;
	OADAdjustPoint mToPoint;

}
-(OADAdjustPoint)toPoint;
-(OADAdjustPoint)controlPoint;
-(id)initWithControlPoint:(OADAdjustPoint)arg1 toPoint:(OADAdjustPoint)arg2 ;
@end

