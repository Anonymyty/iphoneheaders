/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MRGesturePanZoomRotation : NSObject {

	double time;
	double x;
	double y;
	double deltaX;
	double deltaY;
	double scale;
	double rotation;
	double speedX;
	double speedY;
	double speedScale;
	double speedRotation;
	unsigned char direction;
	unsigned char countOfTouches;
	BOOL okToAnimate;
	BOOL isInFocusMode;
	BOOL isInZoomMode;
	double boxedProgress;
	double boxedVelocity;
	BOOL forceFinish;

}
@end

